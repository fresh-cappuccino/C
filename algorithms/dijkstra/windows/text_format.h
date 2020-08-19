#ifndef _TEXT_FORMAT_H
#define _TEXT_FORMAT_H

#include <string>


void error (int trace);		// Impress�o de erro (String Vazia ou M�todo Inv�lido)


void _perror (std::string msg);	// Impress�o de erro (cor vermelha)


int ptitle (std::string title);	// Fun��o de impress�o de t�tulos


int pcontent (std::string content, int menu_item);	// Fun��o de impress�o de conte�dos


#endif

