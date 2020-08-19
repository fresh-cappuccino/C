#ifndef _ARV_AG_H
#define _ARV_AG_H


void mostra_cod_clubes ();							// Função para mostrar códigos dos clubes


void show_arvore(char c, bool passo_a_passo);		// Função para mostrar árvore de distância mínima


void show_caminho (char ans, bool passo_a_passo);	// Fumção para mostrar o caminho mínimo entre dois nós


void print_path (int orig, int dest);				// Função para printar todos os clubes entre o nó de origem e o de destino, incluindo seus extremos


void switch_estadios_menu (char ans);				// Switch para verificar opção do usuário e chamar a função adequada


void print_mat_dist ();								// Printa Matriz de Distância


#endif
