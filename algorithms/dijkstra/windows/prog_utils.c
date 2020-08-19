#include <iostream>
#include <string>

#include "estadios.h"
#include "text_format.h"


/**	---------------------------------------------
	MÉTODO PARA IMPRESSÃO DOS CÓDIGOS CODS CLUBES
	---------------------------------------------
	
	@param: std::string msg --> Mensagem principal para impressão 
	
	@para: char ans --> Escolha do usuário
	
	@param: int last_option --> Última opção numérica para escolha do clube
	
	@param: bool clean_screan --> Variável para decisão de limpeza de tela
 **/
void print_cod_clubes (std::string msg, char ans, int last_option, bool clean_screen) {
	
	Estadios estadios;
	
	if (clean_screen) system ("CLS");
	
	estadios.showCodigos();
	std::cout << std::endl;
	
	print_insert_cod (msg, 1);
	
	while (ans < '0' || ans > (char (last_option + '0'))) ans = getch();
	
}


/**	-------------------------------------------------------
	MÉTODO PARA IMPRESSÃO DA MENSAGEM DE INSERÇÃO DE CÓDIGO
	-------------------------------------------------------
	
	@param: std::string msg --> Mensagem principal para impressão 
	
	@param: int type --> Tipo de impressão
 **/
void print_insert_cod (std::string msg, int type) {
	
	if (!type) {
		
		print_block_line (1, 0, PRINT_BLOCK * 2, '-', true, true);
		std::cout << "\t" << msg << std::endl << std::endl
				  << "\t(Pressione 'A' para  visualizar  os  códigos)"		<< std::endl
				  << "\t(Pressione  0  para voltar ao menu principal)"		<< std::endl;
		print_block_line (1, 0, PRINT_BLOCK * 2, '-', true, true);
		
	} else {
		
		std::cout << "\t" << msg << std::endl << std::endl
				  << "\t(Pressione 0 para voltar ao menu principal)"		  << std::endl;
		
	}
	
}


/**	------------------------------------
	MÉTODO PARA INSERÇÃO DE UM CARACTERE
	------------------------------------
	
	@param: char *c --> Variável para armazenar resposta do usuário
	
	@param: int last_option --> Última opção de escolha possível
	
	@param: int ptype --> Tipo de inserção
 **/
void get_cod_answer (char *c, int last_option, int type) {
	
	if (!type) {	// Há a possibilidade de inserção de um caractere alfa 'A'
		
		*c = toupper(getch());
		while ((*c < '0' || (*c > (char (last_option + '0')))) && *c != 'A') *c = toupper(getch());
		
	} else {	// Não há a possibilidade da inserção de um caractere alfa
		
		*c = getch();
		while (*c < '0' || (*c > (char (last_option + '0')))) *c = getch();
		
	}
}


/**	--------------------------------------------
	NÉTODO PARA PRINTAR BLOCOS DE TAMANHO LINHAS
	--------------------------------------------
	
	@param: int block_nmbr --> Quantidade de blocos a serem impressos
	
	@param: int ctnt_block_size --> Tamanho dos blocos centrais
	
	@param: int final_block_size --> Tamanho do bloco final
	
	@param: char c --> Caractere que será impresso como linha
	
	@param: bool print_first_pipe --> Printar ou não o primeiro pipe ("|")
	
	@param: bool print_last_pipe --> Printar ou não o último pipe ("|")
 **/
void print_block_line (int block_nmbr, int ctnt_block_size, int final_block_size, char c, bool print_first_pipe, bool print_last_pipe) {
	
	if (print_first_pipe) std::cout << "|";
	for (int i = 1; i < block_nmbr; i++) {
		for (int i = 0; i < ctnt_block_size; i++) std::cout << c;
		std::cout << "|";
	}
	for (int i = 0; i < final_block_size; i++) std::cout << c;
	if (print_last_pipe) std::cout << "|" << std::endl;

}


/**	--------------------------------------
	FUNÇÃO PARA PRINTAR CÓDIGO DE UM CLUBE
	--------------------------------------
	
	@param: int index --> Posição do clube na struct
 **/
int handlerCod(int index) {
	
	Estadios estadios;
	return estadios.getCodigo(index);
	
}


/**	--------------------------------------
	FUNÇÃO PARA PRINTAR O NOME DE UM CLUBE
	--------------------------------------
	
	@param: int index --> Posição do clube na struct
 **/
std::string handlerClube(int index) {
	
	Estadios estadios;
	return estadios.getClube(index).data();
	
}


/**	----------------------------------------
	FUNÇÃO PARA PRINTAR O NOME DE UM ESTÁDIO
	----------------------------------------
	
	@param: int index --> Posição do clube na struct
 **/
std::string handlerEstadio(int index) {
	
	Estadios estadios;
	return estadios.getEstadio(index).data();
	
}


void _perror_block (std::string err_msg, int err) {
	
	_perror (err_msg);
	std::cout << std::endl << std::endl << "ST - [" << err << "]" << std::endl << std::endl;
	
	exit (1);
	
}

