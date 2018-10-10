// aulaoitododez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h> //inclusão de bliblioteca
#include <stdlib.h>

//Variaveis
int a;
float b; //real(ponto flutuante)
double c; //real(mais precisão)
bool d; //booleano(v/f)



int main()
{
	int e;
	 
	printf("hello world!\n");

	printf("Digite seu nome:\n"); // \n = new line, \t = dar espaço

	printf("%i\n", 99);
	printf("%f\n", 100.01);


	printf("aqui vai o valor %f, total da soma.\n", 7.5 + 5.8);

	printf("%i + %i = %i\n", 500, 600, 500 + 600);

	a = 120;
	e = 210;
	int f = a + e;

	printf(" Resultado da soma: %i\n", f);

	printf("Digite um numero");

	scanf_s("%f", &b); 

	printf("\n voce digitou %f\n", b);




		

	system("pause");






    return 0;
}

