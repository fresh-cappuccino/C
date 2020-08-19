#include <iostream>

#include <conio.h>

#include "help.h"
#include "prog_utils.h"
#include "text_format.h"


/**	-------------------------------------------------
	MÉTODO PARA GERENCIAR OS TÓPICOS DO MENU DE AJUDA
	-------------------------------------------------
	
	@param: char ans --> Tópico escolhido pelo usuário
 **/
void switch_hmenu (char ans) {
	
	system ("CLS");
	
	switch (ans) {
		
		case '1':	// CLubes e estádios
			
			try {
				
				clubes_estadios_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A CLUBES E ESTÁDIOS!", e);
				
			}
			
			break;
		
		case '2':	// Matriz de distância
			
			try {
				
				matriz_distancia_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A MATRIZ DE DISTÂNCIA!", e);
				
			}
			
			break;
		
		case '3':	// Árvore geradora mínima
			
			try {
				
				arvore_minima_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A ÁRVORE GERADORA MÍNIMA", e);
				
			}
			
			break;
		
		case '4':	// Caminho mínimo
			
			try {
				
				caminho_minimo_help();
				
			} catch (int e) {
				
				_perror_block ("ERRO AO MOSTRAR AJUDA A CAMINHO MÍNIMO!", e);
				
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
	MENU DE AJUDA AO USUÁRIO
	------------------------
	
	@param: NoNe
 **/
void hmenu() {
	
	int hm_item = 1;
	
	ptitle   ("Escolha o tópico que deseja obter ajuda");
	pcontent ("Clubes e estádios        ", hm_item++);
	pcontent ("Matriz de distância      ", hm_item++);
	pcontent ("Árvore geradora mínima   ", hm_item++);
	pcontent ("Caminho mínimo           ", hm_item++);
	pcontent ("Como sair do programa    ", hm_item++);
	std::cout << std::endl;
	pcontent ("Voltar ao menu principal ", 0);
	
	char citem = getch();
	while (citem < '0' || citem > (char ((hm_item - 1) + '0'))) citem = getch();
	
	if (citem == '0') return;
	
	switch_hmenu (citem);
	
}

