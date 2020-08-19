#ifndef _GRAFO_H
#define _GRAFO_H

#include <iostream>
#include <list>
#include <queue>

#include <conio.h>
#include <limits.h>

#include "desc_estadios.h"
#include "g_struct.h"
#include "prog_utils.h"


class Grafo {
	private:
		int nvertices;	// Número de vértices do grafo
		
		std::list <std::pair <int, int> > * adj;	// variável responsável por realizar a adjacência entre 2 nós

	public:
		
		// Construtor
		Grafo (int nvertices) {
			
			this->nvertices = nvertices;
			adj = new std::list <std::pair <int, int> >[nvertices];
			
		}
	
		
		/**	---------------------------------------------------
			MÉTODO PARA CRIAR UMA ARESTA DIRECIONAL ENTRE 2 NÓS
			---------------------------------------------------
			
			@param: int v1 --> Nó de origem da aresta
			
			@param: int v2 --> Nó de destino da aresta
			
			@param: int custo --> custo da aresta
		 **/
		void addAresta (int v1, int v2, int custo) {
			
			adj[v1].push_back (std::make_pair (v2, custo));
			
		}
		
		
		/**	-------------------------------------
			MÉTODO PARA IMPRIMIR O VALOR DE UM NÓ
			-------------------------------------
			
			@param: stdist **arv --> arvore com dijkstra implementado
			
			@param: int pos --> posição da árvore a ser impressa
			
			@param: int b --> quantidade de vezes que a tabulação será realizada
			
			@param: int *type_print --> tipo de impressão (0 --> Imprime o código do nó,
														   1 --> Imprime o nome do clube;
														   2 --> Imprime o nome do estádio;
		 **/
		void imprimeNo (stdist **arv, int pos, int b, int *type_print) {
			
			int i;
			
			std::cout << std::endl;
			
			for (i = 0; i < b; i++) std::cout << ((*type_print)  ? "\t\t" : "\t");	// Imprime identação
			
			// Verifica o tipo de impressão
			switch ((*type_print)) {
				
				case 0:	// Código do clube
					std::cout << "Nó " << arv[pos]->cod;
					break;
				
				case 1:	// Nome do clube
					std::cout << handlerClube(pos);
					break;
				
				case 2:	// Nome do estádio
					std::cout << handlerEstadio(pos);
					break;
				
				default:
					return;
					break;
				
			}
			
			std::cout << " (";
			if ((*type_print)) std::cout << "Nó " << arv[pos]->cod << ", "; // Se o tipo de impressão for 1 ou 2, imprime o código do nó como adicional
			std::cout << "custo = " << arv[pos]->custo << ")";	// Impressão do custo do nó
			
		}
		
		
		/**	--------------------------------------------
			MÉTODO PARA MOSTRAR A ÁRVORE GERADORA MÍNIMA
			--------------------------------------------
			
			@param: stdist **arv --> arvore com dijkstra implementado
			
			@param: int pos --> posição da árvore a ser impressa
			
			@param: int b --> quantidade de vezes que a tabulação será realizada
			
			@param: stdist *size --> tamanho do vetor de ligação entre as árvores
			
			@param: int *type_print --> tipo de impressão (0 --> Imprime o código do nó,
														   1 --> Imprime o nome do clube;
														   2 --> Imprime o nome do estádio;
														   
			@param: int passo_a_passo --> indica se o usuário deseja printar a árvore de uma vez, ou passo a passo
										  (false --> Imprime toda a árvore seu pausa
										   true  --> Imprime a árvore com pausas
		 **/
		void showGrafo (stdist **a, int pos, int b, int *size, int *type_print, bool passo_a_passo) {
			
			int next = 0;
			
			imprimeNo (a, pos, b, type_print);
			
			for (int i = 0; i < (*size); i++)
				// Verifica se há conexão posterior
				if (a[pos]->next[i]) {
					
					if (!(next)) {
						std::cout << " --> ";
						std::cout << std::endl;
					}
					
					if (passo_a_passo) while (getch() != 13);
					
					showGrafo (a, i, b + 1, size, type_print, passo_a_passo);	// Entra na conexão posterior
					std::cout << std::endl;
					
					next++;
					
				}
			
			if (!(next)) return;	// Se não ouve nenhuma conexão, retorna a atividade anterior
			
		}
		
		
		/**	---------------------------------------------
			FUNÇÃO PARA DESCOBRIR O TAMANHO DE UM CAMINHO
			---------------------------------------------
			
			@param: stdist **a --> Árvore armazenando o caminho
			
			@param: int orig --> Posição de origem do caminho
			
			@param: int dest --> Posição de destino do caminho
		 **/
		int getPathLen (stdist **a, int orig, int dest) {
			int i = 1;
			
			if (orig == dest) {
				
				return 1;
				
			}
			
			return i + getPathLen(a, orig, a[dest]->previous->cod - 1);
		}
		
		
		/**	------------------------------------
			MÉTODO PARA MOSTRAR O CAMINHO MÍNIMO
			------------------------------------
			
			@param: stdist **arv --> arvore com dijkstra implementado
			
			@param: int orig --> posição da origem do caminho
			
			@param: int dest --> posição da destino do caminho
			
			@param: int b --> quantidade de vezes que a tabulação será realizada
			
			@param: int *type_print --> tipo de impressão (0 --> Imprime o código do nó,
														   1 --> Imprime o nome do clube;
														   2 --> Imprime o nome do estádio;
														   
			@param: int passo_a_passo --> indica se o usuário deseja printar a árvore de uma vez, ou passo a passo
										  (false --> Imprime toda a árvore seu pausa
										   true  --> Imprime a árvore com pausas
		 **/
		void showPath (stdist **a, int orig, int dest, int b, int *type_print, bool passo_a_passo) {
			
			
			if (dest == orig) {
				imprimeNo (a, a[orig]->cod - 1, b, type_print);
				
				return;
			}
			
			showPath(a, orig, a[dest]->previous->cod - 1, b - 1, type_print, passo_a_passo);	// Entra em recursão até que chegue na origem
			std::cout << " --> ";
			if (passo_a_passo) while (getch() != 13);
			std::cout << std::endl;
			imprimeNo (a, a[dest]->cod - 1, b, type_print);
			
		}
		
		
		/**	---------------------------------------------
			MÉTODO DE IMPLEMENTAÇÃO DO ALGORITMO DIJKSTRA
			---------------------------------------------
			
			@param: int orig --> posição de origem do grafo
			
			@param: stdist **arvore --> grafo
		 **/
		void dijkstra (int orig, stdist **arvore) {
			
			// fechados conta quantos nós foram fechados
			// dist[] guarda os pesos dos vértices
			int fechados = 0, dist[nvertices];
			int visitados[nvertices];
			
			// Variável para gerenciar fila de prioridades
			std::priority_queue <std::pair <int, int>, std::vector <std::pair <int, int> >, std::greater <std::pair <int, int> > > pq;
			
			// Inicia os pesos dos vértices ("INFINITO")
			for (int i = 0; i < nvertices; i++) {
				dist[i] = INT_MAX / 2;
				visitados[i] = false;
			}
			
			dist[orig] = 0;	// Peso do vértice de origem passa a ser 0
			
			pq.push (std::make_pair (dist[orig], orig));	// Adiciona o nó de origem na fila de prioridades
			
			while (!pq.empty()) {
				
				std::pair <int, int> p = pq.top();
				int u = p.second;
				pq.pop();
				
				if (visitados[u] == false) {
					
					visitados[u] = true;
					
					// Iterador it para percorrer as adjacências de um vértice
					std::list <std::pair <int, int> >::iterator it;
					
					for (it = adj[u].begin(); it != adj[u].end(); it++) {
						
						int v = it->first;	// Código do nó
						int custo_aresta = it->second;	// Custo da adjacência
						
						// Se o custo for da iteração atual for menor que o armazenado,
						// substitui o custo e o caminho até o nó e o adiciona na fila de prioridades
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
			
			// Atualiza os pesos de cada vértice na struct
			for (int i = 0; i < CLUBES; i++)
				arvore[i]->custo = dist[i];
			
		}
};


#endif

