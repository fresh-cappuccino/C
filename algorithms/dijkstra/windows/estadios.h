#ifndef _ESTADIOS_H
#define _ESTADIOS_H

//#include <cstdlib>
#include <iostream>
#include <string>

#include "desc_estadios.h"
#include "initializer.h"
#include "prog_utils.h"


class Estadios {
	private:
		desc_club DESC_CLUB[CLUBES];
		
		
		/**	--------------------------------------
			FUNÇÃO PRIVADA PARA RETORNAR ESTRUTURA
			--------------------------------------
			
			@param: desc_club dc --> Struct para ser retornada
		 **/
		desc_club getCopy (desc_club dc) {
			
			desc_club DC;
			DC.bairro = dc.bairro;
			DC.cep = DC.cep;
			DC.cidade_uf = dc.cidade_uf;
			DC.clube = dc.clube;
			DC.cod = dc.cod;
			DC.endereco = dc.endereco;
			DC.estadio = dc.estadio;
			DC.pais = dc.pais;
			
			return DC;
			
		}
		
	public:
		// Construtor
		Estadios () {
			init_club(DESC_CLUB);
		}
		
		/**	-----------------
			GETTERS E SETTERS
			-----------------
		 **/
		 
		 
		desc_club getDesc_club (int index) {
			return getCopy (DESC_CLUB[index]);
		}
		
		
		void setCodigo (int index, int cod) {
			DESC_CLUB[index].cod = cod;
		}
		
		
		int getCodigo (int index) {
			return DESC_CLUB[index].cod;
		}
		
		
		void setClube (int index, std::string clube) {
			DESC_CLUB[index].clube = clube;
		}
		
		
		std::string getClube (int index) {
			return DESC_CLUB[index].clube.data();
		}
		
		
		void setEstadio (int index, std::string estadio) {
			DESC_CLUB[index].estadio = estadio;
		}
		
		
		std::string getEstadio (int index) {
			return DESC_CLUB[index].estadio.data();
		}
		
		
		void setPais (int index, std::string pais) {
			DESC_CLUB[index].pais = pais;
		}
		
		
		std::string getPais (int index) {
			return DESC_CLUB[index].pais.data();
		}
		
		
		void setCidadeUF (int index, std::string cidade_uf) {
			DESC_CLUB[index].cidade_uf = cidade_uf;
		}
		
		
		std::string getCidadeUF (int index) {
			return DESC_CLUB[index].cidade_uf.data();
		}
		
		
		void setBairro (int index, std::string bairro) {
			DESC_CLUB[index].bairro = bairro;
		}
		
		
		std::string getBairro (int index) {
			return DESC_CLUB[index].bairro.data();
		}
		
		
		void setEndereco (int index, std::string endereco) {
			DESC_CLUB[index].endereco = endereco;
		}
		
		
		std::string getEndereco (int index) {
			return DESC_CLUB[index].endereco.data();
		}
		
		
		void setCep (int index, std::string cep) {
			DESC_CLUB[index].cep = cep;
		}
		
		
		std::string getCep (int index) {
			return DESC_CLUB[index].cep.data();
		}
		
		
		/**	--------------------
			FUNÇÕES DE IMPRESSÃO
			--------------------
		 **/
		
		
		/**	---------------------------------------
			FUNÇÃO PARA MOSTRAR UM CLUBE ESPECÍFICO
			---------------------------------------
			
			@param: int index --> Posição do clube na struct
		 **/
		void showClube (int index) {
			std::cout << DESC_CLUB[index].clube.data();
		}
		
		
		/**	-------------------------------------------------------
			FUNÇÃO PARA MOSTRAR TODOS OS CÓDIGOS E NOMES DOS CLUBES
			-------------------------------------------------------
			
			@param: NoNe
		 **/
		void showCodigos () {
			
			for (int index = 0; index < CLUBES; index++) {
				print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
				std::cout << " " << DESC_CLUB[index].clube << std::endl;
				print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
				
				std::cout << "\t" << "CÓDIGO: " << DESC_CLUB[index].cod << std::endl;
				
				print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
				std::cout << std::endl << std::endl;
				
			}
			
		}
		
		
		/**	-----------------------------------------
			FUNÇÃO PARA MOSTRAR UM ESTÁDIO ESPECÍFICO
			-----------------------------------------
			
			@param: int index --> Posição do estádio na struct
		 **/
		void showEstadio (int index) {
			
			print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
			std::cout << " CLUBE " << DESC_CLUB[index].cod << " - " << DESC_CLUB[index].clube.data() << std::endl;
			print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
			
			std::cout << "\t" << "ESTÁDIO: " << DESC_CLUB[index].estadio.data() << std::endl;
			
			print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
			std::cout << std::endl << std::endl;
			
		}
		
		
		/**	-------------------------------------
			FUNÇÃO PARA MOSTRAR TODOS OS ESTÁDIOS
			-------------------------------------
			
			@param: NoNe
		 **/
		void showEstadios () {
			for (int index = 0; index < CLUBES; index++) {
				
				print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
				std::cout << " CLUBE " << DESC_CLUB[index].cod << " - " << DESC_CLUB[index].clube.data() << std::endl;
				print_block_line(1, 0, PRINT_BLOCK, '=', true, true);
			
				std::cout << "\t" << "ESTÁDIO: " << DESC_CLUB[index].estadio.data() << std::endl;
				
				print_block_line(1, 0, PRINT_BLOCK, '-', true, true);
				std::cout << std::endl << std::endl;
				
			}
		}
		
		
		/**	-------------------------------------------
			FUNÇÃO PARA MOSTRAR INFORMAÇÕES DE UM CLUBE
			-------------------------------------------
			
			@param: int index --> Posição do clube na struct
		 **/
		void showClubInfo (int index) {
			
			print_block_line (1, 0, PRINT_BLOCK, '=', true, true);
			std::cout << " CLUBE " << DESC_CLUB[index].cod << " -- " << DESC_CLUB[index].clube.data() << " (INFO)" << std::endl;
			print_block_line (1, 0, PRINT_BLOCK, '=', true, true);
			
			std::cout << "\t" << "ESTÁDIO    : " << DESC_CLUB[index].estadio.data() << std::endl;
			std::cout << "\t" << "PAÍS       : " << DESC_CLUB[index].pais.data() << std::endl;
			std::cout << "\t" << "CIDADE (UF): " << DESC_CLUB[index].cidade_uf.data() << std::endl;
			std::cout << "\t" << "BAIRRO     : " << DESC_CLUB[index].bairro.data() << std::endl;
			std::cout << "\t" << "ENDEREÇO   : " << DESC_CLUB[index].endereco.data() << std::endl;
			std::cout << "\t" << "CEP        : " << DESC_CLUB[index].cep.data() << std::endl;
			
			std::cout << std::endl << std::endl;
			
		}
		
		
		/**	--------------------------------------------------
			FUNÇÃO PARA MOSTRAR INFORMAÇÕES DE TODOS OS CLUBES
			--------------------------------------------------
			
			@param: NoNe
		 **/
		void showClubsInfo () {
			
			for (int index = 0; index < CLUBES; index++) {
				print_block_line (1, 0, PRINT_BLOCK, '=', true, true);
				std::cout << " CLUBE " << DESC_CLUB[index].cod << " -- " << DESC_CLUB[index].clube.data() << " (INFO)" << std::endl;
				print_block_line (1, 0, PRINT_BLOCK, '=', true, true);
				
				std::cout << "\t" << "ESTÁDIO    : " << DESC_CLUB[index].estadio.data() << std::endl;
				std::cout << "\t" << "PAÍS       : " << DESC_CLUB[index].pais.data() << std::endl;
				std::cout << "\t" << "CIDADE (UF): " << DESC_CLUB[index].cidade_uf.data() << std::endl;
				std::cout << "\t" << "BAIRRO     : " << DESC_CLUB[index].bairro.data() << std::endl;
				std::cout << "\t" << "ENDEREÇO   : " << DESC_CLUB[index].endereco.data() << std::endl;
				std::cout << "\t" << "CEP        : " << DESC_CLUB[index].cep.data() << std::endl;
				
				std::cout << std::endl << std::endl;
			}
			
		}
		
};

#endif
