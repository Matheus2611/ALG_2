// aula1210.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int somaseq(int n)
{
	if (n == 0)
		return 0;
	else
		return n + somaseq(n - 1);
}

int fatorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fatorial(n - 1);

}

int main()
{
	printf("Informe um numero inteiro");
	scanf_s("%i", &a);
	
	

	int a = somaseq();
    return 0;
}

