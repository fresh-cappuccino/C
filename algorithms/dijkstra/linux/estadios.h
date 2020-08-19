#ifndef _ESTADIOS_H
#define _ESTADIOS_H

//#include <cstdlib>
#include <iostream>

#include "desc_estadios.h"

class Estadios {
	private:
		desc_club DESC_CLUB[CLUBES];


		/**	--------------------------------------
			FUN��O PRIVADA PARA RETORNAR ESTRUTURA
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
			FUN��ES DE IMPRESS�O
			--------------------
		 **/


		/**	---------------------------------------
			FUN��O PARA MOSTRAR UM CLUBE ESPEC�FICO
			---------------------------------------

			@param: int index --> Posi��o do clube na struct
		 **/
		void showClube (int index);


		/**	-------------------------------------------------------
			FUN��O PARA MOSTRAR TODOS OS C�DIGOS E NOMES DOS CLUBES
			-------------------------------------------------------

			@param: NoNe
		 **/
		void showCodigos ();


		/**	-----------------------------------------
			FUN��O PARA MOSTRAR UM EST�DIO ESPEC�FICO
			-----------------------------------------

			@param: int index --> Posi��o do est�dio na struct
		 **/
		void showEstadio (int index);


		/**	-------------------------------------
			FUN��O PARA MOSTRAR TODOS OS EST�DIOS
			-------------------------------------

			@param: NoNe
		 **/
		void showEstadios ();

		/**	-------------------------------------------
			FUN��O PARA MOSTRAR INFORMA��ES DE UM CLUBE
			-------------------------------------------

			@param: int index --> Posi��o do clube na struct
		 **/
		void showClubInfo (int index);


		/**	--------------------------------------------------
			FUN��O PARA MOSTRAR INFORMA��ES DE TODOS OS CLUBES
			--------------------------------------------------

			@param: NoNe
		 **/
		void showClubsInfo ();
};

#endif
