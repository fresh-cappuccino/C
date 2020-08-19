#include <iostream>

#include <conio.h>
#include <ctype.h>

#include "handler.h"
#include "menu.h"
#include "text_format.h"


void _recommend() {
	
	std::cout << std::endl << std::endl << std::endl;
	
	ptitle ("É recomendado utilizar este programa em TELA CHEIA");
	
	std::cout << "\t\t" << "Caso contrário, algumas funcionalidades podem ter suas impressões cortadas" << std::endl << std::endl;
	std::cout << std::endl << "\t\t" << "** O sistema NÃO será afetado caso decida continuar em TELA MÉDIA **" << std::endl;
	
}


/**	-----------------------
	FUNÇÃO - MENU PRINCIPAL
	-----------------------
	
	@param: NoNe
 **/
int main_menu() {
	
	int menu_item = 1;
	
	ptitle   ("VISITANDO ESTÁDIOS DE FUTEBOL ");
	pcontent ("Mostrar informações dos estádios     ", menu_item++);
	pcontent ("Mostrar matriz de distância          ", menu_item++);
	pcontent ("Imprimir árvore de distância mínima  ", menu_item++);
	pcontent ("Imprimir árvore passo a passo        ", menu_item++);
	pcontent ("Imprimir caminho mínimo              ", menu_item++);
	pcontent ("Imprimir caminho mínimo passo a passo", menu_item++);
	pcontent ("Menu de ajuda ao usuário             ", menu_item++);
	std::cout << std::endl;
	pcontent ("Sair do programa                     ", 0);
	
	char mitem = toupper(getch());
	while ((mitem < '0' || mitem > (char ((menu_item - 1) + '0'))) && mitem != 'A') mitem = toupper(getch());
	switch_main_menu (mitem);
	
	return 1;
}

