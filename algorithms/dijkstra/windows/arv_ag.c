#include <iostream>

#include <stdlib.h>

#include "arv_ag.h"
#include "estadios.h"
#include "text_format.h"

Estadios estadios;
Grafo grafo (CLUBES);
stdist **arvore = (stdist**) malloc (CLUBES * sizeof(stdist*));


/**	-----------------------------------------
	M�TODO PARA MOSTRAR OS C�DIGOS DOS CLUBES
	-----------------------------------------

	@param: NoNe
 **/
void mostra_cod_clubes () {

	estadios.showCodigos();

}


/**	-------------------------------------------------------------------
	M�TODO PARA PERCORRER UM CAMINHO E PRINTAR O NOME DOS CLUBES
	-------------------------------------------------------------------

	@param: int orig --> Posi��o de origem do caminho

	@param: int dest --> Posi��o de destino do caminho
 **/
void print_path (int orig, int dest) {

	if (dest == orig) {

		print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
		std::cout << " " << arvore[orig]->cod << " - " << estadios.getClube(orig) << std::endl;
		print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
		return;

	}

	print_path (orig, arvore[dest]->previous->cod - 1);
	std::cout << " " << arvore[dest]->cod << " - " << estadios.getClube(dest) <<std::endl;
	print_block_line(1, 0, PRINT_BLOCK, '-', true, true);

}


/**	--------------------------------------------
	M�TODO PARA MOSTRAR A �RVORE GERADORA M�NIMA
	--------------------------------------------

	@param: char ans --> T�pico escolhido pelo usu�rio

	@param: bool passo_a_passo --> Gerencia se a impress�o ser� feita em pausas ou n�o
 **/
void show_arvore (char ans, bool passo_a_passo) {

	system ("CLS");

	print_insert_cod ("Digite o c�digo do Clube que ser� o ponto inicial:", 0);

	char c;
	get_cod_answer (&c, CLUBES, 0);

	/**	-------------------------------------------------------------------
		Printa os c�digos e nomes dos clubes, caso o usu�rio pressiona 'A'.
		-------------------------------------------------------------------
	 **/
	if (c == 'A') print_cod_clubes ("Digite o c�digo do Clube que ser� o ponto inicial:", c, CLUBES, true);

	if (c == '0') return;

	system ("CLS");

	init_struct (arvore, CLUBES);	// Configura a arvore com tamanho de acordo com a quantidade de clubes a serem inseridos
	init_grafo(&grafo);	// Inicializa os valores do grafo

	int origem = (int (c - '0') - 1);
	int destino = (origem) ? (origem - 1) : (origem + 1);
	int sz = CLUBES, tp = 0;

	ptitle ("�RVORE GERADORA M�NIMA");

	// Verifica qual tipo de print escolhido pelo usu�rio
	switch (ans) {

		case '1': //C�digo do clube
			for (int i = 0; i < CLUBES; i++) {

				print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
				std::cout << " " << (arvore[i]->cod) << " -> " << estadios.getClube(i) << std::endl;

			}

			break;

		case '2': //Nome do clube
			tp = 1;
			break;


		case '3': //Nome do est�dio
			tp = 2;
			break;

		case '0':
			return;
			break;
	}

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	std::cout << std::endl;

	/**	--------------------------------------------------------------------
		Caso seja uma impress�o passo a passo, � printada a mensagem na tela
		--------------------------------------------------------------------
	 **/
	if (passo_a_passo) {
		std::cout << "\tPRESSIONE [ENTER] PARA AVAN�AR" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
		std::cout << std::endl;
	}

	grafo.dijkstra(origem, arvore);	// Algoritmo dijkstra
	grafo.showGrafo(arvore, origem, 1, &sz, &tp, passo_a_passo);	// Mostra o grafo na tela

	std::cout << std::endl;

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	/**	-----------------------------------------------------------------
		Se for uma impress�o passo a passo, � indicado o fim da impress�o
		-----------------------------------------------------------------
	 **/
	if (passo_a_passo) {
		std::cout << "\tFIM DA IMPRESS�O" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
	while (getch() != 13);	// Espera o usu�rio digitar [ENTER] para continuar o programa

	system ("CLS");

}


/**	------------------------------------
	M�TODO PARA MOSTRAR O CAMINHO M�NIMO
	------------------------------------

	@param: char ans --> T�pico escolhido pelo usu�rio

	@param: bool passo_a_passo --> Gerencia se a impress�o ser� feita pausadamente ou n�o
 **/
void show_caminho (char ans, bool passo_a_passo) {

	system ("CLS");

	// Pega o n� inicial
	print_insert_cod ("Digite o c�digo do Clube que ser� o ponto inicial:", 0);

	char c;
	get_cod_answer (&c, CLUBES, 0);

	// Caso o usu�rio digite 'A', os c�digos e nomes dos clubes ser�o impressos
	if (c == 'A') print_cod_clubes ("Digite o c�digo do Clube que ser� o ponto inicial:", c, CLUBES, true);

	if (c == '0') return;

	system ("CLS");

	// Pega o c�digo do clube que ser� o ponto final o caminho
	print_insert_cod ("Digite o c�digo do Clube que ser� o ponto final:", 0);

	// Caso o ponto final seja o mesmo do ponto inicial, uma mensagem de alerta � disparada e o c�digo ter� que ser digitado novamente
	char d = toupper(getch());
	while ((d < '0' || (d > (char (CLUBES + '0'))) || d == c) && d != 'A') {
		if (d == c) {
			std::cout << std::endl;
			_perror("O PONTO FINAL N�O PODE SER O MESMO QUE O INICIAL!");
			std::cout << std::endl;
		}
		d = toupper(getch());
	}

	// Semelhante a condi��o anterior, os c�digos e nomes dos clubes ser�o impressos, caso o usu�rio digite 'A'
	if (d == 'A') print_cod_clubes ("Digite o c�digo do Clube que ser� o ponto final:", d, CLUBES, true);

	system ("CLS");

	init_struct (arvore, CLUBES);	// Inicializa a arvore de acordo com a quantidade de clubes
	init_grafo(&grafo);	// Inicializa o grafo

	// Os caracteres pegos s�o transformados em inteiros
	// � subtra�do 1 da convers�o, pois os c�digos dos clubes v�o de 1 a 8, por�m as posi��es de 0 a 7
	int origem = (int (c - '0') - 1);
	int destino = (int (d - '0') - 1);
	int tp = 0;

	if (d == '0') return;

	ptitle ("CAMINHO M�NIMO");

	// Verifica o tipo de impress�o escolhido pelo usu�rio
	switch (ans) {

		case '1': // C�digo do clube
			break;

		case '2': // Nome do clube
			tp = 1;
			break;


		case '3': // Nome do est�dio
			tp = 2;
			break;

		case '0':
			return;
			break;
	}

	grafo.dijkstra (origem, arvore);	// Algoritmo Dijkstra
	if (!(tp)) print_path (origem, destino);	// Caso o usu�rio escolha o modo de impress�o atav�s dos c�digos, � impresso uma legenda na tela

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	// Caso o usu�rio escolha a impress�o passo a passo, � impressa a mensagem abaixo
	if (passo_a_passo) {
		std::cout << "\tPRESSIONE [ENTER] PARA AVAN�AR" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}

	// Impress�o do caminho m�nimo
	// grafo.getPathLen(arvore, origem, destino) retorna o temanho do caminho
	grafo.showPath (arvore, origem, destino, grafo.getPathLen(arvore, origem, destino) , &tp, passo_a_passo);

	std::cout << std::endl << std::endl;

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	// Indicado fim da impress�o passo a passo
	if (passo_a_passo) {
		std::cout << "\tFIM DA IMPRESS�O" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
	while (getch() != 13);

	system ("CLS");

}


/**	--------------------------------------------------------------
	M�TODO PARA CONTROLAR A ESCOLHA DO USU�RIO NO MENU DE EST�DIOS
	--------------------------------------------------------------

	@param: char ans --> T�pico escolhido pelo usu�rio
 **/
void switch_estadios_menu (char ans) {

	system ("CLS");

	switch (ans) {

		case '1':	// Printar um est�dio espec�fico

			try {
				print_insert_cod ("Digite o c�digo do Clube que deseja visualizar:", 0);

				ans = toupper(getch());	// Armazenado o c�digo do clube
				while ((ans < '0' || (ans > (char (CLUBES + '0')))) && ans != 'A') ans = toupper(getch());

				// Caso digitado 'A', os c�digos dos clubes ser�o mostrados, assim como seus respectivos nomes
				if (ans == 'A') {

					system ("CLS");

					estadios.showCodigos();
					std::cout << std::endl;

					print_insert_cod ("Digite o c�digo do clube que deseja visualizar:", 1);

					while (ans < '0' || ans > (char (CLUBES + '0'))) ans = getch();
				}

				if (ans == '0') break; // Volta ao menu principal, se digitado 0

				system ("CLS");

				estadios.showEstadio(int (ans - '0') - 1);	// Mostra o est�dio desejado
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR EST�DIO!", e);

			}

			break;

		case'2':	// Mostra todos os est�dios

			try {

				estadios.showEstadios();	// Impress�o dos est�dios
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR OS EST�DIOS!", e);

			}

			break;

		case '3':	// Mostra as informa��es de um clube

			try {
				print_insert_cod ("Digite o c�digo do Clube que deseja visualizar as informa��es:", 0);

				ans = toupper(getch());	// Armazenado o c�digo do clube
				while ((ans < '0' || (ans > (char (CLUBES + '0')))) && ans != 'A') ans = toupper(getch());

				// C�digos dos clubes e seus respectivos nomes s�o mostrados, caso o usu�rio digite 'A'
				if (ans == 'A') print_cod_clubes ("Digite o c�digo do clube que deseja visualizar as informa��es:", ans, CLUBES, true);

				if (ans == '0') break;

				system ("CLS");

				estadios.showClubInfo(int (ans - '0') - 1);	// Mostra as informa��es do Clube desejado
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR INFORMA��ES DE UM CLUBE", e);

			}

			break;

		case '4':	// Mostra as informa��es de todos os clubes

			try {

				estadios.showClubsInfo();	// Imprime as informa��es
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR INFORMA��ES DOS CLUBES!", e);

			}

			break;

		case '0':	// Volta ao menu principal
			break;

	}

	system ("CLS");

}


/**	-------------------------------------------------
	M�TODO PARA PRINTAR A MATRIZ DE DIST�NCIA NA TELA
	-------------------------------------------------

	@param: NoNe
 **/
void print_mat_dist() {

	int ident = 100000;

	for (int a = ident; a > CLUBES; a /= 10) std::cout << " ";

	for (int i = 1; i < (CLUBES + 1); i++) {

		for (int j = ident; j > i; j /= 10) std::cout << " ";

		std::cout << i << "       ";

	}

	std::cout << std::endl;

	for (int i = 0; i < CLUBES; i++) {

		int a = ident;

		for ( ; a > CLUBES; a /= 10) std::cout << " ";

		for (int j = 1; j < (CLUBES + 1); j++) {

			for (int k = ident; k > j; k /= 10) std::cout << "-";

			int l = j;

			while (l >= 1) {

				l /= 10;
				std::cout << "-";

			}

			std::cout << "----|--";

		}

		std::cout << std::endl << " " << (i + 1);
		for (a = ident / 1000; a > CLUBES; a /= 10) std::cout << " ";
		std::cout << "|";

		for (int j = 0; j < CLUBES; j++) {

			if (MAT_DIST_CLUBES[i][j]) for (int k = ident; k > MAT_DIST_CLUBES[i][j]; k /= 10) std::cout << " ";

			else { int a = 1; for (int k = ident; k > a; k /= 10) std::cout << " "; }

			std::cout << "  " << MAT_DIST_CLUBES[i][j] << "  |  ";

		}

		std::cout << std::endl;

	}

	for (int a = ident; a > CLUBES; a /= 10) std::cout << " ";

	for (int j = 1; j < (CLUBES + 1); j++) {

		for (int k = ident; k > j; k /= 10) std::cout << "-";

		int l = j;

		while (l >= 1) {

			l /= 10;
			std::cout << "-";

		}

		std::cout << "----|--";

	}

	std::cout << std::endl;

}
