/*
	Calculadora Polonesa.

	Funções:

		+ -> Adição;		Exemplo: 10 2 + = 12

		- -> Subtração;		Exemplo: 10 2 - = 8

		* -> Multiplicação;	Exemplo: 10 2 * = 20

		/ -> Divisão;		Exemplo: 10 2 / = 5

		! -> Fatoração;		Exemplo: 5 ! = 120

		^ -> Potenciação;	Exemplo: 5 2 ^ = 25

		| -> Raíz n-ésima;	Exemplo: 2 144 | = 12  (OU)  3 27 | = 3

	Utilização:

		Ao final da inserção de todo número é necessário pressionar [ENTER], diferentemente da inserção de um caractere
		operatório. Dessa forma:

			2.59[ENTER] 2.41[ENTER] + =

			= 5.000000

		É necessário ser possível a realização da operação pela calculadora, caso contrtário será retornado
		"OPERAÇÃO INVÁLIDA".

		Exemplo de uma operação válida:

			2 6 15,4 8,6 + * | =

			= 12.000000

		Exemplo de uma operação inválida:

			2 6 15,4 8,6 + * | ^ OPERAÇÃO INVÁLIDA!

	-------------------------------------------------------------------------------------------------------------------
	|OBS: É possível deletar números de uma operação utilizando a tecla [ESC]. Porém, nesta versão, é possível deletar|
	|apenas números que você esteja digitando. Números que já foram inseridos não podem ser apagados. Caracteres	  |
	|operacionais também não podem ser apagados.																	  |
	-------------------------------------------------------------------------------------------------------------------

	Teclas válidas em uma operação:

		-Numerais: 0, 1, 2, 3 ... 420 e etc.

		-Caracteres operatórios: +, -, *, /, !, ^, |.

		-[ENTER]: Utilizado para declarar o fim da inserção de um número.

		-[ESC]: Utilizado para excluir o número que esteja digitando ou para sair do programa, caso não esteja realizando
				uma operação. Caso esteja em uma operação, no caso de não estar inserindo um número, pressionando o [ESC]
				será cancelada a operação.

		-Ponto ou Vírgula: Os caracteres ponto '.' e vírgula ',' são utilizados para inserir um número decimal, qualquer um
						   dos dois caracteres é considerado válido.

		-Sinal de igual: O sinal '=' representa o fim de uma operação. Ao pressionar esse caractere, o programa retornará
						 uma reposta a sua equação (se caso for uma função válida) ou a mensagem de erro "OPERAÇÃO INVÁLIDA"
						 (caso for uma função inválida).

		-Arroba: O caractere '@', é responsável por guardar a resposta da última operação realizada, portanto pode ser
				 utilizado como um número em uma operação. Por exemplo, caso a resposta retornada na última operação
				 seja 42,5 e você queira utilizar esse valor na próxima operação, basta digitar o caractere '@'.
				 Dessa forma:

					@ 2 * =

					= 85,000000

				Na tela do usuário aparecerá da seguinte forma:

					42,500000 2 * =

					= 85,000000

		-Extras: Os caracteres alfabéticos (de 'a' a 'z' e de 'A' a 'Z'), de espaço (' '), backspace ('\b') e o [ENTER]
				 ('\r', caso não esteja inserindo um número) serão completamente ignorados pelo programa, não apresentarão
				 erros e ao mesmo tempo não terão impacto nenhum sobre a operação.

	Teclas inválidas em uma operação:

		-Qualquer outro caractere não citado acima representará erro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

//Struct responsável pela criação do tipo da pilha
typedef struct sStack{
	struct sStack *st_ssPrev;
	double st_dNum;
	struct sStack *st_ssNext;
}ss;

//Função responsável pelo looping do programa, no qual é possível escolher entre fazer uma operação ou sair do programa
char funLooping (){
	char xcLoop = 'k';	//Variável responsável pelo loop

	printf ("[ENTER] Fazer uma operação\n\n"
			" [ESC]  Sair");

	while (xcLoop != '\r' && xcLoop != 27)	//Limitação da escolha do usuário para [ENTER] ou [ESC]
		xcLoop = getch ();

	system ("cls");

	return xcLoop;	//Retorno da resposta do usuário
}

//Função de inserção de um número em uma operação
char funInsertNum (double *xdNum, char xcChar){
	int xiAux = 1;	//Variável responsável por contar os caracteres inseridos;

	*xdNum = xcChar - 48;	//Converte o caractere inserido para número e armazena na variável xdNum

	while (xcChar != '\r'){	//Looping para inserção dos caracteres numerais
		xcChar = getch ();

		//Verifica se é um número ou um caractere de separação decimal (. ou ,) para printar na tela e armazenar na variável
		if (xcChar >= '0' && xcChar <= '9'){
			printf ("%c", xcChar);

			xiAux++;
			*xdNum *= 10;
			*xdNum += xcChar - 48;
		}

		else if (xcChar == 27){	//Verifica se é a tecla [ESC], assim apagando o número inserido da tela
			while (xiAux){
				xiAux--;

				putch ('\b');
				putch (' ');
				putch ('\b');
			}
			return 127;
		}

		//Caso xcChar seja ponto ou vírgula, entra-se no looping para inserir caracteres decimais
		else if (xcChar == ',' || xcChar == '.'){
			printf ("%c", xcChar);

			xiAux++;

			for (unsigned long long int xiI = 10; xcChar != '\r'; ){	//Enquanto o usuário não pressionar [ENTER] o looping continuará
				xcChar = getch ();

				//Verifica se o caractere é um número, printando-o na tela e armazenando-o nna variável
				if (xcChar >= '0' && xcChar <= '9'){
					printf ("%c", xcChar);

					double xdAux = xcChar - 48;

					xiAux++;
					*xdNum += xdAux / xiI;

					xiI *= 10;
				}

				//Verifica se o caractere é [ESC], apagando-o da tela e excluindo o valor da variável
				else if (xcChar == 27){
					while (xiAux){
						xiAux--;

						putch ('\b');
						putch (' ');
						putch ('\b');
					}
					return 127;
				}
			}
		}
	}
	return '\r';
}

//Função para inserir um elemento na pilha
void funInsertElement (ss *xst_ssTop, int xiStackSize, double xdNum){
	if (xiStackSize){	//Verifica se a pilha já possui elemento(s), criando então uma nova caixa
		ss *xst_ssNew = (ss*)malloc(sizeof(ss));

		xst_ssTop->st_ssNext = xst_ssNew;
		xst_ssNew->st_ssPrev = xst_ssTop;
		xst_ssNew->st_ssNext = NULL;

		xst_ssTop = xst_ssTop->st_ssNext;
	}

	//Caso contrário, utiliza-se a caixa já existente, contendo o topo da pilha
	xst_ssTop->st_dNum = xdNum;
}

//Função para realizar um cálculo a partir do caractere operacional inserido pelo usuário
char funCalculate (ss *xst_ssTop, char xcChar){
	int xiAux = xst_ssTop->st_dNum;	//Vari´vel para realizar a operação de fatoração, garantindo que o número será inteiro

	switch (xcChar){	//Cases para verificação de qual operação será realizada
		case '+':
			xst_ssTop->st_ssPrev->st_dNum += xst_ssTop->st_dNum;
		break;
		case '-':
			xst_ssTop->st_ssPrev->st_dNum -= xst_ssTop->st_dNum;
		break;
		case '*':
			xst_ssTop->st_ssPrev->st_dNum *= xst_ssTop->st_dNum;
		break;
		case '/':
			if (!xst_ssTop->st_dNum)
				return '=';

			else
				xst_ssTop->st_ssPrev->st_dNum /= xst_ssTop->st_dNum;
		break;
		case '!':
			for (int xiI = xiAux - 1; xiI > 1; xiI--)
				xiAux *= xiI;

			xst_ssTop->st_dNum = xiAux;
		break;
		case '^':
			xst_ssTop->st_ssPrev->st_dNum = pow (xst_ssTop->st_ssPrev->st_dNum, (int)xst_ssTop->st_dNum);
		break;
		case '|':
			xst_ssTop->st_ssPrev->st_dNum = pow (xst_ssTop->st_dNum, 1.0/(int)xst_ssTop->st_ssPrev->st_dNum);
		break;
	}
}

//Função principal
int main (){
	setlocale (LC_ALL,""); //Troca de linguagem padrão para geral

	ss *st_ssTop = (ss*)malloc(sizeof(ss));	//Criação do topo da pilha
	char cChar;	//Variável para receber os todos caracteres inseridos na operação
	int iStackSize = 0;	//Variável para contar o tamanho da pilha
	double dNum, dAnswer = NULL;	//dNum representa o número para inserir na pilha e dAnswer a resposta da operação

	if (!st_ssTop){	//Verificação de criação do topo da pilha
		printf ("MEMÓRIA INSUFUCIENTE!");
		getch ();
		exit (0);
	}

	st_ssTop->st_ssPrev = NULL;	//Incialização do topo

	while (funLooping () != 27){	//Looping de escolha para sair do programa ou realizar uma operação
		printf ("Digite uma operação: ");

		cChar = 'k';	//Inicialização de cChar para entrar no looping de operação

		while (cChar != '=' && cChar != 27){	//Looping de operação
			cChar = getch ();

			//Verificação inicial do caractere cChar para ser printado na tela
			if (cChar != '\r' && cChar != 27 && cChar != '\b' && cChar != ' ')
				printf ("%c", cChar);

			//Início das verificações do caractere cChar para decisão de qual parte operacional entrar
			if (cChar >= '0' && cChar <= '9'){
				cChar = funInsertNum (&dNum, cChar);

				if (cChar == '\r'){
					putch (' ');

					funInsertElement (st_ssTop, iStackSize, dNum);

					iStackSize++;

					if (iStackSize > 1)
						st_ssTop = st_ssTop->st_ssNext;
				}
			}

			else if (cChar == '+' || cChar == '-' || cChar == '*' || cChar == '/' || cChar == '!' || cChar == '^' || cChar == '|'){
				if (iStackSize > 1 && cChar != '!'){
					cChar = funCalculate (st_ssTop, cChar);

					if (cChar != '='){
						st_ssTop = st_ssTop->st_ssPrev;

						free (st_ssTop->st_ssNext);

						st_ssTop->st_ssNext = NULL;

						--iStackSize;
					}
				}

				else if (iStackSize && cChar == '!')
					funCalculate (st_ssTop, cChar);

				else{
					cChar = '=';

					iStackSize = 2;
				}
				putch (' ');
			}

			else if (cChar == '@'){
				putch ('\b');
				putch (' ');
				putch ('\b');

				printf ("%llf ", dAnswer);

				funInsertElement (st_ssTop, iStackSize, dAnswer);

				iStackSize++;

				if (iStackSize > 1)
					st_ssTop = st_ssTop->st_ssNext;
			}

			else if ((cChar >= 'A' && cChar <= 'Z') || (cChar >= 'a' && cChar <= 'z')){
				putch ('\b');
				putch (' ');
				putch ('\b');
			}

			else if (cChar != '=' && cChar != 27 && cChar != '\r' && cChar != '\b' && cChar != ' '){
				cChar = '=';

				iStackSize = 2;
			}
			//Fim das verificações do caractere cChar
		}

		//Início de verificação de operação (Válida ou inválida)

		//Caso de operação inválida
		if (iStackSize > 1){
			if (cChar != 27){
				printf ("OPERAÇÃO INVÁLIDA!");

				getch ();
			}

			while (st_ssTop->st_ssPrev != NULL){
				st_ssTop = st_ssTop->st_ssPrev;

				free (st_ssTop->st_ssNext);

				st_ssTop->st_ssNext = NULL;
			}

			dAnswer = NULL;
		}

		//Caso de operação válida
		else if (iStackSize){
			dAnswer = st_ssTop->st_dNum;

			printf ("\n\n= %llf", dAnswer);

			getch ();
		}
		//Fim de verificação de operação

		//Reinicialização da pilha
		iStackSize = 0;

		st_ssTop->st_dNum = NULL;

		system ("cls");
	}

	return 0;
}
