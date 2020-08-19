#include <iostream>

#include <conio.h>
#include <stdlib.h>

#include "arv_ag.h"
#include "estadios.h"
#include "handler.h"
#include "help_menu.h"
#include "text_format.h"


/**	---------------------------------------------------------
	MENU PARA IMPRESS�O DOS EST�DIOS E INFORMA��ES DOS CLUBES
	---------------------------------------------------------
	
	@param: NoNe
 **/
void estadios_menu () {
	
	int m_item = 1;
	
	ptitle   ("INFORMA��ES DOS EST�DIOS ");
	pcontent ("Mostrar est�dio espec�fico            ", m_item++);
	pcontent ("Mostrar todos os est�dios             ", m_item++);
	pcontent ("Mostrar informa��es de um clube       ", m_item++);
	pcontent ("Mostrar informa��es de todos os clubes", m_item++);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal              ", 0);
	
	char ans = getch();
	while (ans < '0' || ans > '4') ans = getch();
	
	if (ans == '0') return;
	
	switch_estadios_menu (ans);
	
}


/**	----------------------------------------------
	M�TODO PARA PRINTAR MENU DE ESCOLHA PARA GRAFO
	----------------------------------------------
	
	@param: std::string msg --> Mensagem a ser impressa na tela
	
	@param: char *c_item --> Vari�vel para armazenar escolha do usu�rio
 **/
void arv_print_choice (std::string msg, char *c_item) {
	
	int nitens = 0;
	
	ptitle   (msg);
	pcontent ("C�digo do clube         ", ++nitens);
	pcontent ("Nome do clube           ", ++nitens);
	pcontent ("Nome do est�dio         ", ++nitens);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal", 0);
	
	(*c_item) = getch();
//	fflush(stdin);
	while ((*c_item) < '0' || (*c_item) > (char (nitens + '0'))) (*c_item) = getch();
	
}


/**	--------------------------------------------------------------
	M�TODO DE GERENCIAMENTO DE ESCOLHA DO USU�RIO - MENU PRINCIPAL
	--------------------------------------------------------------
	
	@param: char mitem --> T�pico escolhido pelo usu�rio
 **/
void switch_main_menu (char mitem) {
	
	system ("CLS");
	
	Estadios estadios;
	
	// Gerencia escolha
	switch (mitem) {
		
		case 'A':	// Mostra c�digos dos est�dios
			
			try {
				
				ptitle ("C�DIGOS DOS CLUBES");
				std::cout << std::endl;
				mostra_cod_clubes();
				
				std::cout << std::endl << "Pressione [ENTER] para continuar";
				
				while (getch() != 13);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR C�DIGOS DOS EST�DIOS", e);
				
			}
			
			break;
		
		case '1': //Informa��es dos est�dios
			
			try {
				
				estadios_menu();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO CARREGAR MENU DOS EST�DIOS", e);
				
			}
			
			break;
		
		case '2': //Matriz de dist�ncia
			
			try {
				ptitle ("Matriz de dist�ncia");
				std::cout << std::endl;
				
				for (int i = 0; i < CLUBES; i++) {
					
					print_block_line (1, 0, PRINT_BLOCK, '-', true, true);
					std::cout << " " << (i + 1) << " -> " << estadios.getClube(i) << std::endl;
					
				}
				print_block_line (1, 0, PRINT_BLOCK, '-', true, true);
				
				std::cout << std::endl;
				
				print_mat_dist();
				
				std::cout << std::endl << "Pressione [ENTER] para continuar...";
				while (getch() != 13);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR MATRIZ DE DIST�NCIA!", e);
				
			}
			
			break;
		
		case '3': //�rvore de dist�ncia m�nima
			
			try {
				
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar a �rvore", &mitem);
				
				if (mitem == '0') break;
				
				show_arvore (mitem, false);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO CALCULAR �RVORE DE DIST�NCIA M�NIMA!", e);
				
			}
			
			break;
		
		case '4': //�rvore de dist�ncia m�nima passo a passo
			
			try {
				
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar a �rvore", &mitem);
				
				if (mitem == '0') break;
				
				show_arvore (mitem, true);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO CALCULAR �RVORE DE DIST�NCIA M�NIMA!", e);
				
			}
			
			break;
		
		case '5': //Caminho m�nimo
			
			try {
				
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar o caminho", &mitem);
				
				if (mitem == '0') break;
				
				show_caminho (mitem, false);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO CALCULAR CAMINHO M�NIMO!", e);
				
			}
			
			break;
		
		case '6': //Caminho m�nimo passo a passo
			
			try {
				
				arv_print_choice ("Escolha qual valor deseja mostrar na tela ao montar o caminho", &mitem);
				
				if (mitem == '0') break;
				
				show_caminho (mitem, true);
				
			} catch (int e) {
				
				_perror_block ("ERRO AO CALCULAR CAMINHO M�NIMO!", e);
				
			}
			
			break;
		
		case '7': //Ajuda ao usu�rio
			
			try {
				
				hmenu();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO EXIBIR MENU DE AJUDA!", e);
				
			}
				
			break;
		
		case '0': //Sair
			if (exitp()) exit(0);
			
			break;
	}
	
	system ("CLS");
	
}

/**	------------------------------------
	FUN��O PARA ENCERRAMENTO DO PROGRAMA
	------------------------------------
	
	@param: NoNe
 **/
bool exitp () {
	
	system("CLS");
	
	ptitle ("Deseja realmente sair do programa? [S - N]");
	
	char ans = toupper(getch());
	while (ans != 'S' && ans != 'N'){ ans = toupper(getch()); }
	
	system ("CLS");
	
	return ans == 'S' ? true : false;
	
}
