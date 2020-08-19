#include <iostream>

void mostrarArestas (int nvertices, int vert_grau_impar, int *arestas)
{
	std::cout << "NÓS DE GRAU PAR: " << (nvertices - vert_grau_impar) << std::endl;

	for (int i = 0; i < nvertices; i++)
		if (!(arestas[i]%2))
			std::cout << "\tNÓ " << (i+1) << ": " << arestas[i] << " arestas" << std::endl;

	std::cout << std::endl;

	std::cout << "NÓS DE GRAU IMPAR: " << vert_grau_impar << std::endl;

	for (int i = 0; i < nvertices; i++)
		if (arestas[i]%2)
			std::cout << "\tNÓ " << (i+1) << ": " << arestas[i] << " arestas" << std::endl;

	std::cout << std::endl;
}


int main ()
{
	int nvertices = 0, vert_grau_impar = 0;

	std::cout << "Bem vindo ao verificador de Grafo!" << std::endl << std::endl
		  << "Indique quantas vértices terá o grafo: ";

	std::cin >> nvertices;

	int arestas[nvertices];
	int mat[nvertices][nvertices];

	for (int i = 0; i < nvertices; i++)
		arestas[i] = -1;

	for (int i = 0; i < nvertices; i++)
		mat[i][i] = 0;

	for (int i = 0; i < nvertices; i++)
	{
		for (int j = i+1; j < nvertices; j++)
		{
			int aux;

			std::cout << std::endl << "Indique qual a distância entre o Nó " << (i+1) << " e o Nó " << (j+1) << " (Informe um valor negativo, caso os Nós não possuam ligação): ";

			std::cin >> aux;

			if (aux >= 0)
			{
				mat[i][j] = aux;
				mat[j][i] = aux;
			}
			else
			{
				mat[i][j] = -1;
				mat[j][i] = -1;
			}
		}
	}
	std::cout << "Matriz criada:" << std::endl << std::endl;

	for (int i = 0; i < nvertices; i++)
	{
		for (int j = 0; j < nvertices; j++)
			std::cout << "\t" << mat[i][j];

		std::cout << std::endl << std::endl;
	}
	std::cout << "Verificando o tipo de Grafo inserido..." << std::endl << std::endl;

	for (int i = 0; i < nvertices; i++)
	{
		int qnt_arestas = 0;

		for (int j = 0; j < nvertices; j++)
			if (mat[i][j] > 0)
				qnt_arestas++;

		arestas[i] = qnt_arestas;

		if (qnt_arestas%2) vert_grau_impar++;
	}
	std::cout << std::endl << std::endl;

	if (!vert_grau_impar)
		std::cout << "O Grafo inserido É EULERIANO!! Não existem nós de grau impar!";
	else if (vert_grau_impar == 1)
	{
		std::cout << "O Grafo apresentado NÃO É EULERIANO!! Existe um nó de grau ímpar!" << std::endl << std::endl;
		mostrarArestas(nvertices, vert_grau_impar, arestas);
	}
	else if (vert_grau_impar == 2)
	{
		std::cout << "O Grafo apresentado É SEMI-EULERIANO!! Existem exatamente 2 nós de grau ímpar!" << std::endl << std::endl;
		mostrarArestas(nvertices, vert_grau_impar, arestas);
	}
	else
	{
		std::cout << "O Grafo apresentado NÃO É EULERIANO!! Existem mais de 2 nós de grau ímpar!" << std::endl << std::endl;

		mostrarArestas(nvertices, vert_grau_impar, arestas);
	}
	return 0;
}
