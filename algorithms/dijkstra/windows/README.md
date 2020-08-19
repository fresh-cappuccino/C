# VISITANDO ESTÁDIOS DE FUTEBOL COM DIJKSTRA
	Sistema com visão na implementação do Algoritmo Dijkstra voltado para Estádios de Futebol

----------------
## **ESTRUTURA DO PROJETO:**
----------------
### BIBLIOTECAS:

   * ARV_AG.H			--> Gerencia o grafo de caminho (Tree Controller) --- arq - arv_ag.c
	
   * COLORS.H			--> Gerencia a troca de cores no terminal --- arq - colors.c
	
   * DESC_ESTADIOS.H		--> Estrutura de dados para armazenar as informarções dos clubes --- arq - desc_estadios.c
	
   * ESTADIOS.H			--> Classe estadios --- arq - estadios.c
	
   * G_STRUCT.H			--> Estrutura de dados para montagem da arvore --- arq - g_struct.c
	
   * GRAFO.H			--> Classe grafo --- arq - grafo.c
	
   * HANDLER.H			--> Gerencia os tópicos do menu --- arq - handler.c
	
   * HELP.H			--> Gerencia os tópicos do menu de ajuda --- arq - help.c
	
   * HELP_MENU.H		--> Menu de ajuda ao usuário --- arq - help_menu.c
	
   * INITIALIZER.H		--> Inicializa as estruturas para valores DEFAULT --- arq - initializer.c
	
   * MENU.H			--> Menu principal --- arq - menu.c
	
   * PROG_UTILS.H		--> Métodos genéricos do programa --- arq - prog-utils.c
	
   * TEXT_FORMAT.H		--> Formatação de impressão --- arq - text_format.c
----------------

## FUNCIONAMENTO

----------------
   O sistema tem como objetivo implementar o algorítmo do caminho mais próximo (*DIJKSTRA*), voltado para localizações de estádios de futebol. Foram escolhidos 8 estádios de diferentes localidades, para a realização do programa. Estes são:

| CÓDIGO | CLUBE		| ESTÁDIO			|
|--------|----------------------|-------------------------------|
|    1   | Botafogo SP		| Etádio Santa Cruz		|
|    2   | Comercial RP		| Estádio Palma Travassos	|
|    3   | Mogi-Mirim FC	| Estádio Vail Chaves		|
|    4   | Coritiba FC		| Estádio Couto Pereira		|
|    5   | Bahia FC		| Itaipava Fonte Nova Arena	|
|    6   | Kashima Antlers	| Ibaraki Kashima Stadium	|
|    7   | Gamba Osaka		| Panasonic Stadium Suita	|
|    8   | Yokohama F-Marinos	| Nippatsu Mitsuzawa Stadium	|

   A partir do endereço dos estádios, é então feita uma Matriz de distância N X N, para relacioná-las no Grafo. É então feito o algorítmo de Djkstra baseado na Matriz de Distância fornecida, devolvendo o caminho mínimo para cada Nó do Grafo, ou, no caso, cada um dos 8 Estádio de Futebol.
	    
   Para que seja realizado o algoritmo, é importante que um Nó inicial seja definido. Ele servirá como ponto de partida para todos os outros Nós e o único com valor de custo 0, já que, partindo dele, não precisamos nos movimentar caso o mesmo seja o destino final.
	
   O sistema também dá a oportunidade de realizar um Caminho Mínimo específico, ou seja, um caminho onde você tenha o ponto inicial e o ponto final definido, resultando assim, não em uma árvore de possibilidades, mas sim em um Caminho Linear.
	
   Tanto a Árvore Geradora Mínima, quanto o Caminho Mínimo, possuem três formas de serem impressos na tela:
    		* Imprimindo o valor do Nó como o Código do Clube
		* Imprimindo o valor do Nó como o Nome do Clube
		* Imprimindo o valor do Nó como o Nome do Estádio
   Grafos impressos pelo Código do Clube, virão junto a uma legenda indicando o nome dos Clubes mostrados, ao lado de seus respectivos Códigos.

   E ambos (Árvore e Caminho), também possuem a possibilidade de serem impressos pausadamente (Nó por Nó), avançando para a próxima impressão apenas quando o usuário digitar [ENTER]. Para saber mais sobre o algorítmo de *DIJKSTRA*, basta acessar o link [Algoritmo DIJKSTRA - Slide Share](https://www.slideshare.net/mcastrosouza/caminhos-mnimos-algoritmo-de-dijkstra/)

   É possível imprimir todas as informações dos estádios na tela (Código, Nome do Clube, Nome do Estádio, País, Cidade (Estado), Bairro, Endereço e CEP), de um, ou todos os clubes, assim como informações específicas, através de um dos tópicos do MENU PRINCIPAL. No momento de inserção do código do Clube para criação do Grafo, é possível visualizar o código do clube e seu respectivo nome ao digitar o caractere 'A'.
	
   Há a possibilidade, também, da impressão da Matriz de Distância através do MENU PRINCIPAL.
    
   Por fim, há um MENU DE AJUDA, com a intenção de explanar detalhadamente sobre o funcionamento do sistema e seus tópicos, assim como exemplificar cada um deles.

************
## CHECKLIST DAS ATIVIDADES PRINCIPAIS
************
----------------

- [X] Desenvolvimento da lógica de projeto (CHECK)
- [X] Desenvolvimento do Algoritmo Dijkstra (CHECK)
- [X] Coleta dos nomes de clubes e estádios (CHECK)
- [ ] Coleta dos dados de distância real (UNCHECK)
- [X] Criação do MENU PRINCIPAL (CHECK)
- [X] Criação e impressão da Matriz de Distância (CHECK)
- [X] Criação e impressão da Árvore Geradora Mínima (CHECK)
- [X] Criação da opção de imprimir Árvore pausadamente (CHECK)
- [X] Criação e impressão do Caminho Mínimo(CHECK)
- [X] Criação da opção de imprimir o Caminho pausadamente (CHECK)
- [X] Criação de diferentes tipos de impressão em tela (CHECK)
- [X] Tratamento básico de ERROS (CHECK)
- [X] Criação do MENU DE AJUDA (CHECK)
