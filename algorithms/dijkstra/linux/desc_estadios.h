#ifndef _LOC_ESTADIOS_H
#define _LOC_ESTADIOS_H

#include <string>

#define CLUBES 8
#define MAX_CLUB 19
#define MAX_ESTADIO 27
#define NMBR_INFO 5
#define PRINT_BLOCK 51
#define FINAL_BLOCK 21

/**	-----------------------------------------------------
	ESTRUTURA PARA ARMAZENAMENTO DAS INFORMAÇÕES DO CLUBE
	-----------------------------------------------------
 **/
typedef struct desc_club {
	int cod;

	std::string clube;
	std::string estadio;
	std::string pais;
	std::string cidade_uf;
	std::string bairro;
	std::string endereco;
	std::string cep;

} desc_club;


#endif
