#include <iostream>

#include <stdlib.h>

#include "arv_ag.h"
#include "estadios.h"
#include "text_format.h"

Estadios estadios;
Grafo grafo (CLUBES);
stdist **arvore = (stdist**) malloc (CLUBES * sizeof(stdist*));


/**	-----------------------------------------
	MÉTODO PARA MOSTRAR OS CÓDIGOS DOS CLUBES
	-----------------------------------------

	@param: NoNe
 **/
void mostra_cod_clubes () {

	estadios.showCodigos();

}


/**	-------------------------------------------------------------------
	MÉTODO PARA PERCORRER UM CAMINHO E PRINTAR O NOME DOS CLUBES
	-------------------------------------------------------------------

	@param: int orig --> Posição de origem do caminho

	@param: int dest --> Posição de destino do caminho
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
	MÉTODO PARA MOSTRAR A ÁRVORE GERADORA MÍNIMA
	--------------------------------------------

	@param: char ans --> Tópico escolhido pelo usuário

	@param: bool passo_a_passo --> Gerencia se a impressão será feita em pausas ou não
 **/
void show_arvore (char ans, bool passo_a_passo) {

	system ("CLS");

	print_insert_cod ("Digite o código do Clube que será o ponto inicial:", 0);

	char c;
	get_cod_answer (&c, CLUBES, 0);

	/**	-------------------------------------------------------------------
		Printa os códigos e nomes dos clubes, caso o usuário pressiona 'A'.
		-------------------------------------------------------------------
	 **/
	if (c == 'A') print_cod_clubes ("Digite o código do Clube que será o ponto inicial:", c, CLUBES, true);

	if (c == '0') return;

	system ("CLS");

	init_struct (arvore, CLUBES);	// Configura a arvore com tamanho de acordo com a quantidade de clubes a serem inseridos
	init_grafo(&grafo);	// Inicializa os valores do grafo

	int origem = (int (c - '0') - 1);
	int destino = (origem) ? (origem - 1) : (origem + 1);
	int sz = CLUBES, tp = 0;

	ptitle ("ÁRVORE GERADORA MÍNIMA");

	// Verifica qual tipo de print escolhido pelo usuário
	switch (ans) {

		case '1': //Código do clube
			for (int i = 0; i < CLUBES; i++) {

				print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
				std::cout << " " << (arvore[i]->cod) << " -> " << estadios.getClube(i) << std::endl;

			}

			break;

		case '2': //Nome do clube
			tp = 1;
			break;


		case '3': //Nome do estádio
			tp = 2;
			break;

		case '0':
			return;
			break;
	}

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	std::cout << std::endl;

	/**	--------------------------------------------------------------------
		Caso seja uma impressão passo a passo, é printada a mensagem na tela
		--------------------------------------------------------------------
	 **/
	if (passo_a_passo) {
		std::cout << "\tPRESSIONE [ENTER] PARA AVANÇAR" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
		std::cout << std::endl;
	}

	grafo.dijkstra(origem, arvore);	// Algoritmo dijkstra
	grafo.showGrafo(arvore, origem, 1, &sz, &tp, passo_a_passo);	// Mostra o grafo na tela

	std::cout << std::endl;

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	/**	-----------------------------------------------------------------
		Se for uma impressão passo a passo, é indicado o fim da impressão
		-----------------------------------------------------------------
	 **/
	if (passo_a_passo) {
		std::cout << "\tFIM DA IMPRESSÃO" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
	while (getch() != 13);	// Espera o usuário digitar [ENTER] para continuar o programa

	system ("CLS");

}


/**	------------------------------------
	MÉTODO PARA MOSTRAR O CAMINHO MÍNIMO
	------------------------------------

	@param: char ans --> Tópico escolhido pelo usuário

	@param: bool passo_a_passo --> Gerencia se a impressão será feita pausadamente ou não
 **/
void show_caminho (char ans, bool passo_a_passo) {

	system ("CLS");

	// Pega o nó inicial
	print_insert_cod ("Digite o código do Clube que será o ponto inicial:", 0);

	char c;
	get_cod_answer (&c, CLUBES, 0);

	// Caso o usuário digite 'A', os códigos e nomes dos clubes serão impressos
	if (c == 'A') print_cod_clubes ("Digite o código do Clube que será o ponto inicial:", c, CLUBES, true);

	if (c == '0') return;

	system ("CLS");

	// Pega o código do clube que será o ponto final o caminho
	print_insert_cod ("Digite o código do Clube que será o ponto final:", 0);

	// Caso o ponto final seja o mesmo do ponto inicial, uma mensagem de alerta é disparada e o código terá que ser digitado novamente
	char d = toupper(getch());
	while ((d < '0' || (d > (char (CLUBES + '0'))) || d == c) && d != 'A') {
		if (d == c) {
			std::cout << std::endl;
			_perror("O PONTO FINAL NÃO PODE SER O MESMO QUE O INICIAL!");
			std::cout << std::endl;
		}
		d = toupper(getch());
	}

	// Semelhante a condição anterior, os códigos e nomes dos clubes serão impressos, caso o usuário digite 'A'
	if (d == 'A') print_cod_clubes ("Digite o código do Clube que será o ponto final:", d, CLUBES, true);

	system ("CLS");

	init_struct (arvore, CLUBES);	// Inicializa a arvore de acordo com a quantidade de clubes
	init_grafo(&grafo);	// Inicializa o grafo

	// Os caracteres pegos são transformados em inteiros
	// É subtraído 1 da conversão, pois os códigos dos clubes vão de 1 a 8, porém as posições de 0 a 7
	int origem = (int (c - '0') - 1);
	int destino = (int (d - '0') - 1);
	int tp = 0;

	if (d == '0') return;

	ptitle ("CAMINHO MÍNIMO");

	// Verifica o tipo de impressão escolhido pelo usuário
	switch (ans) {

		case '1': // Código do clube
			break;

		case '2': // Nome do clube
			tp = 1;
			break;


		case '3': // Nome do estádio
			tp = 2;
			break;

		case '0':
			return;
			break;
	}

	grafo.dijkstra (origem, arvore);	// Algoritmo Dijkstra
	if (!(tp)) print_path (origem, destino);	// Caso o usuário escolha o modo de impressão atavés dos códigos, é impresso uma legenda na tela

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	// Caso o usuário escolha a impressão passo a passo, é impressa a mensagem abaixo
	if (passo_a_passo) {
		std::cout << "\tPRESSIONE [ENTER] PARA AVANÇAR" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}

	// Impressão do caminho mínimo
	// grafo.getPathLen(arvore, origem, destino) retorna o temanho do caminho
	grafo.showPath (arvore, origem, destino, grafo.getPathLen(arvore, origem, destino) , &tp, passo_a_passo);

	std::cout << std::endl << std::endl;

	print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);

	// Indicado fim da impressão passo a passo
	if (passo_a_passo) {
		std::cout << "\tFIM DA IMPRESSÃO" << std::endl <<std::endl;

		print_block_line(1, 0, PRINT_BLOCK * 2, '-', true, true);
	}
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
	while (getch() != 13);

	system ("CLS");

}


/**	--------------------------------------------------------------
	MÉTODO PARA CONTROLAR A ESCOLHA DO USUÁRIO NO MENU DE ESTÁDIOS
	--------------------------------------------------------------

	@param: char ans --> Tópico escolhido pelo usuário
 **/
void switch_estadios_menu (char ans) {

	system ("CLS");

	switch (ans) {

		case '1':	// Printar um estádio específico

			try {
				print_insert_cod ("Digite o código do Clube que deseja visualizar:", 0);

				ans = toupper(getch());	// Armazenado o código do clube
				while ((ans < '0' || (ans > (char (CLUBES + '0')))) && ans != 'A') ans = toupper(getch());

				// Caso digitado 'A', os códigos dos clubes serão mostrados, assim como seus respectivos nomes
				if (ans == 'A') {

					system ("CLS");

					estadios.showCodigos();
					std::cout << std::endl;

					print_insert_cod ("Digite o código do clube que deseja visualizar:", 1);

					while (ans < '0' || ans > (char (CLUBES + '0'))) ans = getch();
				}

				if (ans == '0') break; // Volta ao menu principal, se digitado 0

				system ("CLS");

				estadios.showEstadio(int (ans - '0') - 1);	// Mostra o estádio desejado
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR ESTÁDIO!", e);

			}

			break;

		case'2':	// Mostra todos os estádios

			try {

				estadios.showEstadios();	// Impressão dos estádios
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR OS ESTÁDIOS!", e);

			}

			break;

		case '3':	// Mostra as informações de um clube

			try {
				print_insert_cod ("Digite o código do Clube que deseja visualizar as informações:", 0);

				ans = toupper(getch());	// Armazenado o código do clube
				while ((ans < '0' || (ans > (char (CLUBES + '0')))) && ans != 'A') ans = toupper(getch());

				// Códigos dos clubes e seus respectivos nomes são mostrados, caso o usuário digite 'A'
				if (ans == 'A') print_cod_clubes ("Digite o código do clube que deseja visualizar as informações:", ans, CLUBES, true);

				if (ans == '0') break;

				system ("CLS");

				estadios.showClubInfo(int (ans - '0') - 1);	// Mostra as informações do Clube desejado
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR INFORMAÇÕES DE UM CLUBE", e);

			}

			break;

		case '4':	// Mostra as informações de todos os clubes

			try {

				estadios.showClubsInfo();	// Imprime as informações
				std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
				while (getch() != 13);

			} catch (int e) {

				_perror_block ("ERRO AO MOSTRAR INFORMAÇÕES DOS CLUBES!", e);

			}

			break;

		case '0':	// Volta ao menu principal
			break;

	}

	system ("CLS");

}


/**	-------------------------------------------------
	MÉTODO PARA PRINTAR A MATRIZ DE DISTÂNCIA NA TELA
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
