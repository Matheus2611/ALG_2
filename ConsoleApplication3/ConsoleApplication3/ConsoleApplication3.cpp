// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <string>
#include "locale"

int pegarInt(char msg[])
{

	int inteiro;
	printf_s(msg);
	scanf_s("%i", &inteiro);
	return inteiro;

}

int pegarFloat(char msg[])
{

	float num;
	printf_s(msg);
	scanf_s("%f", &num);
	return num;
}

char pegarChar(char msg[])
{
	char letra;
	printf_s(msg);
	scanf_s("%c", &letra);
	return letra;
}

/*
void ex11()
{
	pegarFloat("
	float area, raio, pi;
	pi = 3.14;
	
	area = pi * pow(raio, 2);
	printf_s("%f", pi);
}
*/

/*
void ex12()
{
	float area, base, altura;
	altura = pegarFloat("Altura do triangulo");
	base = pegarFloat("Base do triangulo");
	area = ( base * altura ) / 2;
	printf_s("a área desse triangulo = %f", area);
}
*/

/*
void ex13()
{
	int num, i, numimprimidos;
	while (true)
	{
		num = pegarInt("Insere um inteiro aí: ");
		if (i % 2 == 0)
		{
			printf_s("i, ");
			numimprimidos++;
		}
		if (numimprimidos == num)
		{
			break;
		}	
	}
}
*/

/*
void ex13()
{
	std::string minhastring = "olá mundo";
	char letra = pegarChar("Insere uma letra aí: ");
	for (int i = 0; i < minhastring.length(); i++)
	{
		if (minhastring[i] == letra)
		{
			printf_s("a letra %c está na posicao %i\n", letra, i);
		}
	}

}
*/

int main()
{
	setlocale(LC_ALL, "");//incluir <locale>, faz caracteres especiais funcionarem

	return 0;
}
