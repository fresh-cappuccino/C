#include <iostream>

#include <stdlib.h>

#include "arv_ag.h"
#include "conio.h"
#include "estadios.h"
#include "handler.h"
#include "help_menu.h"
#include "prog_utils.h"
#include "text_format.h"


/**	---------------------------------------------------------
	MENU PARA IMPRESSÃO DOS ESTÁDIOS E INFORMAÇÕES DOS CLUBES
	---------------------------------------------------------

	@param: NoNe
 **/
void estadios_menu () {
	int m_item = 1;

	ptitle   ("INFORMAÇÕES DOS ESTÁDIOS ");
	pcontent ("Mostrar estádio específico            ", m_item++);
	pcontent ("Mostrar todos os estádios             ", m_item++);
	pcontent ("Mostrar informações de um clube       ", m_item++);
	pcontent ("Mostrar informações de todos os clubes", m_item++);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal              ", 0);

	char ans = getch();
	while (ans < '0' || ans > '4') ans = getch();

	if (ans == '0') return;

	switch_estadios_menu (ans);
}


/**	----------------------------------------------
	MÉTODO PARA PRINTAR MENU DE ESCOLHA PARA GRAFO
	----------------------------------------------

	@param: std::string msg --> Mensagem a ser impressa na tela

	@param: char *c_item --> Variável para armazenar escolha do usuário
 **/
void arv_print_choice (std::string msg, char *c_item) {
	int nitens = 0;

	ptitle   (msg);
	pcontent ("Código do clube         ", ++nitens);
	pcontent ("Nome do clube           ", ++nitens);
	pcontent ("Nome do estádio         ", ++nitens);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal", 0);

	(*c_item) = getch();
//	fflush(stdin);
	while ((*c_item) < '0' || (*c_item) > (char (nitens + '0'))) (*c_item) = getch();
}


/**	--------------------------------------------------------------
	MÉTODO DE GERENCIAMENTO DE ESCOLHA DO USUÁRIO - MENU PRINCIPAL
	--------------------------------------------------------------

	@param: char mitem --> Tópico escolhido pelo usuário
 **/
void switch_main_menu (char mitem) {
	system ("clear");

	Estadios estadios;

	// Gerencia escolha
	switch (mitem) {
		case 'A':	// Mostra códigos dos estádios
			try {
				ptitle ("CÓDIGOS DOS CLUBES");
				std::cout << std::endl;
				mostra_cod_clubes();

				std::cout << std::endl << "Pressione [ENTER] para continuar";

				while (getch() != '\n');
			} catch (...) {
				_perror_block ("ERRO AO MOSTRAR CÓDIGOS DOS ESTÁDIOS", 1);
			}
			break;

		case '1': //Informações dos estádios
			try {
				estadios_menu();
			} catch (...) {
				_perror_block ("ERRO AO CARREGAR MENU DOS ESTÁDIOS", 1);
			}
			break;

		case '2': //Matriz de distância
			try {
				ptitle ("Matriz de distância");
				std::cout << std::endl;

				for (int i = 0; i < CLUBES; i++) {

					print_block_line (1, 0, PRINT_BLOCK, '-', true, true);
					std::cout << " " << (i + 1) << " -> " << estadios.getClube(i) << std::endl;

				}
				print_block_line (1, 0, PRINT_BLOCK, '-', true, true);

				std::cout << std::endl;

				print_mat_dist();

				std::cout << std::endl << "Pressione [ENTER] para continuar...";
				while (getch() != '\n');
			} catch (...) {
				_perror_block ("ERRO AO MOSTRAR MATRIZ DE DISTÂNCIA!", 1);
			}
			break;

		case '3': //Árvore de distância mínima
			try {
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar a árvore", &mitem);

				if (mitem == '0') break;

				show_arvore (mitem, false);
			} catch (...) {
				_perror_block ("ERRO AO CALCULAR ÁRVORE DE DISTÂNCIA MÍNIMA!", 1);
			}
			break;

		case '4': //Árvore de distância mínima passo a passo
			try {
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar a árvore", &mitem);

				if (mitem == '0') break;

				show_arvore (mitem, true);
			} catch (...) {
				_perror_block ("ERRO AO CALCULAR ÁRVORE DE DISTÂNCIA MÍNIMA!", 1);
			}
			break;

		case '5': //Caminho mínimo
			try {
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar o caminho", &mitem);

				if (mitem == '0') break;

				show_caminho (mitem, false);

			} catch (...) {
				_perror_block ("ERRO AO CALCULAR CAMINHO MÍNIMO!", 1);
			}
			break;

		case '6': //Caminho mínimo passo a passo
			try {
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar o caminho", &mitem);

				if (mitem == '0') break;

				show_caminho (mitem, true);
			} catch (...) {
				_perror_block ("ERRO AO CALCULAR CAMINHO MÍNIMO!", 1);
			}
			break;

		case '7': //Ajuda ao usuário
			try {
				hmenu();
			} catch (...) {
				_perror_block ("ERRO AO EXIBIR MENU DE AJUDA!", 1);
			}
			break;

		case '0': //Sair
			if (exitp()) exit(0);
			break;
	}
	system ("clear");
}

/**	------------------------------------
	FUNÇÃO PARA ENCERRAMENTO DO PROGRAMA
	------------------------------------

	@param: NoNe
 **/
bool exitp () {
	system("clear");

	ptitle ("Deseja realmente sair do programa? [S - N]");

	char ans = toupper(getch());
	while (ans != 'S' && ans != 'N'){ ans = toupper(getch()); }

	system ("clear");

	return ans == 'S' ? true : false;
}
