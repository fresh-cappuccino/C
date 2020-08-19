#ifndef _G_STRUCT_H
#define _G_STRUCT_H

#include <string>

/**	-----------------------------
	STRUCT PARA CRIA��O DA �RVORE
	-----------------------------
 **/
typedef struct stdist {
	stdist *previous;

	int cod;
	int custo;

	int *next;
} stdist;


void init_struct (stdist **structure, int num_struct);	// Configura a struct de acordo com o n�mero de clubes


#endif

