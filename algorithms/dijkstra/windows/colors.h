#ifndef _COLORS_H
#define _COLORS_H

/**	-------------------
	CONSTANTES DE CORES
	-------------------
 **/
enum DOS_COLORS {
	BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
	LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
	LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE
};


void textcolor (DOS_COLORS iColor);	// Troca cor de caractere


void backcolor (DOS_COLORS iColor);	// Troca cor de fundo


#endif
