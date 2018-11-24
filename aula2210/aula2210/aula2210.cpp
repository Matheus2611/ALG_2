// aula2210.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

float recebervalores()
{
	float valor = 0;
	printf("\nDigite um valor REAL:\n");
	scanf_s("%f", &valor);
	return valor;
}

float media(float a, float b, float c, float d)
{
	float media;
	media = (a + b + c + d) / 4;
	return media;
}

void maiorvalor(float a, float b, float c, float d)
{
	float mediadois = media(a, b, c, d);
	
	if (a > mediadois)
	{
		printf("%.2f ", a);
	}
	if (b > mediadois)
	{
		printf("%.2f ", b);
	}
	if (c > mediadois)
	{
		printf("%.2f ", c);
	}
	if (d > mediadois)
	{
		printf("%.2f ", d);
	}
}

void informar(int a)
{
	if ((a % 2 == 0))
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
}

void exemploswitch()
{
	printf("\nEscolha uma opcao:\n");
	printf("1 - a\n2 - b\n3 - c\n4 - d\n4");
	int op = 0;
	scanf_s("%i", &op);

	switch (op)
	{
	case 1:
		printf("voce escolheu a\n");
		break;
	case 2:
		printf("voce escolheu b\n");
		break;
	case 3:
		printf("voce escolheu c\n");
		break;
	case 4:
		printf("voce escolheu d\n");
		break;
	default:
		printf("Opcao invalida");
		break;
	}
}
int main()
{

	float valorum = recebervalores();
	float valordois = recebervalores();
	float valortres = recebervalores();
	float valorquatro = recebervalores();

	float m = media(valorum, valordois, valortres, valorquatro);

	printf("\n\n");

	maiorvalor(valorum, valordois, valortres, valorquatro);


	printf("\nO valor da media:%.2f\n", m);

	informar(valorum);
	
	exemploswitch();


	system("pause");
    return 0;
	
}

