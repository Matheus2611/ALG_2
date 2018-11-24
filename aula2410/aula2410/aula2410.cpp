// aula2410.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int lervalores()
int valor;
printf("Digite um valor");
scanf_s("%i", &valor);
return valor;

int main()
{
	 int valor1 = lervalores();
	 int valor2 = lervalores();

	while()
	
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

