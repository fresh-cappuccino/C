#include <iostream>

#include <conio.h>
#include <stdlib.h>

#include "g_struct.h"
#include "prog_utils.h"
#include "text_format.h"


/**	----------------------------------
	MÉTODO PARA CONFIGURAÇÃO DA ARVORE
	----------------------------------
	
	@param: stdist **structure --> Estrutura para ser inicializada
	
	@param: int num_struct --> Tamanho do vetor de posteriores para ser criado na struct
 **/
void init_struct (stdist **structure, int num_struct) {
	
	/**	--------------------------------
		VERIFICA SE A STRUCT FOI ALOCADA
		--------------------------------
	 **/
	if (!structure) {
		
		_perror("MEMÓRIA INSUFICIENTE...");
		std::cout << std::endl << "Pressione qualquer tecla para encerrar o programa...";
		getch ();
		exit (1);
		
	}
	
	int i;
	
	for (i = 0; i < num_struct; i++) {
		
		structure[i] = (stdist*) malloc (sizeof(stdist));
		
		/**	-------------------------------------------
			VERIFICA SE A POSIÇÃO DA STRUCT FOI ALOCADA
			-------------------------------------------
		 **/
		if (!structure[i]) {
			
			_perror("MEMÓRIA INSUFICIENTE...");
			std::cout << std::endl << "Pressione qualquer tecla para encerrar o programa...";
			getch ();
			exit (1);
			
		}
		
		// Inicia valores da struct
		
		structure[i]->previous = NULL;
		
		structure[i]->cod = handlerCod(i);
		structure[i]->custo = 0;
		
		structure[i]->next = (int*) malloc (num_struct * sizeof (int));
		
		for (int j = 0; j < num_struct; j++) structure[i]->next[j] = 0;
		
	}

}
