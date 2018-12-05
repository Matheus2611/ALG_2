// ProvaALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

struct participante
{
	char nome[30];
	int cpf;
	int horas;
	int minutos;
};

void Ex1()
{

	float p, s, a, b, c;
	printf("informe um valor para 'a': ");
	scanf_s("%f", &a);
	printf("informe um valor para 'b': ");
	scanf_s("%f", &b);
	printf("informe um valor para 'c': ");
	scanf_s("%f", &c);

	if (a > b + c || b > a + c || c > a + b)
	{
		printf("Os valores não formam um triangulo!");
	}
	else
	{

		p = (a + b + c) / 2;
		s = (p * ((p - a) * (p - b) * (p - c)));
		s = sqrt(s);

		printf("A Area deste triangulo: %f", s);
	}
}


void printVetor(int[10]);

int pesquisaPorCpf(struct participante pp[5], int cpf) {
	for (int i = 0; i < 5; i++) {
		if (pp[i].cpf == cpf) {
			return i;
		}
	}
	return -1;
}

void Ex3()
{
	int mat[3][3], i, j;
	printf("Informe valores para matriz\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i : ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%2d", mat[i][i]);
	}
}


void Ex2()
{
	int vet[10], vetinvertido[10], i;

	for (i = 0; i < 10; i++)
	{
		printf("Informe o %d° valor da sequencia: \n", i + 1);
		scanf_s("%d", &vet[i]);
	}

	printf("Vetor digitado: \n");
	printVetor(vet);
	int j = 9; //essa var comeca na ultima posicao, e vai descendo
	for (i = 0; i < 10; i++) {
		vetinvertido[j] = vet[i];
		j--;
	}
	printf("Vetor invertido: \n");
	printVetor(vetinvertido);




	int maior = vet[0];
	int menor = vet[0];

	for (i = 0; i < 10; i++)
	{
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
		if (vet[i] < menor)
		{
			menor = vet[i];
		}
	}

	int somatodosvalores = 0;
	float media;
	for (i = 0; i < 10; i++)
	{
		somatodosvalores += vet[i];
		
	}

	media = somatodosvalores / 10;
	printf("A média aritmetica é: %.2f \n", media);

	printf("O maior numero digitado: %i\n", maior);
	printf("O menor numero digitado: %i\n", menor);
	printf("vetor antes da inversao: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", vet[i]);
		if (vet[i] % 2 == 1)
		{
			vet[i] *= -1;
		}
	}
	printf("\nvetor depois da inversao dos números impares: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d, ", vet[i]);
	}
}

void printVetor(int v[10]) {
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", v[i]);
	}
	printf("\n");

}


void Ex4()
{
	

	struct participante participantes[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("Digite o nome: \n");
		gets_s(participantes[i].nome);

		printf("Digite o seu cpf: \n");
		scanf_s("%i", &participantes[i].cpf);
		getchar();
		//para quando for checar nas pesquisas depois, a condicao pra
		//nao estar preenchido é ser 0.
		participantes[i].horas = -1;
		participantes[i].minutos = -1;
	}

	int pesq, opcao;

	do {
		bool achado;

		printf("Digite:\n0-Sair\n1-pesquisar cpf\n2-Informar o tempo de prova dos participates\n3-limpar a tela\n");
		scanf_s("%i", &opcao);
		if (opcao == 1) {
			printf("\nDigite o cpf a ser pesquisado: \n");
			scanf_s("%i", &pesq);
			achado = false;
			for (int i = 0; i < 5; i++)
			{
				if (pesq == participantes[i].cpf)
				{
					printf("\nNome: %s\n", participantes[i].nome);
					printf("Cpf: %d\n", participantes[i].cpf);
					if (participantes[i].horas != -1) {
						printf("Tempo de prova: %d:%d\n", participantes[i].horas, participantes[i].minutos);
					}
					else {
						printf("\nO tempo de prova desse candidato ainda não foi preenchido\n");
					}
					achado = true;
				}

			}
			if (!achado) {
				printf("cpf nao encontrado!\n");
			}
		}
		else if (opcao == 2) {
			do {
				printf("Informe o CPF do participante: \n");
				scanf_s("%i", &pesq);
				if (pesquisaPorCpf(participantes, pesq) != -1) {
					int indexparticipante = pesquisaPorCpf(participantes, pesq);
					printf("Nome: %s\n", participantes[indexparticipante].nome);
					printf("Cpf: %d\n", participantes[indexparticipante].cpf);
					if (participantes[indexparticipante].horas != -1) {
						printf("Tempo de prova: %d:%d\n", participantes[indexparticipante].horas, participantes[indexparticipante].minutos);
						printf("Os dados desse participante já estão preenchidos\n");
					} else {
						printf("Informe as horas decorridas: \n");
						scanf_s("%d", &participantes[indexparticipante].horas);
						printf("Informe os minutos decorridos: \n");
						scanf_s("%d", &participantes[indexparticipante].minutos);
						printf("Dados inseridos com sucesso!: \n");
					}
				}
				else {
					printf("Participante não encontrado! tente novamente\n");
				}

			} while (pesquisaPorCpf(participantes, pesq) == -1);
		}
		else if (opcao == 3) {
			for (int i = 0; i < 100; i++) {
				printf("\n");
			}
		}
		else if (opcao == 0) {
			printf("fim do programa! tchau tchau professor!\naté uma possível proxima etapa!");

		}

	} while (opcao != 0);
	
}

int main()
{

	setlocale(LC_ALL, "portuguese");

	//Ex1();

	//Ex2();

	//Ex3();

	//Ex4();

	system("pause");
    return 0;
}

