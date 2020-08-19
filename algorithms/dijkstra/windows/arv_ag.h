#ifndef _ARV_AG_H
#define _ARV_AG_H


void mostra_cod_clubes ();							// Fun��o para mostrar c�digos dos clubes


void show_arvore(char c, bool passo_a_passo);		// Fun��o para mostrar �rvore de dist�ncia m�nima


void show_caminho (char ans, bool passo_a_passo);	// Fum��o para mostrar o caminho m�nimo entre dois n�s


void print_path (int orig, int dest);				// Fun��o para printar todos os clubes entre o n� de origem e o de destino, incluindo seus extremos


void switch_estadios_menu (char ans);				// Switch para verificar op��o do usu�rio e chamar a fun��o adequada


void print_mat_dist ();								// Printa Matriz de Dist�ncia


#endif
