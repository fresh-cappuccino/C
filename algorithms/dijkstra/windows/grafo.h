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
		int nvertices;	// N�mero de v�rtices do grafo

		std::list <std::pair <int, int> > * adj;	// vari�vel respons�vel por realizar a adjac�ncia entre 2 n�s

	public:

		// Construtor
		Grafo (int nvertices);


		/**	---------------------------------------------------
			M�TODO PARA CRIAR UMA ARESTA DIRECIONAL ENTRE 2 N�S
			---------------------------------------------------

			@param: int v1 --> N� de origem da aresta

			@param: int v2 --> N� de destino da aresta

			@param: int custo --> custo da aresta
		 **/
		void addAresta (int v1, int v2, int custo);


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
		void imprimeNo (stdist **arv, int pos, int b, int *type_print);


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
		void showGrafo (stdist **a, int pos, int b, int *size, int *type_print, bool passo_a_passo);


		/**	---------------------------------------------
			FUN��O PARA DESCOBRIR O TAMANHO DE UM CAMINHO
			---------------------------------------------

			@param: stdist **a --> �rvore armazenando o caminho

			@param: int orig --> Posi��o de origem do caminho

			@param: int dest --> Posi��o de destino do caminho
		 **/
		int getPathLen (stdist **a, int orig, int dest);


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
		void showPath (stdist **a, int orig, int dest, int b, int *type_print, bool passo_a_passo);


		/**	---------------------------------------------
			M�TODO DE IMPLEMENTA��O DO ALGORITMO DIJKSTRA
			---------------------------------------------

			@param: int orig --> posi��o de origem do grafo

			@param: stdist **arvore --> grafo
		 **/
		void dijkstra (int orig, stdist **arvore);
};


#endif

