#include <iostream>

#include <ctype.h>

#include "conio.h"
#include "handler.h"
#include "menu.h"
#include "text_format.h"


void _recommend() {
	std::cout << std::endl << std::endl << std::endl;

	ptitle ("� recomendado utilizar este programa em TELA CHEIA");

	std::cout << "\t\t" << "Caso contr�rio, algumas funcionalidades podem ter suas impress�es cortadas" << std::endl << std::endl;
	std::cout << std::endl << "\t\t" << "** O sistema N�O ser� afetado caso decida continuar em TELA M�DIA **" << std::endl;
}


/**	-----------------------
	FUN��O - MENU PRINCIPAL
	-----------------------

	@param: NoNe
 **/
int main_menu() {
	int menu_item = 1;

	ptitle   ("VISITANDO EST�DIOS DE FUTEBOL ");
	pcontent ("Mostrar informa��es dos est�dios     ", menu_item++);
	pcontent ("Mostrar matriz de dist�ncia          ", menu_item++);
	pcontent ("Imprimir �rvore de dist�ncia m�nima  ", menu_item++);
	pcontent ("Imprimir �rvore passo a passo        ", menu_item++);
	pcontent ("Imprimir caminho m�nimo              ", menu_item++);
	pcontent ("Imprimir caminho m�nimo passo a passo", menu_item++);
	pcontent ("Menu de ajuda ao usu�rio             ", menu_item++);
	std::cout << std::endl;
	pcontent ("Sair do programa                     ", 0);

	char mitem = toupper(getch());
	while ((mitem < '0' || mitem > (char ((menu_item - 1) + '0'))) && mitem != 'A') mitem = toupper(getch());
	switch_main_menu (mitem);

	return 1;
}
