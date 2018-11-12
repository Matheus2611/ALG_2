// Aula711.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

/*void itens()
{
	int itm[8], i;
	printf("Informe os itens\n");
	for (i = 0; i < 8; i++)
		scanf_s("%d", &itm[i]);
	for (i = 0; i < 8; i++)
		printf("%d", itm[i]);
}
void itens()
{
	int itm[3][5], i, j;
	printf("Informe os itens\n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; i++)
			scanf_s("%d", &itm[i][j]);
	printf("%d", itm[i][j]);
}

void repeticao()
{
	int i = 0;

	for (; i < 10;)
		printf("oi");
}

float soma(float a, float b)
{
	return a + b;
}
int main()
{
	float c;
	c = soma(3, 5);
	repeticao();

	system("pause");
    return 0;
}
*/

/*void Ex19()
{
	int mat[2][3], i, j, l, f, c, resl[3], resc[2];
	printf("Informe valores para matriz\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i : ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	printf("Qual linha deseja multiplicar? : ");
	scanf_s("%i", &l);
	printf("Qual vai ser o fator multiplicar? : ");
	scanf_s("%i", &f);
	for (i = 0; i < 3; i++)
		resl[i] = mat[l][i] * f;
	printf("O resultado foi : ");
	for (i = 0; i < 3; i++)
		printf("%i ", resl[i]);
	printf("\n");
	printf("Qual coluna deseja multiplicar? : ");
	scanf_s("%i", &c);
	printf("Qual vai ser o fator multiplicar? : ");
	scanf_s("%i", &f);
	for (i = 0; i < 2; i++)
		resc[i] = mat[c][i] * f;
	printf("O resultado foi : ");
	for (i = 0; i < 3; i++)
		printf("%i ", resc[i]);
	printf("\n");
}
*/

void Ex20()
{
	int mat[2][3], i, j;

	printf("Informe valores para matriz\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i : ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (mat[i][j] < 0)
			{
				printf("%i, ", mat[i][j] * -1);
			}				
		}
	}
}

void ex27()
{
	int valor;
	printf("Informe o valor da compra:\n");
	scanf_s("%i", &valor);

}

void ex23()
{
	int tempo, velmedia;
	printf("Informe o tempo gasto na viagem em horas: \n");
	scanf_s("%i", &tempo);
	printf("Informe a velocidade media: \n");
	scanf_s("%i", &velmedia);

	int distancia = tempo * velmedia;
	int litros = distancia / 12;

	printf("\n%i ", tempo, " Horas\n");
	printf("\n%i ", velmedia, " Km/h\n");
	printf("\n%i", litros, " Litros\n");
	printf("\n%i ", distancia, " Km\n");
}
int main()
{

	
	ex23();

	

	system("pause");
	return 0;
}

