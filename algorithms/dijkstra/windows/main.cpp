/**
	# Created:			09/05/2020
	# Last Modified:	11/05/2020
	
	@autor: Leonardo de Andrade Ferreira
	@LeoAndrade
	
	/-
	Programa de implementaÃ§Ã£o do algorítmo Dijkstra (Algorítmo do caminho mais próximo)
	-/
	
	*********************
	Estrutura do projeto:
	*********************
		BIBLIOTECAS:
	----------------
			ARV_AG.H		--> Gerencia o grafo de caminho. -- Tree Controller
				-arq- arv_ag.h
			/-/
			COLORS.H		--> Gerencia a troca de cores no terminal
				-arq- colors.c
			/-/
			DESC_ESTADIOS.H	--> Estrutura de dados para armazenar as informarções dos clubes
				-arq- desc_estadios.c
			/-/
			ESTADIOS.H		--> Classe estadios
				-arq- estadios.c
			/-/
			G_STRUCT.H		--> Estrutura de dados para montagem da árvore
				-arq- g_struct.c
			/-/
			GRAFO.H			--> Classe grafo
				-arq- grafo.c
			/-/
			HANDLER.H		--> Gerencia os tópicos do menu
				-arq- handler.c
			/-/
			HELP.H			--> Gerencia os tópicos do menu de ajuda
				-arq- help.c
			/-/
			HELP_MENU.H		--> Menu de ajuda ao usuário
				-arq- help_menu.c
			/-/
			INITIALIZER.H	--> Inicializa as estruturas para valores DEFAULT
				-arq- initializer.c
			/-/
			MENU.H			--> Menu principal
				-arq- menu.c
			/-/
			PROG_UTILS.H	--> Métodos genéricos do programa
				-arq- prog-utils.c
			/-/
			TEXT_FORMAT.H	--> Formatação de impressão
				-arq- text_format.c
	----------------
	
 **/

#include <iostream>

#include <locale.h>
#include <stdlib.h>
#include <conio.h>

#include "menu.h"


/**
	FUNÇÃO PRINCIPAL
	
	@param: int argc --> Buff
	
	@param: char **argv --> Buff
 **/
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");	// Troca a linguagem;
	
	_recommend();
	
	std::cout << std::endl << std::endl << "Pressione [ENTER] para continuar";
	while (getch() != 13);
	
	system ("CLS");
	
	while (main_menu());	// Loop do menu
	
	return 0;
	
}

