#include <iostream>

#include "desc_estadios.h"
#include "g_struct.h"
#include "initializer.h"


/**	----------------------------------------------------------
	MÉTODO PARA INICIALIZAÇÃO DA STRUCT COM OS VALORES DEFAULT
	----------------------------------------------------------
	
	@param: desc_club *DESC_CLUB --> estrutura para inicialização
 **/
void init_club (desc_club *DESC_CLUB) {
	
	int pos = 0;
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Botafogo SP";
	DESC_CLUB[pos].estadio = "Estádio Santa Cruz";
	DESC_CLUB[pos].pais = "Brasil";
	DESC_CLUB[pos].cidade_uf = "Ribeirão Preto (SP)";
	DESC_CLUB[pos].bairro = "Santa Cruz";
	DESC_CLUB[pos].endereco = "Av. Costábile Romano, S/N";
	DESC_CLUB[pos++].cep = "14096-079";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Comercial RP";
	DESC_CLUB[pos].estadio = "Estádio Palma Travassos";
	DESC_CLUB[pos].pais = "Brasil";
	DESC_CLUB[pos].cidade_uf = "Ribeirão Preto (SP)";
	DESC_CLUB[pos].bairro = "Jardim Paulista";
	DESC_CLUB[pos].endereco = "Av. Dr. Plínio de Castro Prado, 1000";
	DESC_CLUB[pos++].cep = "14091-170";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Mogi-Mirim FC";
	DESC_CLUB[pos].estadio = "Estádio Vail Chaves";
	DESC_CLUB[pos].pais = "Brasil";
	DESC_CLUB[pos].cidade_uf = "Mogi-Mirim (SP)";
	DESC_CLUB[pos].bairro = "Centro - Jardim Aurea";
	DESC_CLUB[pos].endereco = "Rua Professor Ferreira Lima 150";
	DESC_CLUB[pos++].cep = "03800-199";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Coritiba FC";
	DESC_CLUB[pos].estadio = "Estádio Couto Pereira";
	DESC_CLUB[pos].pais = "Brasil";
	DESC_CLUB[pos].cidade_uf = "Curitiba (PR)";
	DESC_CLUB[pos].bairro = "Alto da Glória";
	DESC_CLUB[pos].endereco = "Rua Ubaldino do Amaral, 37";
	DESC_CLUB[pos++].cep = "80060-195";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Bahia FC";
	DESC_CLUB[pos].estadio = "Itaipava Fonte Nova Arena";
	DESC_CLUB[pos].pais = "Brasil";
	DESC_CLUB[pos].cidade_uf = "Salvador (BA)";
	DESC_CLUB[pos].bairro = "Nazaré";
	DESC_CLUB[pos].endereco = "Ladeira da Fonte das Pedras, S/N";
	DESC_CLUB[pos++].cep = "40050-565";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Kashima Antlers";
	DESC_CLUB[pos].estadio = "Ibaraki Kashima Stadium";
	DESC_CLUB[pos].pais = "Japão";
	DESC_CLUB[pos].cidade_uf = "Ibaraki - Kanto (Honshu)";
	DESC_CLUB[pos].bairro = "Jikoji";
	DESC_CLUB[pos].endereco = "26-2 Goyama";
	DESC_CLUB[pos++].cep = "14314-0007";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Gamba Osaka";
	DESC_CLUB[pos].estadio = "Panasonic Stadium Suita";
	DESC_CLUB[pos].pais = "Japão";
	DESC_CLUB[pos].cidade_uf = "Osaka - Kansai (Honshu)";
	DESC_CLUB[pos].bairro = "Suita";
	DESC_CLUB[pos].endereco = "3-3 Senribanpakukoen";
	DESC_CLUB[pos++].cep = "565-0826";
	
	DESC_CLUB[pos].cod = pos + 1;
	DESC_CLUB[pos].clube = "Yokohama F-Marinos";
	DESC_CLUB[pos].estadio = "Nippatsu Mitsuzawa Stadium";
	DESC_CLUB[pos].pais = "Japão";
	DESC_CLUB[pos].cidade_uf = "Yokohama - Kanegawa (Tokyo)";
	DESC_CLUB[pos].bairro = "Kanegawa Ward";
	DESC_CLUB[pos].endereco = "3-1 Mitsuzawa Nishimachi";
	DESC_CLUB[pos++].cep = "221-0855";
	
}


/**	----------------------------------------------------
	MÉTODO PARA INICIALIZAR GRAFO COM OS VALORES DEFAULT
	----------------------------------------------------
	
	@param: Grafo *g --> grafo para inicialização
 **/
void init_grafo (Grafo *g) {
	
	/**
	 0 -> Botafogo SP
	 1 -> Comercial RP
	 2 -> Mogi-Mirim FC
	 3 -> Coritiba FC
	 4 -> Bahia FC
	 5 -> Kashima Antlers
	 6 -> Gamba Osaka
	 7 -> Yokohama F-Marinos
	 **/
	
	/**
		ARESTAS PROVENIENTES DE BOTAFOGO SP
	 **/
	
	for (int i = 0; i < CLUBES; i++)
		for (int j = 0; j < CLUBES; j++)
			if (i != j)
				g->addAresta(i, j, MAT_DIST_CLUBES[i][j]);
	
	/*
	g->addAresta(0, 1, 3);	// Botafogo SP para Comercial RP			->
	g->addAresta(0, 2, 4);	// Botafogo SP para Mogi-Mirim FC			->
	g->addAresta(0, 3, 13);	// Botafogo SP para Coritiba FC				->
	g->addAresta(0, 4, 9);	// Botafogo SP para Bahia FC				->
	g->addAresta(0, 5, 4);	// Botafogo SP para Kashima Antlers			->
	g->addAresta(0, 6, 13);	// Botafogo SP para Gamba Osaka				->
	g->addAresta(0, 7, 9);	// Botafogo SP para Yokohama F-Marinos		->
	
	/**
		AREASTAS PROVENIENTES DE COMERCIAL RP
	 **//*
	g->addAresta(1, 0, 3);	// Comercial RP para Botafogo SP			->
	g->addAresta(1, 2, 8);	// Comercial RP para Mogi-Mirim FC			->
	g->addAresta(1, 3, 6);	// Comercial RP para Coritiba FC			->
	g->addAresta(1, 4, 15);	// Mogi-Mirim FC para Bahia FC				->
	g->addAresta(1, 5, 8);	// Comercial RP para Kashima Antlers		->
	g->addAresta(1, 6, 6);	// Comercial RP para Gamba Osaka			->
	g->addAresta(1, 7, 15);	// Comercial RP para Yokohama F-Marinos		->
	
	/**
		AREASTAS PROVENIENTES DE MOGI-MIRIM FC
	 **//*
	g->addAresta(2, 0, 4);	// Mogi-Mirim FC para Botafogo SP			->
	g->addAresta(2, 1, 8);	// Mogi-Mirim FC para Comercial RP			->
	g->addAresta(2, 3, 7);	// Mogi-Mirim FC para Coritiba FC			->
	g->addAresta(2, 4, 3);	// Mogi-Mirim FC para Bahia FC				->
	g->addAresta(2, 5, 8);	// Mogi-Mirim FC para Kashima Antlers		->
	g->addAresta(2, 6, 7);	// Mogi-Mirim FC para Gamba Osaka			->
	g->addAresta(2, 7, 3);	// Mogi-Mirim FC para Yokohama F-Marinos	->
	
	/**
		AREASTAS PROVENIENTES DE CORITIBA FC
	 **//*
	g->addAresta(3, 0, 13);	// Coritiba FC para Botafogo SP				->
	g->addAresta(3, 1, 2);	// Coritiba FC para Comercial RP			->
	g->addAresta(3, 2, 7);	// Coritiba FC para Mogi-Mirim FC			->
	g->addAresta(3, 4, 1);	// Coritiba FC para Bahia FC				->
	g->addAresta(3, 5, 2);	// Coritiba FC para Kashima Antlers			->
	g->addAresta(3, 6, 7);	// Coritiba FC para Gamba Osaka				->
	g->addAresta(3, 7, 1);	// Coritiba FC para Yokohama F-Marinos		->
	
	/**
		AREASTAS PROVENIENTES DE BAHIA FC
	 **//*
	g->addAresta(4, 0, 9);	// Bahia FC para Botafogo SP				->
	g->addAresta(4, 1, 5);	// Bahia FC para Comercial RP				->
	g->addAresta(4, 2, 3);	// Bahia FC para Mogi-Mirim FC				->
	g->addAresta(4, 3, 1);	// Bahia FC para Coritiba FC				->
	g->addAresta(4, 5, 5);	// Bahia FC para Kashima Antlers			->
	g->addAresta(4, 6, 3);	// Bahia FC para Gamba Osaka				->
	g->addAresta(4, 7, 1);	// Bahia FC para Yokohama F-Marinos			->
	
	/**
		AREASTAS PROVENIENTES DE KASHIMA ANTLERS
	 **//*
	g->addAresta(5, 0, 9);	// Kashima Antlers para Botafogo SP			->
	g->addAresta(5, 1, 5);	// Kashima Antlers para Comercial RP		->
	g->addAresta(5, 2, 3);	// Kashima Antlers para Mogi-Mirim FC		->
	g->addAresta(5, 3, 1);	// Kashima Antlers para Coritiba FC			->
	g->addAresta(5, 4, 5);	// Kashima Antlers para Bahia FC			->
	g->addAresta(5, 6, 3);	// Kashima Antlers para Gamba Osaka			->
	g->addAresta(5, 7, 1);	// Kashima Antlers para Yokohama F-Marinos	->
	
	/**
		AREASTAS PROVENIENTES DE GAMBA OSAKA
	 **//*
	g->addAresta(6, 0, 9);	// Gamba Osaka para Botafogo SP				->
	g->addAresta(6, 1, 5);	// Gamba Osaka para Comercial RP			->
	g->addAresta(6, 2, 3);	// Gamba Osaka para Mogi-Mirim FC			->
	g->addAresta(6, 3, 1);	// Gamba Osaka para Coritiba FC				->
	g->addAresta(6, 4, 5);	// Gamba Osaka para Bahia FC				->
	g->addAresta(6, 5, 3);	// Gamba Osaka para Kashima Antlers			->
	g->addAresta(6, 7, 1);	// Gamba Osaka para Yokohama F-Marinos		->
	
	/**
		AREASTAS PROVENIENTES DE YOKOHAMA F-MARINOS
	 **//*
	g->addAresta(7, 0, 9);	// Yokohama F-Marinos para Botafogo SP		->
	g->addAresta(7, 1, 5);	// Yokohama F-Marinos para Comercial RP		->
	g->addAresta(7, 2, 3);	// Yokohama F-Marinos para Mogi-Mirim FC	->
	g->addAresta(7, 3, 1);	// Yokohama F-Marinos para Coritiba FC		->
	g->addAresta(7, 4, 5);	// Yokohama F-Marinos para Bahia FC			->
	g->addAresta(7, 5, 3);	// Yokohama F-Marinos para Kashima Antlers	->
	g->addAresta(7, 6, 1);	// Yokohama F-Marinos para Gamba Osaka		->
	*/
}

