// aula2910.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int lervalores()
{
	int valor;
	printf("Digite um valor");
	scanf_s("%i", &valor);
	return valor;
}

int main()
{
	int valor1 = lervalores();
	int valor2 = lervalores();


	if (valor1 < valor2) 
	{
		while (valor1 <= valor2);
		{
			valor1++;
			printf("%i\n", valor1);
		} 
	}
	else 
	{
		while (valor2 <= valor1);
		{
			valor2--;
			printf("%i\n", valor2);
		} 
	}










	system("pause");
	return 0;
}

