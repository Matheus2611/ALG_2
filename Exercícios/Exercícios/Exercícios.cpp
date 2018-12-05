// Exercícios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

/*int lervalores()
{
	int valor;
	printf("Digite um valor");
	scanf_s("%i", &valor);
	return valor;
}

int main()
{

	int a = lervalores();
	int b = lervalores();

	if ((a / b) == %0 || (b / a) == %0)
	{
		printf("%i", a, "\t\t%i", b, "sao multiplos");
	}
	else
	{
		printf("%i", a, "e%i", b, " nao sao multiplos");
	}



	system("pause");
    return 0;
}
*/
/*Ex8int main()
{
	printf("Ex8");
	printf("Informe sua idade");
	int idade;
	scanf_s("%i", &idade);

	if (idade >= 5 && idade <= 7)
	{
		printf("Nadador Infantil A");
	}
	else if (idade >= 8 && idade <= 10)
	{
		printf("Nadador Infantil B");
	}
	else if (idade >= 11 && idade <= 13)
	{
		printf("Nadador Juvenil A");
	}
	else if (idade >= 14 && idade <= 17)
	{
		printf("Nadador Juvenil B");
	}
	else if (idade >= 18)
	{
		printf("Adulto");
	}

	system("pause");
	return 0;
}
*/
/*int main()
{
	float   nota[4], n1, n2, n3, escolha;
	printf("Digite a primeira nota");
	scanf_s("%f", &n1);
	printf("Digite a segunda nota");
	scanf_s("%f", &n2);
	printf("Digite a terceira nota");
	scanf_s("%f", &n3);
	printf("Qual opcao de media deseja para calculo\n");
	printf("\n1-aritmetica\n2-Pondera\n3-Harominca\n");
	scanf_s("%f", &escolha);

	if(escolha = 1)
	{
		float media = (n1 + n2 + n3) / 3;
		printf("Media aritmetica igual a\n%f.2", media);
	}
	else if(escolha = 2)
	{
		float media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / (3 + 3 + 4);
		printf("Media pondera igual a\n%.2f", media);
	}
	else if(escolha = 3)
	{
		float media = ((1 / n1) + (1 / n2) + (1 / n3)) / 3;
		printf("Media Harmonica igual a\t%f", media);
	}
	else
	{
		printf("opçao invalida");
	}
	system("pause");
	return 0;
}
*/
/*int main()
{
	int codigo, qntcomprada;
	printf("Digite o codigo do produto");
	scanf_s("%i", &codigo);
	printf("Quantidade comprada");
	scanf_s("%i", &qntcomprada);
	float precototal = 0;

	if (codigo = 1001)
	{
		precototal = qntcomprada * 5.32;
		printf("Valor Total\n%.2f", precototal);
	}
	else if (codigo = 1324)
	{
		precototal = qntcomprada * 6.45;
		printf("Valor Total\n%.2f", precototal);
	}

	system("pause");
	return 0;
}
*/

/*int main()
{
	float salario;
	printf("Digite seu salario:\t");
	scanf_s("%f", &salario);
	float imposto = 0;
	if (salario <= 1903.98)
	{
		printf("isento de imposto!");
	}
	else if (salario <= 2826.65)
	{
		float imposto = (salario * 0.075) - 142.8;
		printf("imposto Devido com aliquota de 7,5%\n%.2f\t", imposto);
	}
	else if (salario <= 3751.05)
	{
		float imposto = (salario * 0.15) - 354.80;
		printf("imposto devido com aliquota de 15%\n%.2f\t", imposto);
	}
	else if (salario <= 4664.68)
	{
		float imposto = (salario * 0.225) - 636.13;
		printf("imposto devido com aliquota de 22.5%\n%.2f\t", imposto);
	}
	else
	{
		float imposto = (salario * 0.27) - 869.23;
		printf("imposto devido com aliquota de 27%\n%.2f\t", imposto);
	}
	system("pause");
	return 0;
}
*/

/*int main()
{
	float raio, area;
	printf("digite o valor do Raio");
	scanf_s("%f", &raio);
	printf("Considerando pi 3.14\n");

	area = 3.14 * (raio * raio);

	printf("O valor da area\n%.2f", area);


	system("pause");
	return 0;
}
*/
/*int main()
{
	float base, altura, area;
	printf("Valor da base:\n");
	scanf_s("%f", &base);
	printf("Valor da altura:\n");
	scanf_s("%f", &altura);

	area = (base * altura) / 2;

	printf("Area do Triangulo:%.2f", area);




	system("pause");
	return 0;
}
*/

void Ex19()
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
resc[i] = mat[i][c] * f;
printf("O resultado foi : ");
for (i = 0; i < 2; i++)
printf("%i ", resc[i]);
printf("\n");
}

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

int main()
{

	Ex19();

	system("pause");
	return 0;
}

/*
int main()
{
	system("pause");
	return 0;
}
*/