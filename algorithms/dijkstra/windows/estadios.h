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
		desc_club getCopy (desc_club dc);

	public:
		// Construtor
		Estadios ();

		/**	-----------------
			GETTERS E SETTERS
			-----------------
		 **/


		desc_club getDesc_club (int index);


		void setCodigo (int index, int cod);


		int getCodigo (int index);


		void setClube (int index, std::string clube);


		std::string getClube (int index);


		void setEstadio (int index, std::string estadio);


		std::string getEstadio (int index);


		void setPais (int index, std::string pais);


		std::string getPais (int index);


		void setCidadeUF (int index, std::string cidade_uf);


		std::string getCidadeUF (int index);


		void setBairro (int index, std::string bairro);


		std::string getBairro (int index);


		void setEndereco (int index, std::string endereco);


		std::string getEndereco (int index);


		void setCep (int index, std::string cep);


		std::string getCep (int index);


		/**	--------------------
			FUNÇÕES DE IMPRESSÃO
			--------------------
		 **/


		/**	---------------------------------------
			FUNÇÃO PARA MOSTRAR UM CLUBE ESPECÍFICO
			---------------------------------------

			@param: int index --> Posição do clube na struct
		 **/
		void showClube (int index);


		/**	-------------------------------------------------------
			FUNÇÃO PARA MOSTRAR TODOS OS CÓDIGOS E NOMES DOS CLUBES
			-------------------------------------------------------

			@param: NoNe
		 **/
		void showCodigos ();


		/**	-----------------------------------------
			FUNÇÃO PARA MOSTRAR UM ESTÁDIO ESPECÍFICO
			-----------------------------------------

			@param: int index --> Posição do estádio na struct
		 **/
		void showEstadio (int index);


		/**	-------------------------------------
			FUNÇÃO PARA MOSTRAR TODOS OS ESTÁDIOS
			-------------------------------------

			@param: NoNe
		 **/
		void showEstadios ();


		/**	-------------------------------------------
			FUNÇÃO PARA MOSTRAR INFORMAÇÕES DE UM CLUBE
			-------------------------------------------

			@param: int index --> Posição do clube na struct
		 **/
		void showClubInfo (int index);


		/**	--------------------------------------------------
			FUNÇÃO PARA MOSTRAR INFORMAÇÕES DE TODOS OS CLUBES
			--------------------------------------------------

			@param: NoNe
		 **/
		void showClubsInfo ();
};

#endif
