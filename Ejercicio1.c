#include <stdio.h>
#include <stdlib.h>

//Matrices
int matA[10][10];
int matB[10][10];
int matF[10][10];

//Funcion para añadir valores a las matrices
void definirMat() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			matA[i][j] = rand() % 10;
			matB[i][j] = rand() % 10;
		}
	}
}

//Función para calcular la multiplicación entre matrices
void MatMult() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			//Inicializar valor de matriz
			matF[i][j] = 0;

			//Sumatoria de valores multiplicados
			for (int k = 0; k < 10; k++) {
				matF[i][j] += matA[i][k] * matB[k][j];
			}
		}
	}
}

int main() {
	definirMat();
	MatMult();
	//Imprimir resultado matriz
	printf("Matriz final en:\n\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d,%d: %d \n", i, j, matF[i][j]);
		}
		printf("\n");
	}
}