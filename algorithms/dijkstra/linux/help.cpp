#include <iostream>

#include "desc_estadios.h"
#include "estadios.h"
#include "text_format.h"


/**	----------------------------------------------------------
	M�TODO PARA FORNECER AJUDA COM RELA��O A CLUBES E EST�DIOS
	----------------------------------------------------------

	@param: NoNe
 **/
void clubes_estadios_help () {

	ptitle ("EST�DIOS E CLUBES --- HELP MENU");
	std::cout << std::endl;
	std::cout << "Existe um total de " << CLUBES << " clubes de futebol cadastrados no sistema." << std::endl
			  << "Cada clube possui:"										<< std::endl
			  << "			-- Um c�digo de cadastro para identifica��o"	<< std::endl
			  << "			-- Um est�dio cadastrado"						<< std::endl
			  << "			-- Pa�s de origem do clube"						<< std::endl
			  << "			-- Cidade e estado de localiza��o do est�dio"	<< std::endl
			  << "			-- Bairro de localiza��o do est�dio"			<< std::endl
			  << "			-- Endere�o do est�dio"							<< std::endl
			  << "			-- CEP do endere�o"								<< std::endl << std::endl

			  << "** ----------- **" << std::endl
			  << "** OBSERVA��ES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Todos os acessos a informa��es sobre os CLUBES ou EST�DIOS s�o feitos atrav�s do c�digo do clube" << std::endl
			  << "		2.) Os c�digos de clubes v�o de 1 a " << CLUBES << std::endl
			  << "		3.) Caso n�o saiba o c�digo que deseja acessar, o sistema te d� a op��o de mostr�-los apertando o caractere 'A'" << std::endl
			  << "			Voc� tem a op��o de mostrar os c�digos no MENU PRINCIPAL ou nas abas que necessitam de uma inser��o do c�digo"<< std::endl
			  << "		4.) Qualquer caractere n�o especificado ou inv�lido, ser� completamente ignorado pelo programa" << std::endl
			  << "		4.) Todas as informa��es sobre os Clubes e seus respectivos est�dios, podem ser obtidas no t�pico 1 do MENU PRINCIPAL" << std::endl;

}


/**	------------------------------------------------------------
	M�TODO PARA FORNECER AJUDA COM RELA��O A MATRIZ DE DIST�NCIA
	------------------------------------------------------------

	@param: NoNe
 **/
void matriz_distancia_help() {

	ptitle ("MATRIZ DE DIST�NCIA -- HELP MENU");

	std::cout << "A Matriz de Dist�ncia representa a dist�ncia entre todos os Est�dios dos Clubes cadastrados" << std::endl
			  << "Ela � mostrada com os c�digos dos Clubes como cabe�alho, junto a uma legenda para relacionar" << std::endl
			  << "os c�digos dos clubes com seus respectivos nomes" << std::endl << std::endl


			  << "Matriz mostrada na tela:" << std::endl << std::endl

			  << "|---------------------------------------------------|" << std::endl
			  << " 1 -> Botafogo SP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 2 -> Comercial RP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 3 -> Mogi-Mirim FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 4 -> Coritiba FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 5 -> Bahia FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 6 -> Kashima Antlers" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 7 -> Gamba Osaka" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << " 8 -> Yokohama F-Marinos" << std::endl
			  << "|---------------------------------------------------|" << std::endl << std::endl <<std::endl
			  << "          1            2            3            4            5            6            7            8" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 1  |       0  |         3  |       196  |       675  |      1840  |     17012  |     17924  |     15745  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 2  |       3  |         0  |       196  |       674  |      1840  |     17054  |     17142  |     15585  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 3  |     197  |       197  |         0  |       527  |      1913  |     20452  |     20441  |     21012  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 4  |     673  |       674  |       524  |         0  |      2435  |     19897  |     17431  |     16919  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 5  |    1848  |      1849  |      1872  |      2381  |         0  |     18256  |     17531  |     17871  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 6  |   19448  |     19481  |     20535  |     18014  |     17683  |         0  |       545  |       361  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 7  |   17756  |     17730  |     21491  |     16505  |     17781  |       570  |         0  |       154  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 8  |   16860  |     16847  |     19541  |     18798  |     17041  |       805  |       207  |         0  |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl << std::endl << std::endl


			  << "** ------- **" << std::endl
			  << "** LEITURA **" << std::endl
			  << "** ------- **" << std::endl << std::endl

			  << "A leitura � bem similar a Matrizes do g�nero." << std::endl
			  << "Primeiro escolhe-se um C�digo a direita, que ser� seu ponto de partida" << std::endl
			  << "Depois, escolhe-se um C�digo acima, que ser� seu ponto de chegada" << std::endl
			  << "Por fim, basta cruzar ambos os c�digos na matriz e ver qual valor relaciona os dois." << std::endl << std::endl

			  << "** EXEMPLO **" << std::endl << std::endl

			  << "Se sairmos do \"Comercial RP\" (C�digo 2) e partimos para \"Mogi-Mirim FC\" (C�digo 3), temos 196 como resultado" << std::endl
			  << "An�lise abaixo, partindo do c�digo 2, indo para o C�digo 3 :" << std::endl << std::endl

			  << "          1            2            3            4            5            6            7            8" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 1  |          |            |       |    |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|-------v----|------------|------------|------------|------------|------------|--" << std::endl
			  << " 2  | -------> | ---------> | ----> 196  |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 3  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 4  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 5  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 6  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 7  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 8  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl << std::endl << std::endl

			  << "Agora, fazendo o caminho inverso, partindo de \"Mogi-Mirim FC\" (C�digo 3) e indo para \"Comercial RP\" (C�digo 2)" << std::endl
			  << "passamos a ter 197 como resultado." << std::endl
			  << "An�lise abaixo, partindo do c�digo 3, indo para o C�digo 2 :" << std::endl << std::endl

			  << "          1            2            3            4            5            6            7            8" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 1  |          |       |    |            |            |            |            |            |            |" << std::endl
			  << "     ----------|-------v----|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 2  |          |       |    |            |            |            |            |            |            |" << std::endl
			  << "     ----------|-------v----|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 3  | -------> | ----> 197  |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 4  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 5  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 6  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 7  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl
			  << " 8  |          |            |            |            |            |            |            |            |" << std::endl
			  << "     ----------|------------|------------|------------|------------|------------|------------|------------|--" << std::endl << std::endl << std::endl

			  << "** ----------- **" << std::endl
			  << "** OBSERVA��ES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Os cruzamentos de valor igual na Matriz (1 - 1, 2 - 2, 3 - 3, ..., " << CLUBES << " - " << CLUBES << ") possuem cruzamento de valor 0" << std::endl
			  << "		2.) Isso ocorre pois o mesmo ponto � o ponto inicial e final. Portanto, n�o h� nevessidade de locomo��o" << std::endl;

}


/**	---------------------------------------------------------------
	M�TODO PARA FORNECER AJUDA COM RELA��O A �RVORE GERADORA M�NIMA
	---------------------------------------------------------------

	@param: NoNe
 **/
void arvore_minima_help() {

	Estadios estadios;

	ptitle ("�RVORE GERADORA M�NIMA -- HELP MENU");
	std::cout << "A �rvore geradora m�nima � dada pela implementa��o do algor�tmo de Dijkstra (caminho mais pr�ximo)" << std::endl << std::endl


			  << "	 -------------"		<< std::endl
			  << "** FUNCIONAMENTO **"	<< std::endl
			  << "	 -------------"		<< std::endl << std::endl
			  << "Primeiramente � montado um grafo de N posi��es." << std::endl
			  << "No caso deste sistema, � montado um grafo de " << CLUBES << " posi��es (N�mero de clubes cadastrados)." << std::endl << std::endl
			  << "POSI��ES DO GRAFO:" << std::endl;

			  for (int i = 0; i < CLUBES; i++) {
			  	std::cout << "\t" << (i + 1) << " - ";
				estadios.showClube(i);
				std::cout << std::endl;
			  }

	std::cout << std::endl
			  << "Ap�s isso, � definido um N� de origem. Este n�, ser� o n� de partida para os pr�ximos" << std::endl
			  << "Com isso, � ent�o implementado o algor�tmo de Dijkstra" << std::endl << std::endl

			  << "Caso queira entender mais sobre o algor�tmo de Dijkstra, basta acessar o Link abaixo" << std::endl
			  << "https://www.slideshare.net/mcastrosouza/caminhos-mnimos-algoritmo-de-dijkstra" << std::endl << std::endl

			  << "-----------------------------------------------------------------------------------------" << std::endl << std::endl

			  << "Esse dever� ser o resultado mostrado, caso escolha o C�digo 1 como inicial:" << std::endl << std::endl

			  << "==============================" << std::endl
			  << "      �RVORE GERADORA M�NIMA  |" << std::endl
			  << "==============================" << std::endl << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "1 -> Botafogo SP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "2 -> Comercial RP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "3 -> Mogi-Mirim FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "4 -> Coritiba FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "5 -> Bahia FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "6 -> Kashima Antlers" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "7 -> Gamba Osaka" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "8 -> Yokohama F-Marinos" << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "        N� 1 (custo = 0) -->" << std::endl << std::endl
			  << "                N� 2 (custo = 3)" << std::endl << std::endl
			  << "                        N� 8 (custo = 15588) -->" << std::endl << std::endl
			  << "                                N� 7 (custo = 15795) -->" << std::endl << std::endl
			  << "                                        N� 6 (custo = 16365) -->" << std::endl << std::endl << std::endl << std::endl
			  << "                N� 3 (custo = 196)" << std::endl << std::endl
			  << "                N� 4 (custo = 675) -->" << std::endl << std::endl
			  << "                N� 5 (custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "O sistema, tamb�m d� a possibilidade de imprimir o nome do clube ou o nome do est�dio, no lugar do c�digo" << std::endl << std::endl
			  << "Desta forma: " << std::endl << std::endl


			  << "** IMPRIMINDO �RVORE POR NOME DO CLUBE **" << std::endl << std::endl
			  << "==============================" << std::endl
			  << "      �RVORE GERADORA M�NIMA  |" << std::endl
			  << "==============================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Botafogo SP (N� 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Comercial RP (N� 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Yokohama F-Marinos (N� 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Gamba Osaka (N� 7, custo = 15795) -->" << std::endl << std::endl
			  << "                                                                                Kashima Antlers (N� 6, custo = 16365)" << std::endl << std::endl << std::endl << std::endl
			  << "                                Mogi-Mirim FC (N� 3, custo = 196)" << std::endl << std::endl
			  << "                                Coritiba FC (N� 4, custo = 675)" << std::endl << std::endl
			  << "                                Bahia FC (N� 5, custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "** IMPRIMINDO �RVORE POR NOME DO EST�DIO **" << std::endl << std::endl
			  << "==============================" << std::endl
			  << "      �RVORE GERADORA M�NIMA  |" << std::endl
			  << "==============================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Est�dio Santa Cruz (N� 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Est�dio Palma Travassos (N� 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Nippatsu Mitsuzawa Stadium (N� 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Panasonic Stadium Suita (N� 7, custo = 15795) -->" << std::endl << std::endl
			  << "                                                                                Ibaraki Kashima Stadium (N� 6, custo = 16365)" << std::endl << std::endl << std::endl << std::endl
			  << "                                Est�dio Vail Chaves (N� 3, custo = 196)" << std::endl << std::endl
			  << "                                Est�dio Couto Pereira (N� 4, custo = 675)" << std::endl << std::endl
			  << "                                Itaipava Fonte Nova Arena (N� 5, custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "   -------" << std::endl
			  << "** LEITURA **" << std::endl
			  << "   -------" << std::endl

			  << "Perceba nas impress�es acima, que os N�s est�o sendo impressos em identa��es diferentes" << std::endl
			  << "Perceba tamb�m que o N� de origem est� mais a esquerda" << std::endl
			  << "Os N�s identados mais a direita, portanto, s�o provenientes dos n�s a esquerda" << std::endl
			  << "Mais especificmente, do primeiro N� acima, com uma identa��o a esquerda deste N�" << std::endl << std::endl


			  << "Por exemplo:" << std::endl
			  << "		*Partindo do EST�DIO SANTA CRUZ, voc� pode ir para os seguintes est�dios:" << std::endl
			  << "					-- EST�DIO PALMA TRAVASSOS" << std::endl
			  << "					-- EST�DIO VAIL CHAVES" << std::endl
			  << "					-- IBARAKI KASHIMA STADIUM" << std::endl << std::endl

			  << "		*Partindo do IBARAKI KASHIMA STADIUM, voc� pode ir para os seguintes est�dios:" << std::endl
			  << "					-- EST�DIO COUTO PEREIRA" << std::endl
			  << "					-- NIPPATSU MITSUZAWA STADIUM" << std::endl << std::endl

			  << "		*Partindo do EST�DIO COUTO PEREIRA, voc� pode ir para o seguinte es�dio:" << std::endl
			  << "					-- ITAIPAVA FONTE NOVA ARENA" << std::endl << std::endl

			  << "		*Partindo do NIPPATSU MITSUZAWA STADIUM, voc� pode ir para o seguinte est�dio:" << std::endl
			  << "					-- PANASONIC STADIUM SUITA" << std::endl << std::endl

			  << "		*Os est�dios abaixo, n�o tem caminhos posteriores" << std::endl
			  << "					-- EST�DIO PALMA TRAVASSOS" << std::endl
			  << "					-- EST�DIO VAIL CHAVES"	<< std::endl
			  << "					-- ITAIPAVA FONTE NOVA ARENA" << std::endl
			  << "					-- PANASONIC STADIUM SUITA" << std::endl << std::endl


			  << "   ------------" << std::endl
			  << "** OBSERVA��ES: **" << std::endl
			  << "   ------------ **" << std::endl << std::endl

			  << "		1.) Perceba que os Est�dios que possuem caminhos posteriores, possuem uma seta (-->) a frente" << std::endl
			  << "		2.) Cada vez que o N� de Origem for mudado, os caminhos provavelmente tamb�m ser�o alterados" << std::endl << std::endl
			  << "		3.) O sistema d� a op��o de \"IMPRESS�O PASSO A PASSO\"" << std::endl
			  << "			Nesse tipo de impress�o, o grafo � impresso na tela pausadamente (N� por N�) conforme o usu�rio digita [ENTER]" << std::endl
			  << "		4.) Qualquer caractere n�o especificado ou Inv�lido, ser� completamente ignorado pelo programa" << std::endl
			  << "		5.) Caso ainda haja alguma d�vida com rela��o ao funcionamento ou a leitura da �rvore Geradora M�nima" << std::endl
			  << "			Acesse o t�pico de ajuda do CAMINHO M�NIMO, talvez os exemplos sejam mais esclarecedores"  << std::endl;

}


/**	--------------------------------------------------------
	M�TODO PARA FORNECER AJUDA COM RELA��O AO CAMINHO M�NIMO
	--------------------------------------------------------

	@param: NoNe
 **/
void caminho_minimo_help() {

	Estadios estadios;

	ptitle ("CAMINHO M�NIMO -- HELP MENU");
	std::cout << "O caminho m�nimo � dada pela implementa��o do algor�tmo de Dijkstra (caminho mais pr�ximo)" << std::endl
			  << "Mas diferente da �rvore Geradora M�nima, o Caminho m�nimo imprime apenas 1 �nico caminho" << std::endl
			  << "dado pelo N� de origem e um N� de destino" << std::endl << std::endl


			  << "	 -------------"		<< std::endl
			  << "** FUNCIONAMENTO **"	<< std::endl
			  << "	 -------------"		<< std::endl << std::endl
			  << "Primeiramente � montado um grafo de N posi��es." << std::endl
			  << "No caso deste sistema, � montado um grafo de " << CLUBES << " posi��es (N�mero de clubes cadastrados)." << std::endl
			  << "POSI��ES DO GRAFO:" << std::endl;

			  for (int i = 0; i < CLUBES; i++) {
			  	std::cout << "\t" << (i + 1) << " - ";
				estadios.showClube(i);
				std::cout << std::endl;
			  }

	std::cout << std::endl
			  << "Ap�s isso, � definido um N� de origem. Este n�, ser� o n� de partida" << std::endl
			  << "Posteriormente, � definido um N� de destino. Este n�, por sua vez, � a parada final" << std::endl
			  << "Com isso, � ent�o implementado o algor�tmo de Dijkstra no grafo" << std::endl << std::endl

			  << "** Caso queira entender mais sobre o algor�tmo de Dijkstra, basta acessar o link abaixo" << std::endl
			  << "https://www.slideshare.net/mcastrosouza/caminhos-mnimos-algoritmo-de-dijkstra" << std::endl << std::endl

			  << "-----------------------------------------------------------------------------------------" << std::endl << std::endl

			  << "Esse dever� ser o resultado mostrado, caso escolha o C�digo 1 como inicial e o C�digo 7 como final:" << std::endl << std::endl


			  << "=======================" << std::endl
			  << "      CAMINHO M�NIMO  |" << std::endl
			  << "=======================" << std::endl << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "1 -> Botafogo SP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "2 -> Comercial RP" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "3 -> Mogi-Mirim FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "4 -> Coritiba FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "5 -> Bahia FC" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "6 -> Kashima Antlers" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "7 -> Gamba Osaka" << std::endl
			  << "|---------------------------------------------------|" << std::endl
			  << "8 -> Yokohama F-Marinos" << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "        N� 1 (custo = 0) -->" << std::endl << std::endl
			  << "                N� 2 (custo = 3) -->" << std::endl << std::endl
			  << "                        N� 8 (custo = 15588) -->" << std::endl << std::endl
			  << "                                N� 7 (custo = 15795)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "O sistema, tamb�m d� a possibilidade de imprimir o nome do clube ou o nome do est�dio, no lugar do c�digo" << std::endl << std::endl
			  << "Desta forma: " << std::endl << std::endl


			  << "** IMPRIMINDO CAMINHO POR NOME DO CLUBE **" << std::endl << std::endl
			  << "=======================" << std::endl
			  << "      CAMINHO M�NIMO  |" << std::endl
			  << "=======================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Botafogo SP (N� 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Comercial RP (N� 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Yokohama F-Marinos (N� 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Gamba Osaka (N� 7, custo = 15795)" << std::endl << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "** IMPRIMINDO CAMINHO POR NOME DO EST�DIO **" << std::endl << std::endl
			  << "=======================" << std::endl
			  << "      CAMINHO M�NIMO  |" << std::endl
			  << "=======================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Est�dio Santa Cruz (N� 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Est�dio Palma Travassos (N� 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Nippatsu Mitsuzawa Stadium (N� 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Panasonic Stadium Suita (N� 7, custo = 15795)" << std::endl << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "   -------" << std::endl
			  << "** LEITURA **" << std::endl
			  << "   -------" << std::endl

			  << "Perceba nas impress�es acima, que os N�s est�o sendo impressos em identa��es diferentes" << std::endl
			  << "Perceba tamb�m que o N� de origem est� mais a esquerda" << std::endl
			  << "Os N�s identados mais a direita, portanto, s�o provenientes dos n�s a esquerda" << std::endl
			  << "Mais especificmente, do primeiro N� acima, com uma identa��o a esquerda deste N�" << std::endl << std::endl


			  << "Portanto, vemos que, saindo do N� 1 e indo para o N� 7, o caminho mais curto seria:" << std::endl
			  << "			N� 1 --> N� --> 6 N� --> N� 8 --> N� 7" << std::endl << std::endl


			  << "   ------------" << std::endl
			  << "** OBSERVA��ES: **" << std::endl
			  << "   ------------ **" << std::endl << std::endl
			  << "		1.) Perceba que os Est�dios que possuem caminhos posteriores, possuem uma seta (-->) a frente" << std::endl
			  << "		2.) Cada vez que o N� de Origem for mudado, os caminhos provavelmente tamb�m ser�o alterados" << std::endl << std::endl
			  << "		3.) O sistema d� a op��o de \"IMPRESS�O PASSO A PASSO\"" << std::endl
			  << "			Nesse tipo de impress�o, o caminho � impresso na tela pausadamente (N� por N�) conforme o usu�rio digita [ENTER]" << std::endl
			  << "		4.) Qualquer caractere n�o especificado ou inv�lido, ser� completamente ignorado pelo programa" << std::endl;

}


/**	---------------------------------------------------------
	M�TODO PARA FORNECER AJUDA COM RELA��O A SAIR DO PROGRAMA
	---------------------------------------------------------

	@param: NoNe
 **/
void exit_program_help () {

	ptitle ("COMO SAIR DO PROGRAMA -- HELP MENU");

	std::cout << "Para sair do programa, basta digitar o caractere '0' no MENU PRINCIPAL" << std::endl
			  << "A seguinte pergunta aparecer� na tela:" << std::endl << std::endl

			  << "\t===================================================" << std::endl
			  << "\t      Deseja realmente sair do programa? [S - N]  |" << std::endl
			  << "\t===================================================" << std::endl << std::endl

			  << "Basta ent�o clicar no caractere 'S', caso deseje realmente sair do programa" << std::endl
			  << "Ou no caractere 'N', caso deseje continuar no programa" << std::endl << std::endl

			  << "** ----------- **" << std::endl
			  << "** OBSERVA��ES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Qualquer outro caractere, sen�o 'S' ou 'N', ser� completamente ignorado pelo programa" << std::endl
			  << "		2.) Em outras partes do programa, o caractere '0' � utilizado para cancelar uma opera��o e voltar ao MENU PRINCIPAL" << std::endl;

}
