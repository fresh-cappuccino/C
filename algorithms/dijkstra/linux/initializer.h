#ifndef _INITIALIZER_H
#define _INITIALIZER_H

#include "desc_estadios.h"
#include "grafo.h"

const int MAT_DIST_CLUBES[][CLUBES] = {
	{       0,        3,     196,     675,    1840,   17012,   17924,   15745  },
	{       3,        0,     196,     674,    1840,   17054,   17142,   15585  },
	{     197,      197,       0,     527,    1913,   20452,   20441,   21012  },
	{     673,      674,     524,       0,    2435,   19897,   17431,   16919  },
	{    1848, 	   1849,    1872,    2381,       0,   18256,   17531,   17871  },
	{   19448, 	  19481,   20535,   18014,   17683,       0,     545,     361  },
	{   17756, 	  17730,   21491,   16505,   17781,     570,       0,     154  },
	{   16860, 	  16847,   19541,   18798,   17041,     805,     207,       0  }
};


void init_club (desc_club *DESC_CLUB);	// Inicia os valores da structure responsável pelo armazenamento das informações dos clubes


void init_grafo (Grafo *g);	// Inicializa os valores default no grafo


#endif
