// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>



int main()
{
	int num1;
		int num2;

		printf("Bom dia");
			printf("Digite um número inteiro:\t");
			scanf_s("%i", &num1);

			printf("digite um segundo numero:\t");
				scanf_s("%i", &num2);

				int soma = num1 + num2;

				printf("a soma dos valores é:%i\t", soma);

				system("pause");


    return 0;
}

