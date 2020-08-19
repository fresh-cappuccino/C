#ifndef _GRAFO_H
#define _GRAFO_H

#include <list>

#include "g_struct.h"


class Grafo {
	private:
		int nvertices;	// Número de vértices do grafo

		std::list <std::pair <int, int> > * adj;	// variável responsável por realizar a adjacência entre 2 nós

	public:

		// Construtor
		Grafo (int nvertices);


		/**	---------------------------------------------------
			MÉTODO PARA CRIAR UMA ARESTA DIRECIONAL ENTRE 2 NÓS
			---------------------------------------------------

			@param: int v1 --> Nó de origem da aresta

			@param: int v2 --> Nó de destino da aresta

			@param: int custo --> custo da aresta
		 **/
		void addAresta (int v1, int v2, int custo);


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
		void imprimeNo (stdist **arv, int pos, int b, int *type_print);


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
		void showGrafo (stdist **a, int pos, int b, int *size, int *type_print, bool passo_a_passo);


		/**	---------------------------------------------
			FUNÇÃO PARA DESCOBRIR O TAMANHO DE UM CAMINHO
			---------------------------------------------

			@param: stdist **a --> Árvore armazenando o caminho

			@param: int orig --> Posição de origem do caminho

			@param: int dest --> Posição de destino do caminho
		 **/
		int getPathLen (stdist **a, int orig, int dest);


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
		void showPath (stdist **a, int orig, int dest, int b, int *type_print, bool passo_a_passo);


		/**	---------------------------------------------
			MÉTODO DE IMPLEMENTAÇÃO DO ALGORITMO DIJKSTRA
			---------------------------------------------

			@param: int orig --> posição de origem do grafo

			@param: stdist **arvore --> grafo
		 **/
		void dijkstra (int orig, stdist **arvore);
};


#endif
