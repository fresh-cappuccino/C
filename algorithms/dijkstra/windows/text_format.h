#ifndef _TEXT_FORMAT_H
#define _TEXT_FORMAT_H

#include <string>


void error (int trace);		// Impressão de erro (String Vazia ou Método Inválido)


void _perror (std::string msg);	// Impressão de erro (cor vermelha)


int ptitle (std::string title);	// Função de impressão de títulos


int pcontent (std::string content, int menu_item);	// Função de impressão de conteúdos


#endif

