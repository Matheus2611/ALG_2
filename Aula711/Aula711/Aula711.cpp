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

/*void Ex20()
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
*/
/*void ex26()
{
	int idade;
	printf("Informe sua idade:\n");
	scanf_s("%i", &idade);

	int dias = idade * 365;

	printf("Sua idade em dias %i", dias);


}
*/

/*void ex23()
{
	int tempo, velmedia;
	printf("Informe o tempo gasto na viagem em horas: \n");
	scanf_s("%i", &tempo);
	printf("Informe a velocidade media: \n");
	scanf_s("%i", &velmedia);

	int distancia = tempo * velmedia;
	int litros = distancia / 12;

	printf("\nHoras: %i\n", tempo);
	printf("\nKm/h: %i\n ", velmedia);
	printf("\n Litros: %i\n", litros);
	printf("\nKm: %i\n ", distancia);
}
*/


/*void ex22()
{
	int mat[3][3], matrizt[3][3], i, j;

	printf("Informe valores para matriz\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i : ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matrizt[j][i] = mat[i][j];
			printf("%i", matrizt[j][i]);
		}
	}
}
*/

 void ex29()
{
	 int x, y, z;
		 printf("digite um valor inteiro para X: ");
		 scanf_s("%i", &x);
		 printf("digite um valor inteiro para Y: ");
		 scanf_s("%i", &y);
		 printf("digite um valor inteiro para Z: ");
		 scanf_s("%i", &z);

		 if (x > y + z || y > x + z || z > x + y)
		 {
			 printf("Os valores n formam um triangulo");
		 }
		 else if (x == y && y == z)
		 {
			 printf("Os valores formam um triangulo equilatero");
		 }
		 else if (x == y || y == z || x == z)
		 {
			 printf("Os valores formam um triangulo isoceles");
		 }
		 else if (x != y && y != z && x != z)
		 {
			 printf("Os valores formam um triangulo escaleno");
		 }
}



int main()
{

	//ex26();

	//ex23();

	//ex20();

	//ex22();

	ex29();

	system("pause");
	return 0;
}

