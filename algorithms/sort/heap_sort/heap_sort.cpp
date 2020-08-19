#include <iostream>
#include <cstdlib>

void PreencheVetorRandom(int vet[], int tam){
	for (int i = 0; i < tam; i++)
		vet[i] = rand();
}

void PreencheVetorCrescente(int vet[], int tam){
	for (int i = 0; i < tam; i++)
		vet[i] = i;
}

void PreencheVetorDecrescente(int vet[], int tam){
	for (int i = 0; i < tam; i++)
		vet[i] = tam - i;
}

void MostraVetor(int vet[], int tam){
	for (int i = 0; i < tam; i++)
	{
		std::cout << "\n " << vet[i];
	}
}

double calculaTempo(clock_t Ticks[]){
	return  (long)(Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC;
}

void IniciaCronometro(clock_t Ticks[]){
	Ticks[0] = clock();
}

void FinalizaCronometro(clock_t Ticks[]){
	Ticks[1] = clock();
}

void heapsort(int a[], int n)
{
	int i = n / 2, pai, filho, t;
	while (true)
	{
		if (i > 0)
		{
			i--;
			t = a[i];
		}
		else
		{
			n--;
			if (n == 0)
				return;
			t = a[n];
			a[n] = a[0];
		}

		pai = i;

		//Primeiro será feita a comparação com o filho da esquerda.
		filho = i * 2;

		while (filho < n)
		{
			//Se o filho da esquerda for menor do que o filho da direita,então será feita a troca do filho que será comparado.
			if ((filho + 1 < n) && (a[filho + 1] > a[filho]))
				filho++;
			if (a[filho] > t)
			{
				a[pai] = a[filho];
				pai = filho;
				filho = pai * 2 + 1;
			}
			else
				break;
		}
		a[pai] = t;
	}
}

int main(){
	int tam = 15000;
	int vet[15000];
	int	vet2[15000];
	float resultado = 0;
	float vezes = 10.0;
	clock_t Ticks[2];

	/* -------------------------------------
		 Vetor Random
		 ------------------------------------- */
	std::cout << "-------------------------------------------------------\n";
	std::cout << "   Ordenacao de vetores preenchidos randomicamente \n";
	std::cout << "-------------------------------------------------------\n";

	for (int i = 0; i < vezes; i++){
		PreencheVetorRandom(vet, tam);
		IniciaCronometro(Ticks);
		heapsort(vet, tam);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo HeapSort          | Tempo gasto: " << resultado / vezes << " ms.\n";
	resultado = 0;

	std::cout << "\n\n";

	/* -------------------------------------
		 Vetor Decrescente
		 ------------------------------------- */
	std::cout << "-------------------------------------------------------\n";
	std::cout << "   Ordenacao de vetores preenchidos em ordem crescente \n";
	std::cout << "-------------------------------------------------------\n";

	for (int i = 0; i < vezes; i++){
		PreencheVetorCrescente(vet, tam);
		IniciaCronometro(Ticks);
		heapsort(vet, tam);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo HeapSort          | Tempo gasto: " << resultado / vezes << " ms.\n";
	resultado = 0;

	std::cout << "\n\n";

	/* -------------------------------------
		 Vetor Crescente
		 ------------------------------------- */
	std::cout << "-------------------------------------------------------\n";
	std::cout << " Ordenacao de vetores preenchidos em ordem descrescente \n";
	std::cout << "-------------------------------------------------------\n";

	for (int i = 0; i < vezes; i++){
		PreencheVetorDecrescente(vet, tam);
		IniciaCronometro(Ticks);
		heapsort(vet, tam);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo HeapSort          | Tempo gasto: " << resultado / vezes << " ms.\n";
	resultado = 0;

	std::cout << "\n\n";

}
