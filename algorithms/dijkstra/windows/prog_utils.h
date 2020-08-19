#ifndef _PROG_UTILS_H
#define _PROG_UTILS_H

#include <string>


void print_cod_clubes (std::string msg, char ans, int last_option, bool clean_screen);	// Imprimi os códigos dos clubes


void print_insert_cod (std::string msg, int type);	// Impressão da inserção de código


void get_cod_answer (char *c, int last_option, int ptype);	// Pega resposta do usuário


void print_block_line (int block_nmbr, int ctnt_block_size, int final_block_size, char c, bool print_fist_pipe, bool print_last_pipe);	// Printa blocos de


int handlerCod (int index);	// Retorna o código de um clube


std::string handlerClube (int index);	// Retorna o nome de um clube


std::string handlerEstadio (int index);	// Retorna o nome de um


void _perror_block (std::string err_msg, int err);


#endif

