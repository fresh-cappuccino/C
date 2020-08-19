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

void quicksort(int *v, int esq, int dir){
	int i, j, pivo, aux;
	i = esq;
	j = dir;
	pivo = v[(i + j) / 2];
	//Particionando o Vetor
	do {
		while (v[i] < pivo && i < dir) { i++; }
		while (v[j] > pivo && j > esq) { j--; }
		if (i <= j){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	} while (i <= j);

	if (esq < j) quicksort(v, esq, j);
	if (dir > i) quicksort(v, i, dir);
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
		quicksort(vet, 0, tam - 1);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo Quick Sort        | Tempo gasto: " << resultado / vezes << " ms.\n";
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
		quicksort(vet, 0, tam - 1);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo Quick Sort        | Tempo gasto: " << resultado / vezes << " ms.\n";
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
		quicksort(vet, 0, tam - 1);
		FinalizaCronometro(Ticks);
		resultado += calculaTempo(Ticks);
	}
	std::cout << "Metodo Quick Sort        | Tempo gasto: " << resultado / vezes << " ms.\n";
	resultado = 0;

	std::cout << "\n\n";
}
