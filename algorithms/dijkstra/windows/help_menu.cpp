#include <iostream>

#include <conio.h>

#include "help.h"
#include "prog_utils.h"
#include "text_format.h"


/**	-------------------------------------------------
	M�TODO PARA GERENCIAR OS T�PICOS DO MENU DE AJUDA
	-------------------------------------------------
	
	@param: char ans --> T�pico escolhido pelo usu�rio
 **/
void switch_hmenu (char ans) {
	
	system ("CLS");
	
	switch (ans) {
		
		case '1':	// CLubes e est�dios
			
			try {
				
				clubes_estadios_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A CLUBES E EST�DIOS!", e);
				
			}
			
			break;
		
		case '2':	// Matriz de dist�ncia
			
			try {
				
				matriz_distancia_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A MATRIZ DE DIST�NCIA!", e);
				
			}
			
			break;
		
		case '3':	// �rvore geradora m�nima
			
			try {
				
				arvore_minima_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A �RVORE GERADORA M�NIMA", e);
				
			}
			
			break;
		
		case '4':	// Caminho m�nimo
			
			try {
				
				caminho_minimo_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A CAMINHO M�NIMO!", e);
				
			}
			
			break;
		
		case '5':	// Ajuda ao sair do programa
			
			try {
				
				exit_program_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A SAIR DO PROGRAMA", e);
				
			}
			
			break;
		
		default:
			return;
			break;
		
	}
	
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar...";
	while (getch() != 13);
	
	system ("CLS");
	
}


/**	------------------------
	MENU DE AJUDA AO USU�RIO
	------------------------
	
	@param: NoNe
 **/
void hmenu() {
	
	int hm_item = 1;
	
	ptitle   ("Escolha o t�pico que deseja obter ajuda");
	pcontent ("Clubes e est�dios        ", hm_item++);
	pcontent ("Matriz de dist�ncia      ", hm_item++);
	pcontent ("�rvore geradora m�nima   ", hm_item++);
	pcontent ("Caminho m�nimo           ", hm_item++);
	pcontent ("Como sair do programa    ", hm_item++);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal ", 0);
	
	char citem = getch();
	while (citem < '0' || citem > (char ((hm_item - 1) + '0'))) citem = getch();
	
	if (citem == '0') return;
	
	switch_hmenu (citem);
	
}

