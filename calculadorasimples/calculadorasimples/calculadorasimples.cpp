// calculadorasimples.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>

float recebervalores()
{
	float valor;
	printf("Digite um valor:\t");
	scanf_s("%f", &valor);
	return valor;
}
float calcadicao(float a, float b)
{
	float adicao;
	adicao = a + b;
	return adicao;
}
float calcsubtracao(float a, float b)
{
	float subtracao;
	subtracao = a - b;
	return subtracao;
}

float calcmultiplicacao(float a, float b)
{
	float multiplicacao;
	multiplicacao = a * b;
	return multiplicacao;
}

float calcdivisao(float a, float b)
{
	float divisao;
	divisao = a / b;
	return divisao;
}

int main()
{
	float a = recebervalores();
	float b = recebervalores();
	
	float resultadosoma = calcadicao(a, b);
	printf("Resultado da soma:\t\n%f", resultadosoma);

	float resultadosub = calcsubtracao(a, b);
	printf("\nResultado da subtracao:\t\n%f", resultadosub);

	float resultadodiv = calcdivisao(a, b);
	printf("\nResultado da divisao:\t\n%f", resultadodiv);

	float resultadomulti = calcmultiplicacao(a, b);
	printf("\nResultado da multiplicacao:\t\n%f", resultadomulti);

	system("pause");
	return 0;
}

