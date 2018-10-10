// aula10do10  funções.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>



void HelloWorld()
{
	printf("Hello World\n");
}

int soma2valores(int a, int b) //função 2
{
	int c;
	c = a + b;
	return c;  // ou return = a + b
}


int main()
{
	HelloWorld();
	soma2valores(1890, 9837);
	int d = soma2valores(1890, 9837);
	printf("\tResultado: %i", d);

	system("pause");
    return 0;
}

