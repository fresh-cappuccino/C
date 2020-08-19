#include <iostream>
#include <string>

#include "estadios.h"
#include "text_format.h"


/**	---------------------------------------------
	M�TODO PARA IMPRESS�O DOS C�DIGOS CODS CLUBES
	---------------------------------------------
	
	@param: std::string msg --> Mensagem principal para impress�o 
	
	@para: char ans --> Escolha do usu�rio
	
	@param: int last_option --> �ltima op��o num�rica para escolha do clube
	
	@param: bool clean_screan --> Vari�vel para decis�o de limpeza de tela
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
	M�TODO PARA IMPRESS�O DA MENSAGEM DE INSER��O DE C�DIGO
	-------------------------------------------------------
	
	@param: std::string msg --> Mensagem principal para impress�o 
	
	@param: int type --> Tipo de impress�o
 **/
void print_insert_cod (std::string msg, int type) {
	
	if (!type) {
		
		print_block_line (1, 0, PRINT_BLOCK * 2, '-', true, true);
		std::cout << "\t" << msg << std::endl << std::endl
				  << "\t(Pressione 'A' para  visualizar  os  c�digos)"		<< std::endl
				  << "\t(Pressione  0  para voltar ao menu principal)"		<< std::endl;
		print_block_line (1, 0, PRINT_BLOCK * 2, '-', true, true);
		
	} else {
		
		std::cout << "\t" << msg << std::endl << std::endl
				  << "\t(Pressione 0 para voltar ao menu principal)"		  << std::endl;
		
	}
	
}


/**	------------------------------------
	M�TODO PARA INSER��O DE UM CARACTERE
	------------------------------------
	
	@param: char *c --> Vari�vel para armazenar resposta do usu�rio
	
	@param: int last_option --> �ltima op��o de escolha poss�vel
	
	@param: int ptype --> Tipo de inser��o
 **/
void get_cod_answer (char *c, int last_option, int type) {
	
	if (!type) {	// H� a possibilidade de inser��o de um caractere alfa 'A'
		
		*c = toupper(getch());
		while ((*c < '0' || (*c > (char (last_option + '0')))) && *c != 'A') *c = toupper(getch());
		
	} else {	// N�o h� a possibilidade da inser��o de um caractere alfa
		
		*c = getch();
		while (*c < '0' || (*c > (char (last_option + '0')))) *c = getch();
		
	}
}


/**	--------------------------------------------
	N�TODO PARA PRINTAR BLOCOS DE TAMANHO LINHAS
	--------------------------------------------
	
	@param: int block_nmbr --> Quantidade de blocos a serem impressos
	
	@param: int ctnt_block_size --> Tamanho dos blocos centrais
	
	@param: int final_block_size --> Tamanho do bloco final
	
	@param: char c --> Caractere que ser� impresso como linha
	
	@param: bool print_first_pipe --> Printar ou n�o o primeiro pipe ("|")
	
	@param: bool print_last_pipe --> Printar ou n�o o �ltimo pipe ("|")
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
	FUN��O PARA PRINTAR C�DIGO DE UM CLUBE
	--------------------------------------
	
	@param: int index --> Posi��o do clube na struct
 **/
int handlerCod(int index) {
	
	Estadios estadios;
	return estadios.getCodigo(index);
	
}


/**	--------------------------------------
	FUN��O PARA PRINTAR O NOME DE UM CLUBE
	--------------------------------------
	
	@param: int index --> Posi��o do clube na struct
 **/
std::string handlerClube(int index) {
	
	Estadios estadios;
	return estadios.getClube(index).data();
	
}


/**	----------------------------------------
	FUN��O PARA PRINTAR O NOME DE UM EST�DIO
	----------------------------------------
	
	@param: int index --> Posi��o do clube na struct
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

