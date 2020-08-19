#include <iostream>
#include <list>
#include <queue>

#include <limits.h>

#include "conio.h"
#include "desc_estadios.h"
#include "g_struct.h"
#include "grafo.h"
#include "prog_utils.h"

// Construtor
Grafo::Grafo (int nvertices) {
	this->nvertices = nvertices;
	adj = new std::list <std::pair <int, int> >[nvertices];
}


/**	---------------------------------------------------
	M�TODO PARA CRIAR UMA ARESTA DIRECIONAL ENTRE 2 N�S
	---------------------------------------------------

	@param: int v1 --> N� de origem da aresta

	@param: int v2 --> N� de destino da aresta

	@param: int custo --> custo da aresta
 **/
void Grafo::addAresta (int v1, int v2, int custo) {
	adj[v1].push_back (std::make_pair (v2, custo));
}


/**	-------------------------------------
	M�TODO PARA IMPRIMIR O VALOR DE UM N�
	-------------------------------------

	@param: stdist **arv --> arvore com dijkstra implementado

	@param: int pos --> posi��o da �rvore a ser impressa

	@param: int b --> quantidade de vezes que a tabula��o ser� realizada

	@param: int *type_print --> tipo de impress�o (0 --> Imprime o c�digo do n�,
	1 --> Imprime o nome do clube;
	2 --> Imprime o nome do est�dio;
 **/
void Grafo::imprimeNo (stdist **arv, int pos, int b, int *type_print) {
	int i;

	std::cout << std::endl;

	for (i = 0; i < b; i++) std::cout << ((*type_print)  ? "\t\t" : "\t");	// Imprime identa��o

	// Verifica o tipo de impress�o
	switch ((*type_print)) {
		case 0:	// C�digo do clube
			std::cout << "N� " << arv[pos]->cod;
			break;

		case 1:	// Nome do clube
			std::cout << handlerClube(pos);
			break;

		case 2:	// Nome do est�dio
			std::cout << handlerEstadio(pos);
			break;

		default:
			return;
			break;
	}
	std::cout << " (";
	if ((*type_print)) std::cout << "N� " << arv[pos]->cod << ", "; // Se o tipo de impress�o for 1 ou 2, imprime o c�digo do n� como adicional
	std::cout << "custo = " << arv[pos]->custo << ")";	// Impress�o do custo do n�
}


/**	--------------------------------------------
	M�TODO PARA MOSTRAR A �RVORE GERADORA M�NIMA
	--------------------------------------------

	@param: stdist **arv --> arvore com dijkstra implementado

	@param: int pos --> posi��o da �rvore a ser impressa

	@param: int b --> quantidade de vezes que a tabula��o ser� realizada

	@param: stdist *size --> tamanho do vetor de liga��o entre as �rvores

	@param: int *type_print --> tipo de impress�o (0 --> Imprime o c�digo do n�,
	1 --> Imprime o nome do clube;
	2 --> Imprime o nome do est�dio;

	@param: int passo_a_passo --> indica se o usu�rio deseja printar a �rvore de uma vez, ou passo a passo
	(false --> Imprime toda a �rvore seu pausa
	true  --> Imprime a �rvore com pausas
 **/
void Grafo::showGrafo (stdist **a, int pos, int b, int *size, int *type_print, bool passo_a_passo) {
	int next = 0;

	imprimeNo (a, pos, b, type_print);

	for (int i = 0; i < (*size); i++)
		// Verifica se h� conex�o posterior
		if (a[pos]->next[i]) {
			if (!(next)) {
				std::cout << " --> ";
				std::cout << std::endl;
			}
			if (passo_a_passo) while (getch() != '\n');

			showGrafo (a, i, b + 1, size, type_print, passo_a_passo);	// Entra na conex�o posterior
			std::cout << std::endl;

			next++;
		}
	if (!(next)) return;	// Se n�o ouve nenhuma conex�o, retorna a atividade anterior
}


/**	---------------------------------------------
	FUN��O PARA DESCOBRIR O TAMANHO DE UM CAMINHO
	---------------------------------------------

	@param: stdist **a --> �rvore armazenando o caminho

	@param: int orig --> Posi��o de origem do caminho

	@param: int dest --> Posi��o de destino do caminho
 **/
int Grafo::getPathLen (stdist **a, int orig, int dest) {
	int i = 1;

	if (orig == dest) return 1;

	return i + getPathLen(a, orig, a[dest]->previous->cod - 1);
}


/**	------------------------------------
	M�TODO PARA MOSTRAR O CAMINHO M�NIMO
	------------------------------------

	@param: stdist **arv --> arvore com dijkstra implementado

	@param: int orig --> posi��o da origem do caminho

	@param: int dest --> posi��o da destino do caminho

	@param: int b --> quantidade de vezes que a tabula��o ser� realizada

	@param: int *type_print --> tipo de impress�o (0 --> Imprime o c�digo do n�,
	1 --> Imprime o nome do clube;
	2 --> Imprime o nome do est�dio;

	@param: int passo_a_passo --> indica se o usu�rio deseja printar a �rvore de uma vez, ou passo a passo
	(false --> Imprime toda a �rvore seu pausa
	true  --> Imprime a �rvore com pausas
 **/
void Grafo::showPath (stdist **a, int orig, int dest, int b, int *type_print, bool passo_a_passo) {
	if (dest == orig) {
		imprimeNo (a, a[orig]->cod - 1, b, type_print);

		return;
	}
	showPath(a, orig, a[dest]->previous->cod - 1, b - 1, type_print, passo_a_passo);	// Entra em recurs�o at� que chegue na origem
	std::cout << " --> ";
	if (passo_a_passo) while (getch() != '\n');
	std::cout << std::endl;
	imprimeNo (a, a[dest]->cod - 1, b, type_print);
}


/**	---------------------------------------------
	M�TODO DE IMPLEMENTA��O DO ALGORITMO DIJKSTRA
	---------------------------------------------

	@param: int orig --> posi��o de origem do grafo

	@param: stdist **arvore --> grafo
 **/
void Grafo::dijkstra (int orig, stdist **arvore) {
	// fechados conta quantos n�s foram fechados
	// dist[] guarda os pesos dos v�rtices
	int fechados = 0, dist[nvertices];
	int visitados[nvertices];

	// Vari�vel para gerenciar fila de prioridades
	std::priority_queue <std::pair <int, int>, std::vector <std::pair <int, int> >, std::greater <std::pair <int, int> > > pq;

	// Inicia os pesos dos v�rtices ("INFINITO")
	for (int i = 0; i < nvertices; i++) {
		dist[i] = INT_MAX / 2;
		visitados[i] = false;
	}
	dist[orig] = 0;	// Peso do v�rtice de origem passa a ser 0

	pq.push (std::make_pair (dist[orig], orig));	// Adiciona o n� de origem na fila de prioridades

	while (!pq.empty()) {
		std::pair <int, int> p = pq.top();
		int u = p.second;
		pq.pop();

		if (visitados[u] == false) {
			visitados[u] = true;

			// Iterador it para percorrer as adjac�ncias de um v�rtice
			std::list <std::pair <int, int> >::iterator it;

			for (it = adj[u].begin(); it != adj[u].end(); it++) {
				int v = it->first;	// C�digo do n�
				int custo_aresta = it->second;	// Custo da adjac�ncia

				// Se o custo for da itera��o atual for menor que o armazenado,
				// substitui o custo e o caminho at� o n� e o adiciona na fila de prioridades
				if (dist[v] > (dist[u] + custo_aresta)) {
					dist[v] = dist[u] + custo_aresta;
					pq.push (std::make_pair (dist[v], v));

					if (arvore[v]->previous != NULL) arvore[v]->previous->next[v] = 0;

					arvore[u]->next[v] = dist[v];
					arvore[v]->previous = arvore[u];
				}
			}
		}
	}
	// Atualiza os pesos de cada v�rtice na struct
	for (int i = 0; i < CLUBES; i++)
		arvore[i]->custo = dist[i];
}
