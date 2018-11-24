// exercicios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>

void dadospopulacao()
{
	int idade, sexo, corolho, corcabelo;
	idade = 1;
	while (idade != -1)
	{
		printf("Informe sua idade: ");
		scanf_s("%i", &idade);
		printf("Informe seu sexo: \n1-M\n2-F");
		printf("\n");
		scanf_s("\n%i", &sexo);
		if (sexo < 1 || sexo > 2)
		{
			printf("dados invalidos");
		}
		printf("Informe cor dos seus olhos: 1-Azul 2-Verde 3-Castanho");
		printf("\n");
		scanf_s("%i", &corolho);
		if (corolho < 1 || corolho > 3)
		{
			printf("opção invalida");
		}
		printf("Informe cor do seu cabelo: 1-Louro 2-Castanhos 3-Pretos");
		printf("\n");
		scanf_s("%i", &corcabelo);
		if (corcabelo < 1 || corcabelo > 3)
		{
			printf("opção invalida");
		}
	}

	

}



int main()
{

	dadospopulacao();
	system("pause");
    return 0;
}

