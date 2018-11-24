// Aula1411-Exercicio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

/*void troca()
{
	float x, y, *a, *b;
	printf("Digite um valor para x:\n");
	scanf_s("%f", &x);
	printf("Digite um valor para y:\n");
	scanf_s("%f", &y);

		a = &y;
		b = &x;

		printf("\n\tO valor invertido de x= %f", *a);
		printf("\n\tO valor invertido de y= %f", *b);


}
*/

/*void MaximoMinimo(&vet, 4, &maior, &menor, int n, int *v)
{
	*maximo = v[0];
	*minimo = v[0];

	for (int i = 0; i < n; i++)
	{
		if (*maximo < vet[i])
		{
			*maximo = vet[i];
		}
	}
}
*/


struct carro {
	char modelo[30];
	char placa[8];
	int anofabricacao;
	char cor[10];
	char marca[20];

};



struct funcionario {
	char nome[50];
	int cpf[9];
	int dia;
	int mes;
	int ano;
	float salario;
};

void Imprimirdadoscarro(carro carro)
{
	printf("Modelo: %s\n", carro.modelo);
	printf("placa: %s\n", carro.placa);
	printf("ano de fabricacao: %i\n", carro.anofabricacao);
	printf("cor: %s\n", carro.cor);
	printf("marca: %s\n", carro.marca);
}


int main()
{
	//fgets faz a leitura de uma string
	//fgets(variavelarmazenamento, tamanho, entrada)
	//fgets(c.modelo, 30, stdin)
	//stdin(buffer teclado)

	struct carro c;

	printf("digite o modelo do carro: ");
	gets_s(c.modelo);
	printf("digite a placa do carro: ");
	gets_s(c.placa);
	printf("digite a cor do carro:\n ");
	gets_s(c.cor);
	printf("digite a marca do carro: ");
	gets_s(c.marca);
	printf("digite o ano de fabricacao do carro: ");
	scanf_s("%i", &c.anofabricacao);


	Imprimirdadoscarro(c);





	struct funcionario matheus;

	matheus.ano = 1998;
	
	printf("%i", matheus.ano);

	

	system("pause");
    return 0;
}

