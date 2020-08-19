#include <iostream>

#include "desc_estadios.h"
#include "estadios.h"
#include "text_format.h"


/**	----------------------------------------------------------
	MÉTODO PARA FORNECER AJUDA COM RELAÇÃO A CLUBES E ESTÁDIOS
	----------------------------------------------------------

	@param: NoNe
 **/
void clubes_estadios_help () {

	ptitle ("ESTÁDIOS E CLUBES --- HELP MENU");
	std::cout << std::endl;
	std::cout << "Existe um total de " << CLUBES << " clubes de futebol cadastrados no sistema." << std::endl
			  << "Cada clube possui:"										<< std::endl
			  << "			-- Um código de cadastro para identificação"	<< std::endl
			  << "			-- Um estádio cadastrado"						<< std::endl
			  << "			-- País de origem do clube"						<< std::endl
			  << "			-- Cidade e estado de localização do estádio"	<< std::endl
			  << "			-- Bairro de localização do estádio"			<< std::endl
			  << "			-- Endereço do estádio"							<< std::endl
			  << "			-- CEP do endereço"								<< std::endl << std::endl

			  << "** ----------- **" << std::endl
			  << "** OBSERVAÇÕES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Todos os acessos a informações sobre os CLUBES ou ESTÁDIOS são feitos através do código do clube" << std::endl
			  << "		2.) Os códigos de clubes vão de 1 a " << CLUBES << std::endl
			  << "		3.) Caso não saiba o código que deseja acessar, o sistema te dá a opção de mostrá-los apertando o caractere 'A'" << std::endl
			  << "			Você tem a opção de mostrar os códigos no MENU PRINCIPAL ou nas abas que necessitam de uma inserção do código"<< std::endl
			  << "		4.) Qualquer caractere não especificado ou inválido, será completamente ignorado pelo programa" << std::endl
			  << "		4.) Todas as informações sobre os Clubes e seus respectivos estádios, podem ser obtidas no tópico 1 do MENU PRINCIPAL" << std::endl;

}


/**	------------------------------------------------------------
	MÉTODO PARA FORNECER AJUDA COM RELAÇÃO A MATRIZ DE DISTÂNCIA
	------------------------------------------------------------

	@param: NoNe
 **/
void matriz_distancia_help() {

	ptitle ("MATRIZ DE DISTÂNCIA -- HELP MENU");

	std::cout << "A Matriz de Distância representa a distância entre todos os Estádios dos Clubes cadastrados" << std::endl
			  << "Ela é mostrada com os códigos dos Clubes como cabeçalho, junto a uma legenda para relacionar" << std::endl
			  << "os códigos dos clubes com seus respectivos nomes" << std::endl << std::endl


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

			  << "A leitura é bem similar a Matrizes do gênero." << std::endl
			  << "Primeiro escolhe-se um Código a direita, que será seu ponto de partida" << std::endl
			  << "Depois, escolhe-se um Código acima, que será seu ponto de chegada" << std::endl
			  << "Por fim, basta cruzar ambos os códigos na matriz e ver qual valor relaciona os dois." << std::endl << std::endl

			  << "** EXEMPLO **" << std::endl << std::endl

			  << "Se sairmos do \"Comercial RP\" (Código 2) e partimos para \"Mogi-Mirim FC\" (Código 3), temos 196 como resultado" << std::endl
			  << "Análise abaixo, partindo do código 2, indo para o Código 3 :" << std::endl << std::endl

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

			  << "Agora, fazendo o caminho inverso, partindo de \"Mogi-Mirim FC\" (Código 3) e indo para \"Comercial RP\" (Código 2)" << std::endl
			  << "passamos a ter 197 como resultado." << std::endl
			  << "Análise abaixo, partindo do código 3, indo para o Código 2 :" << std::endl << std::endl

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
			  << "** OBSERVAÇÕES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Os cruzamentos de valor igual na Matriz (1 - 1, 2 - 2, 3 - 3, ..., " << CLUBES << " - " << CLUBES << ") possuem cruzamento de valor 0" << std::endl
			  << "		2.) Isso ocorre pois o mesmo ponto é o ponto inicial e final. Portanto, não há nevessidade de locomoção" << std::endl;

}


/**	---------------------------------------------------------------
	MÉTODO PARA FORNECER AJUDA COM RELAÇÃO A ÁRVORE GERADORA MÍNIMA
	---------------------------------------------------------------

	@param: NoNe
 **/
void arvore_minima_help() {

	Estadios estadios;

	ptitle ("ÁRVORE GERADORA MÍNIMA -- HELP MENU");
	std::cout << "A árvore geradora mínima é dada pela implementação do algorítmo de Dijkstra (caminho mais próximo)" << std::endl << std::endl


			  << "	 -------------"		<< std::endl
			  << "** FUNCIONAMENTO **"	<< std::endl
			  << "	 -------------"		<< std::endl << std::endl
			  << "Primeiramente é montado um grafo de N posições." << std::endl
			  << "No caso deste sistema, é montado um grafo de " << CLUBES << " posições (Número de clubes cadastrados)." << std::endl << std::endl
			  << "POSIÇÕES DO GRAFO:" << std::endl;

			  for (int i = 0; i < CLUBES; i++) {
			  	std::cout << "\t" << (i + 1) << " - ";
				estadios.showClube(i);
				std::cout << std::endl;
			  }

	std::cout << std::endl
			  << "Após isso, é definido um Nó de origem. Este nó, será o nó de partida para os próximos" << std::endl
			  << "Com isso, é então implementado o algorítmo de Dijkstra" << std::endl << std::endl

			  << "Caso queira entender mais sobre o algorítmo de Dijkstra, basta acessar o Link abaixo" << std::endl
			  << "https://www.slideshare.net/mcastrosouza/caminhos-mnimos-algoritmo-de-dijkstra" << std::endl << std::endl

			  << "-----------------------------------------------------------------------------------------" << std::endl << std::endl

			  << "Esse deverá ser o resultado mostrado, caso escolha o Código 1 como inicial:" << std::endl << std::endl

			  << "==============================" << std::endl
			  << "      ÁRVORE GERADORA MÍNIMA  |" << std::endl
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
			  << "        Nó 1 (custo = 0) -->" << std::endl << std::endl
			  << "                Nó 2 (custo = 3)" << std::endl << std::endl
			  << "                        Nó 8 (custo = 15588) -->" << std::endl << std::endl
			  << "                                Nó 7 (custo = 15795) -->" << std::endl << std::endl
			  << "                                        Nó 6 (custo = 16365) -->" << std::endl << std::endl << std::endl << std::endl
			  << "                Nó 3 (custo = 196)" << std::endl << std::endl
			  << "                Nó 4 (custo = 675) -->" << std::endl << std::endl
			  << "                Nó 5 (custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "O sistema, também dá a possibilidade de imprimir o nome do clube ou o nome do estádio, no lugar do código" << std::endl << std::endl
			  << "Desta forma: " << std::endl << std::endl


			  << "** IMPRIMINDO ÁRVORE POR NOME DO CLUBE **" << std::endl << std::endl
			  << "==============================" << std::endl
			  << "      ÁRVORE GERADORA MÍNIMA  |" << std::endl
			  << "==============================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Botafogo SP (Nó 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Comercial RP (Nó 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Yokohama F-Marinos (Nó 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Gamba Osaka (Nó 7, custo = 15795) -->" << std::endl << std::endl
			  << "                                                                                Kashima Antlers (Nó 6, custo = 16365)" << std::endl << std::endl << std::endl << std::endl
			  << "                                Mogi-Mirim FC (Nó 3, custo = 196)" << std::endl << std::endl
			  << "                                Coritiba FC (Nó 4, custo = 675)" << std::endl << std::endl
			  << "                                Bahia FC (Nó 5, custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "** IMPRIMINDO ÁRVORE POR NOME DO ESTÁDIO **" << std::endl << std::endl
			  << "==============================" << std::endl
			  << "      ÁRVORE GERADORA MÍNIMA  |" << std::endl
			  << "==============================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Estádio Santa Cruz (Nó 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Estádio Palma Travassos (Nó 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Nippatsu Mitsuzawa Stadium (Nó 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Panasonic Stadium Suita (Nó 7, custo = 15795) -->" << std::endl << std::endl
			  << "                                                                                Ibaraki Kashima Stadium (Nó 6, custo = 16365)" << std::endl << std::endl << std::endl << std::endl
			  << "                                Estádio Vail Chaves (Nó 3, custo = 196)" << std::endl << std::endl
			  << "                                Estádio Couto Pereira (Nó 4, custo = 675)" << std::endl << std::endl
			  << "                                Itaipava Fonte Nova Arena (Nó 5, custo = 1840)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "   -------" << std::endl
			  << "** LEITURA **" << std::endl
			  << "   -------" << std::endl

			  << "Perceba nas impressões acima, que os Nós estão sendo impressos em identações diferentes" << std::endl
			  << "Perceba também que o Nó de origem está mais a esquerda" << std::endl
			  << "Os Nós identados mais a direita, portanto, são provenientes dos nós a esquerda" << std::endl
			  << "Mais especificmente, do primeiro Nó acima, com uma identação a esquerda deste Nó" << std::endl << std::endl


			  << "Por exemplo:" << std::endl
			  << "		*Partindo do ESTÁDIO SANTA CRUZ, você pode ir para os seguintes estádios:" << std::endl
			  << "					-- ESTÁDIO PALMA TRAVASSOS" << std::endl
			  << "					-- ESTÁDIO VAIL CHAVES" << std::endl
			  << "					-- IBARAKI KASHIMA STADIUM" << std::endl << std::endl

			  << "		*Partindo do IBARAKI KASHIMA STADIUM, você pode ir para os seguintes estádios:" << std::endl
			  << "					-- ESTÁDIO COUTO PEREIRA" << std::endl
			  << "					-- NIPPATSU MITSUZAWA STADIUM" << std::endl << std::endl

			  << "		*Partindo do ESTÁDIO COUTO PEREIRA, você pode ir para o seguinte esádio:" << std::endl
			  << "					-- ITAIPAVA FONTE NOVA ARENA" << std::endl << std::endl

			  << "		*Partindo do NIPPATSU MITSUZAWA STADIUM, você pode ir para o seguinte estádio:" << std::endl
			  << "					-- PANASONIC STADIUM SUITA" << std::endl << std::endl

			  << "		*Os estádios abaixo, não tem caminhos posteriores" << std::endl
			  << "					-- ESTÁDIO PALMA TRAVASSOS" << std::endl
			  << "					-- ESTÁDIO VAIL CHAVES"	<< std::endl
			  << "					-- ITAIPAVA FONTE NOVA ARENA" << std::endl
			  << "					-- PANASONIC STADIUM SUITA" << std::endl << std::endl


			  << "   ------------" << std::endl
			  << "** OBSERVAÇÕES: **" << std::endl
			  << "   ------------ **" << std::endl << std::endl

			  << "		1.) Perceba que os Estádios que possuem caminhos posteriores, possuem uma seta (-->) a frente" << std::endl
			  << "		2.) Cada vez que o Nó de Origem for mudado, os caminhos provavelmente também serão alterados" << std::endl << std::endl
			  << "		3.) O sistema dá a opção de \"IMPRESSÃO PASSO A PASSO\"" << std::endl
			  << "			Nesse tipo de impressão, o grafo é impresso na tela pausadamente (Nó por Nó) conforme o usuário digita [ENTER]" << std::endl
			  << "		4.) Qualquer caractere não especificado ou Inválido, será completamente ignorado pelo programa" << std::endl
			  << "		5.) Caso ainda haja alguma dúvida com relação ao funcionamento ou a leitura da Árvore Geradora Mínima" << std::endl
			  << "			Acesse o tópico de ajuda do CAMINHO MÍNIMO, talvez os exemplos sejam mais esclarecedores"  << std::endl;

}


/**	--------------------------------------------------------
	MÉTODO PARA FORNECER AJUDA COM RELAÇÃO AO CAMINHO MÍNIMO
	--------------------------------------------------------

	@param: NoNe
 **/
void caminho_minimo_help() {

	Estadios estadios;

	ptitle ("CAMINHO MÍNIMO -- HELP MENU");
	std::cout << "O caminho mínimo é dada pela implementação do algorítmo de Dijkstra (caminho mais próximo)" << std::endl
			  << "Mas diferente da Árvore Geradora Mínima, o Caminho mínimo imprime apenas 1 único caminho" << std::endl
			  << "dado pelo Nó de origem e um Nó de destino" << std::endl << std::endl


			  << "	 -------------"		<< std::endl
			  << "** FUNCIONAMENTO **"	<< std::endl
			  << "	 -------------"		<< std::endl << std::endl
			  << "Primeiramente é montado um grafo de N posições." << std::endl
			  << "No caso deste sistema, é montado um grafo de " << CLUBES << " posições (Número de clubes cadastrados)." << std::endl
			  << "POSIÇÕES DO GRAFO:" << std::endl;

			  for (int i = 0; i < CLUBES; i++) {
			  	std::cout << "\t" << (i + 1) << " - ";
				estadios.showClube(i);
				std::cout << std::endl;
			  }

	std::cout << std::endl
			  << "Após isso, é definido um Nó de origem. Este nó, será o nó de partida" << std::endl
			  << "Posteriormente, é definido um Nó de destino. Este nó, por sua vez, é a parada final" << std::endl
			  << "Com isso, é então implementado o algorítmo de Dijkstra no grafo" << std::endl << std::endl

			  << "** Caso queira entender mais sobre o algorítmo de Dijkstra, basta acessar o link abaixo" << std::endl
			  << "https://www.slideshare.net/mcastrosouza/caminhos-mnimos-algoritmo-de-dijkstra" << std::endl << std::endl

			  << "-----------------------------------------------------------------------------------------" << std::endl << std::endl

			  << "Esse deverá ser o resultado mostrado, caso escolha o Código 1 como inicial e o Código 7 como final:" << std::endl << std::endl


			  << "=======================" << std::endl
			  << "      CAMINHO MÍNIMO  |" << std::endl
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
			  << "        Nó 1 (custo = 0) -->" << std::endl << std::endl
			  << "                Nó 2 (custo = 3) -->" << std::endl << std::endl
			  << "                        Nó 8 (custo = 15588) -->" << std::endl << std::endl
			  << "                                Nó 7 (custo = 15795)" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "O sistema, também dá a possibilidade de imprimir o nome do clube ou o nome do estádio, no lugar do código" << std::endl << std::endl
			  << "Desta forma: " << std::endl << std::endl


			  << "** IMPRIMINDO CAMINHO POR NOME DO CLUBE **" << std::endl << std::endl
			  << "=======================" << std::endl
			  << "      CAMINHO MÍNIMO  |" << std::endl
			  << "=======================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Botafogo SP (Nó 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Comercial RP (Nó 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Yokohama F-Marinos (Nó 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Gamba Osaka (Nó 7, custo = 15795)" << std::endl << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "** IMPRIMINDO CAMINHO POR NOME DO ESTÁDIO **" << std::endl << std::endl
			  << "=======================" << std::endl
			  << "      CAMINHO MÍNIMO  |" << std::endl
			  << "=======================" << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl << std::endl
			  << "                Estádio Santa Cruz (Nó 1, custo = 0) -->" << std::endl << std::endl
			  << "                                Estádio Palma Travassos (Nó 2, custo = 3) -->" << std::endl << std::endl
			  << "                                                Nippatsu Mitsuzawa Stadium (Nó 8, custo = 15588) -->" << std::endl << std::endl
			  << "                                                                Panasonic Stadium Suita (Nó 7, custo = 15795)" << std::endl << std::endl << std::endl
			  << "|------------------------------------------------------------------------------------------------------|" << std::endl << std::endl


			  << "   -------" << std::endl
			  << "** LEITURA **" << std::endl
			  << "   -------" << std::endl

			  << "Perceba nas impressões acima, que os Nós estão sendo impressos em identações diferentes" << std::endl
			  << "Perceba também que o Nó de origem está mais a esquerda" << std::endl
			  << "Os Nós identados mais a direita, portanto, são provenientes dos nós a esquerda" << std::endl
			  << "Mais especificmente, do primeiro Nó acima, com uma identação a esquerda deste Nó" << std::endl << std::endl


			  << "Portanto, vemos que, saindo do Nó 1 e indo para o Nó 7, o caminho mais curto seria:" << std::endl
			  << "			Nó 1 --> Nó --> 6 Nó --> Nó 8 --> Nó 7" << std::endl << std::endl


			  << "   ------------" << std::endl
			  << "** OBSERVAÇÕES: **" << std::endl
			  << "   ------------ **" << std::endl << std::endl
			  << "		1.) Perceba que os Estádios que possuem caminhos posteriores, possuem uma seta (-->) a frente" << std::endl
			  << "		2.) Cada vez que o Nó de Origem for mudado, os caminhos provavelmente também serão alterados" << std::endl << std::endl
			  << "		3.) O sistema dá a opção de \"IMPRESSÃO PASSO A PASSO\"" << std::endl
			  << "			Nesse tipo de impressão, o caminho é impresso na tela pausadamente (Nó por Nó) conforme o usuário digita [ENTER]" << std::endl
			  << "		4.) Qualquer caractere não especificado ou inválido, será completamente ignorado pelo programa" << std::endl;

}


/**	---------------------------------------------------------
	MÉTODO PARA FORNECER AJUDA COM RELAÇÃO A SAIR DO PROGRAMA
	---------------------------------------------------------

	@param: NoNe
 **/
void exit_program_help () {

	ptitle ("COMO SAIR DO PROGRAMA -- HELP MENU");

	std::cout << "Para sair do programa, basta digitar o caractere '0' no MENU PRINCIPAL" << std::endl
			  << "A seguinte pergunta aparecerá na tela:" << std::endl << std::endl

			  << "\t===================================================" << std::endl
			  << "\t      Deseja realmente sair do programa? [S - N]  |" << std::endl
			  << "\t===================================================" << std::endl << std::endl

			  << "Basta então clicar no caractere 'S', caso deseje realmente sair do programa" << std::endl
			  << "Ou no caractere 'N', caso deseje continuar no programa" << std::endl << std::endl

			  << "** ----------- **" << std::endl
			  << "** OBSERVAÇÕES **" << std::endl
			  << "** ----------- **" << std::endl << std::endl

			  << "		1.) Qualquer outro caractere, senão 'S' ou 'N', será completamente ignorado pelo programa" << std::endl
			  << "		2.) Em outras partes do programa, o caractere '0' é utilizado para cancelar uma operação e voltar ao MENU PRINCIPAL" << std::endl;

}
