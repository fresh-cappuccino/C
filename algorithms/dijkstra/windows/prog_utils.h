#ifndef _PROG_UTILS_H
#define _PROG_UTILS_H

#include <string>


void print_cod_clubes (std::string msg, char ans, int last_option, bool clean_screen);	// Imprimi os c�digos dos clubes


void print_insert_cod (std::string msg, int type);	// Impress�o da inser��o de c�digo


void get_cod_answer (char *c, int last_option, int ptype);	// Pega resposta do usu�rio


void print_block_line (int block_nmbr, int ctnt_block_size, int final_block_size, char c, bool print_fist_pipe, bool print_last_pipe);	// Printa blocos de


int handlerCod (int index);	// Retorna o c�digo de um clube


std::string handlerClube (int index);	// Retorna o nome de um clube


std::string handlerEstadio (int index);	// Retorna o nome de um


void _perror_block (std::string err_msg, int err);


#endif

