// Calculadorasimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

float recebervalores()
{
	float valorreal;
	printf("\tDigite um valor real:");
	scanf_s("%f", &valorreal);
	return valorreal;
}
float calcadicao(float a, float b)
{
	float adicao;
	adicao = a + b;
	return adicao
}
float calcsubtracao(float a, float b)
{
	float subtracao;
	subtracao = a - b;
	return subtracao
}


int main()
{

	float a = recebervalores();
	float b = recebervalores();

	printf("Valor da adi��o:\t", calcadicao(a, b), "Subtra��o:\t", calcsubtracao(a, b);
	system("pause");
	return 0;
}


