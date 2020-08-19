#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>

#include "colors.h"

/*-----------------------------------------|
|------------------------------------------|
| BACKGROUND	  |	TEXTCOLOR              |
|------------------------------------------|
| 0 - Preto		  |	8 - Cinza Escuro       |
| 1 - Azul		  |	9 - Azul Claro         |
| 2 - Verde		  |	10 - Verde Claro       |
| 3 - Ciano		  |	11 - Ciano Claro       |
| 4 - Vermelho	  |	12 - Vermelho Claro    |
| 5 - Magenta	  |	13 - Magenta Claro     |
| 6 - Marrom	  |	14 - Amarelo           |
| 7 - Cinza Claro |	15 - Branco            |
|------------------------------------------|
|-----------------------------------------*/


/**	--------------------------------------
	MÉTODO PARA MUDAR A COR DOS CARACTERES
	--------------------------------------
	
	@param: DOS_COLORS iColor --> Cor desejada
 **/
void textcolor (DOS_COLORS iColor) {
    
    // Variáveis para controle de gerenciamento e buffer
	HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    
    // Atribuindo o buffer e atualizando a cor no console
	bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);

}


/**	-------------------------------------------
	MÉTODO PARA MUDAR A COR DE FUNDO DO CONSOLE
	-------------------------------------------
	
	@param: DOS_COLORS iColor --> Cor desejada
 **/
void backcolor (DOS_COLORS iColor) {
	
	// Variáveis para controle de gerenciamento e buffer
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    
    // Atribuindo o buffer e atualizando a cor no console
	bufferInfo.wAttributes &= 0x000F;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= (iColor << 4));
    
}

