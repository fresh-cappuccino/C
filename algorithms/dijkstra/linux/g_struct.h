#ifndef _G_STRUCT_H
#define _G_STRUCT_H

#include <string>

/**	-----------------------------
	STRUCT PARA CRIAÇÃO DA ÁRVORE
	-----------------------------
 **/
typedef struct stdist {
	stdist *previous;

	int cod;
	int custo;

	int *next;
} stdist;


void init_struct (stdist **structure, int num_struct);	// Configura a struct de acordo com o número de clubes


#endif

