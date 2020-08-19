#include <iostream>

#include <ctype.h>

#include "text_format.h"


/**	-----------------------------------------------------
	MÉTODO PARA IMPRESSÃO DE ERRO DE CARREGAMENTO DO MENU
	-----------------------------------------------------

	@param: int trace --> erro (0 --> "...String Vazia..."
								1 --> "...Incapaz de Carregar menu...")
 **/
void error (int trace) { _perror("ERRO!"); std::cout << ((trace) ? "...Incapaz de Carregar Menu..." : "...String Vazia...") << std::endl; system("PAUSE"); }


/**	---------------------------------------
	MÉTODO PARA IMPRESSÃO DE LINHA DE TEXTO
	---------------------------------------

	@param: float number --> tamanho da linha a ser impressa
 **/
void ptitle_line (float number) {
	for (int i = 0; i < int(number + 4); i++)
		std::cout << "==";

	if (int(number*2)%2) {
		std::cout << "==" << std::endl;
	} else {
		std::cout << "=" << std::endl;
	}
}


/**	------------------------------------------
	MÉTODO PARA IMPRESSÃO DE LINHA DE CONTEÚDO
	------------------------------------------

	@param: float number --> tamanho da linha a ser impressa
 **/
void pcontent_line (float number) {
	for (int i = 0; i < int(number + 4); i++)
		std::cout << "--";

	if (int(number*2)%2) {
		std::cout << "--" << std::endl;
	} else {
		std::cout << "-" << std::endl;
	}
}


/**	-------------------------------
	FUNÇÃO PARA IMPRESSÃO DE TÍTULO
	-------------------------------

	@param: std::string title --> String a ser impressa como título
 **/
int ptitle (std::string title) {
	if (!(title.size())) { error(0); return 0; }

	try {
		ptitle_line (title.size() / 2.0);
		std::cout << "      " << title.data() << "  |" << std::endl;
		ptitle_line (title.size() / 2.0);
		std::cout << std::endl;
	} catch (...) {
		std::cout << "ST - [" << 1 << "]" << std::endl;
		error (1);
		exit (1);
	}
	return 1;
}


/**	---------------------------------
	FUNÇÃO PARA IMPRESSÃO DE CONTEÚDO
	---------------------------------

	@param: std::string content --> String a ser impressa como conteúdo

	@param: int menu_item --> número do conteúdo
 **/
int pcontent (std::string content, int menu_item) {
	if (!(content.size())) { error(0); return 1; }

	try {
		pcontent_line(content.size() / 2.0);
		std::cout << " " << menu_item << " |  " << content.data() << "  |" << std::endl;
		pcontent_line(content.size() / 2.0);
	} catch (int e) {
		std::cout << "ST - [" << e << "]" << std::endl;
		error(1);
		exit(0);
	}
	return 0;
}


/**	-----------------------------------------------------
	MÉTODO PARA IMPRESSÃO DE ERRO - IMPRESSÃO EM VERMELHO
	-----------------------------------------------------

	@param: std::string msg --> Mensagem de erro
 **/
void _perror (std::string msg) {
	std::cout << msg.data() << std::endl;
}
