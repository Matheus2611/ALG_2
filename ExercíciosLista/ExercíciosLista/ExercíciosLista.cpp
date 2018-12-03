// ExercíciosLista.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*void Ex1()
{
	float xa, xb, ya, yb;
	printf("Digite os valores do primeiro ponto:\n ");
	scanf_s("%f %f", &xa, &xb);
	printf("Digite os valores do segundo ponto:\n ");
	scanf_s("%f %f", &ya, &yb); 

	float conta = (((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));
	float result = sqrt(conta);
	printf("A distancia entre os pontos:  %.2f", result);
}
*/

/*void Ex2()
{
	int a, b, c;
	printf("Digite um valor para a, b, e c:\t");
	scanf_s("%i %i %i", &a, &b, &c);

	int r = (a + b) * (a + b);
	int s = (b + c) * (b + c);
	int d = (r + s) / 2;
	printf("O resultado de D:%i", d);
}
*/

/*void Ex3()
{
	int dias, ano, meses;
	printf("Digite sua idade em dias:");
	scanf_s("%i", &dias);
	meses = dias / 30;
	ano = dias / 365;
	meses = meses % 12;
	dias = dias % 30;
	printf("Voce tem %i", ano);
	printf("anos\n%i", meses);
	printf("meses\n %i", dias);
	printf("dias.\n");
}
*/

/*void Ex4()
{
	float n1, n2, n3;
	printf("Digite a primeira nota");
	scanf_s("%f", &n1);
	printf("Digite a segunda nota");
	scanf_s("%f", &n2);
	printf("Digite a terceira nota");
	scanf_s("%f", &n3);
	float media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);
	printf("Sua media:%.2f", media);
}
*/

/*void Ex5()
{
	float valor;
	printf("Informe o valor do carro:\n");
	scanf_s("%f", &valor);
	
	float Fabrica = valor;
	float distri = Fabrica * 0.28;
	float impostos = Fabrica * 0.45;
	float total = distri + Fabrica + impostos;
	
	printf("O valor total do carro e:%.0freais\n", total);
}
*/

/*void Ex6()
{
	int Inteiro;
	printf("Informe um numero inteiro:");
	scanf_s("%i", &Inteiro);
	int soma = 0;
	for (int i = 0; i <= Inteiro; i++) {
		soma += i;
	}
	printf("O resultado e :%i\n", soma);

}
*/

/*void Ex7()
{
	int a, b;
	printf("Digite dois valores:\n");
	scanf_s("%i %i", &a, &b);

	if ((a / b) == %0 || (b / a) == %0)
	{
		printf("%i", a, "\t%i", b, "sao multiplos");
	}
	else
	{
		printf("%i", a, "e%i", b, " nao sao multiplos");
	}
}
*/

/*void Ex8()
{
printf("Informe sua idade");
int idade;
scanf_s("%i", &idade);
if (idade >= 5 && idade <= 7)
{
printf("Nadador Infantil A");
}
else if (idade >= 8 && idade <= 10)
{
printf("Nadador Infantil B");
}
else if (idade >= 11 && idade <= 13)
{
printf("Nadador Juvenil A");
}
else if (idade >= 14 && idade <= 17)
{
printf("Nadador Juvenil B");
}
else if (idade >= 18)
{
printf("Adulto");
}

}
*/

/*void Ex9()
{
	float n1, n2, n3;
	int escolha;
	printf("Digite a primeira nota: ");
	scanf_s("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf_s("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf_s("%f", &n3);
	printf("Qual opcao de media deseja para calculo\n");
	printf("\n1-aritmetica\n2-Pondera\n3-Harominca\n");
	scanf_s("%i", &escolha);
	if (escolha == 1)
	{
		float media = (n1 + n2 + n3) / 3;
		printf("Media aritmetica igual a\n%f.2", media);
	}
	else if (escolha ==2)
	{
		float media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / (3 + 3 + 4);
		printf("Media pondera igual a\n%.2f", media);
	}
	else if (escolha == 3)
	{
		float media = ((1 / n1) + (1 / n2) + (1 / n3)) / 3;
		printf("Media Harmonica igual a\t%f", media);
	}
	else
	{
		printf("opçao invalida");
	}
}
*/

/*void Ex10()
{
	int codigo, qntcomprada;
	printf("Digite o codigo do produto: ");
	scanf_s("%i", &codigo);
	printf("Quantidade comprada: ");
	scanf_s("%i", &qntcomprada);
	float precototal = 0;
	if (codigo == 1001)
	{
		precototal = qntcomprada * 5.32;
		printf("Valor Total\n%.2f", precototal);
	}
	else if (codigo == 1324)
	{
		precototal = qntcomprada * 6.45;
		printf("Valor Total\n%.2f", precototal);
	}
	else if (codigo == 6548)
	{
		precototal = qntcomprada * 2.37;
		printf("Valor Total\n%.2f", precototal);
	}
	else if (codigo == 987)
	{
		precototal = qntcomprada * 5.32;
		printf("Valor Total\n%.2f", precototal);
	}
	else if (codigo == 7623)
	{
		precototal = qntcomprada * 6.45;
		printf("Valor Total\n%.2f", precototal);
	}
	else
	{
		printf("Opcao Invalida!!!");
	}


}
*/

/*void Ex11()
{
	float raio, area;
	printf("digite o valor do Raio");
	scanf_s("%f", &raio);
	printf("Considerando pi 3.14\n");
	area = 3.14 * (raio * raio);
	printf("O valor da area\n%.2f", area);

}
*/

/*void Ex12()
{
	float base, altura, area;
	printf("Valor da base:\n");
	scanf_s("%f", &base);
	printf("Valor da altura:\n");
	scanf_s("%f", &altura);
	area = (base * altura) / 2;
	printf("Area do Triangulo:%.2f", area);

}
*/

/*void Ex13()
{
	int inteiro;
	printf("Informe um numero inteiro:\n");
	scanf_s("%i", &inteiro);
	for (int i = 0; i < inteiro; i++)
	{
		printf("%i", i * 2 + 1);
	}
	printf("\n");
}
*/

/*void Ex14()
{
	printf("xxxxx\n");
	printf("x   x\n");
	printf("x   x\n");
	printf("x   x\n");
	printf("xxxxx\n");
}
*/

/*void Ex15()
{
	int x, n, calculo, i, b;
	printf("Informe um numero inteiro para x:\n");
	scanf_s("%i", &x);
	printf("Informe um numero inteiro para n:\n");
	scanf_s("%i", &n);
	for (i = 0; i < n - 1; i++)
	{
		x = x * x;
	}
	printf("%i", x);
	printf("\n");
}
*/

/*int Ex16()
{
	int i;
	for (i = 0; i < MAX && v[i] != '\0' && v[i] != c; i++);
	if (i == MAX || v[i] == '\0')
		return -1;
	else
		return i;
	char v[MAX], c, MAX;
	int p;
	printf("informe a frase: ");
	gets_s(v);
	printf("informe o caractere  a ser localizada:");
	scanf_s("%c", &c);
	p = poschar(v, c);
	if (p == -1)
		printf("Nao encotrado!");
	else
		printf("Encontrado na posicao: %i", p);
}
*/

/*void Ex17()
{
	printf("       X\n");
	printf("      XXX\n");
	printf("     XXXXX\n");
	printf("    XXXXXXX\n");
	printf("   XXXXXXXXX\n");
	printf("  XXXXXXXXXXX\n");
	printf(" XXXXXXXXXXXXX\n");
	printf("XXXXXXXXXXXXXXX\n");
	printf("      XX\n");
	printf("      XX\n");
	printf("     XXXX\n");

}
*/

/*void Ex18()
{
		int c, x, y;
		printf("Digite um valor entre 2 e 20: ");
		scanf_s("%d", &x);
		for (c = 1; c <= x; c++)
		{
			for (y = 1; y <= c; y++)
				printf("%d", y);
			printf("\n");
		}
		for (c = c - 2; c > 0; c--) 
		{
			for (y = 1; y <= c; y++)
				printf("%d", y);
			printf("\n");
		}
		printf("\n");
}
*/

/*void Ex19()
{
int mat[2][3], i, j, l, f, c, resl[3], resc[2];
printf("Informe valores para matriz\n");
for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("Linha: %i, Coluna: %i : ", i, j);
scanf_s("%i", &mat[i][j]);
}
}
printf("Qual linha deseja multiplicar? : ");
scanf_s("%i", &l);
printf("Qual vai ser o fator multiplicar? : ");
scanf_s("%i", &f);
for (i = 0; i < 3; i++)
resl[i] = mat[l][i] * f;
printf("O resultado foi : ");
for (i = 0; i < 3; i++)
printf("%i ", resl[i]);
printf("\n");
printf("Qual coluna deseja multiplicar? : ");
scanf_s("%i", &c);
printf("Qual vai ser o fator multiplicar? : ");
scanf_s("%i", &f);
for (i = 0; i < 2; i++)
resc[i] = mat[c][i] * f;
printf("O resultado foi : ");
for (i = 0; i < 3; i++)
printf("%i ", resc[i]);
printf("\n");
}
*/

/*void Ex20()
{
int mat[2][3], i, j;
printf("Informe valores para matriz\n");
for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("Linha: %i, Coluna: %i : ", i, j);
scanf_s("%i", &mat[i][j]);
}
}
for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
if (mat[i][j] < 0)
{
printf("%i, ", mat[i][j] * -1);
}
}
}
}
*/

/*void Ex21()
{
	int numero, n, i, par, soma = 0;;
	printf("digite um numero para o calculo\n");
	scanf("%i", &numero);
	n = numero;
	for (i = 0; i <= n; i++)
	{
		par = i % 2;
		if (par == 0)
		{
			soma = soma + i;
		}
	}
	printf("O resultado eh: %i\n", soma);

}
*/

/*void Ex22()
{
	int mat[3][3], i, j;
	printf("informe os valores\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i , Coluna: %i :", i, j);
			scanf("%i", &mat[i][j]);
		}
	}
	printf("Matriz\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Transposta\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("%i ", mat[i][j]);
		}
		printf("\n");
	}
}
*/

/*void ex23()
{
	int tempo, velmedia;
	printf("Informe o tempo gasto na viagem em horas: \n");
	scanf_s("%i", &tempo);
	printf("Informe a velocidade media: \n");
	scanf_s("%i", &velmedia);
	int distancia = tempo * velmedia;
	int litros = distancia / 12;
	printf("\n%i ", tempo, " Horas\n");
	printf("\n%i ", velmedia, " Km/h\n");
	printf("\n%i", litros, " Litros\n");
	printf("\n%i ", distancia, " Km\n");
}
*/

/*void Ex24()
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

/*void Ex25()
{
	float salario, soma, calc;
	printf("exercicio 25");
	printf("informe seu salario bruto: ");
	scanf_s("%f", &salario);
	soma = salario * 0.10;
	calc = salario *0.05;
	float salarioliq = salario - (soma + calc);
	printf("salario final:%.2f", salarioliq);

}
*/

/*void ex26()
{
	int valor;
	printf("Informe o valor da compra:\n");
	scanf_s("%i", &valor);
	int idade;
	printf("Informe sua idade:\n");
	scanf_s("%i", &idade);
	int dias = idade * 365;
	printf("Sua idade em dias %i", dias);
}
*/

/*void Ex27()
{
	int compra, troco, valor, um, dez, cem;
	printf("Informe o valor da compra:\n");
	scanf("%i", &compra);
	printf("Informe o valor pago a ser pago:\n");
	scanf("%i", &valor);
	troco = valor - compra;
	valor = troco;
	if (valor >= 100)
	{
		cem = valor / 100;
		dez = valor % 100;
		dez = dez / 10;
		um = valor % 10;
	}
	else if (valor >= 10 && valor<100)
	{
		cem = 0;
		dez = valor / 10;
		um = valor % 10;
	}
	else if (valor >= 0 && valor<10)
	{
		cem = 0;
		dez = 0;
		um = valor;
	}
	else
	{
		printf("Valor pago é menor do que o Total a pagar");
	}
		printf("O valor da compra eh: %i \n O valor do troco eh: %i \n Serao entregues %i notas de Cem, %i notas de Dez e %i notas de Um  \n", compra, troco, cem, dez, um);

}
*/

/*void Ex28()
{
	float salario = 1908, carro, vendas;
	printf("Favor digitar o numero de carros que foram vendidos no mes\n");
	scanf("%f", &carro);
	carro = carro * 50;
	printf("Favor digitar o valor das vendas do mes\n");
	scanf("%f", &vendas);
	vendas = vendas * 0.05;
	salario = salario + carro + vendas;
	printf("O salario total do funcionario sera de %000.f\n ", salario);

}
*/

/*void ex29()
{
	int x, y, z;
	printf("digite um valor inteiro para X: ");
	scanf_s("%i", &x);
	printf("digite um valor inteiro para Y: ");
	scanf_s("%i", &y);
	printf("digite um valor inteiro para Z: ");
	scanf_s("%i", &z);
	if (x > y + z || y > x + z || z > x + y)
	{
		printf("Os valores n formam um triangulo");
	}
	else if (x == y && y == z)
	{
		printf("Os valores formam um triangulo equilatero");
	}
	else if (x == y || y == z || x == z)
	{
		printf("Os valores formam um triangulo isoceles");
	}
	else if (x != y && y != z && x != z)
	{
		printf("Os valores formam um triangulo escaleno");
	}
}
*/

/*void Ex30()
{
		int num, i, cont = 0;
		printf("Digite um numero de 2 a 20: ");
		scanf_s("%i", &num);
		if (num < 2 || num > 20)
		{
			printf("\nNumero invalido");
		}
		else
		{
			while (num>0)
			{
				printf("\t");
				for (i = 0; i<cont; i++)
					printf("x");
				for (i = 1; i <= num; i++)
					printf("%i", i);
				printf("\n");
				num--;
				cont++;
			}
		}
	}
*/

/*void Ex31()
{
	int numero;
	printf("Favor digitar um numero:\n");
	scanf("%i", &numero);

	int a, i, neg = 0;
	for (i = 0; i < 5; i++)
	{
		a = numero;
		if (a<0)
		{
			neg = neg + 1;
		}
	}
	printf("%i numeros foram negativos\n", neg);
}
*/

/*void Ex32()
{
	int fil, i = 0;
	float sal = 1, medfil = 0, medsal = 0, maior = 0, perc;
	while (sal >= 0)
	{

		printf("Digite seu salario \n");
		scanf("%f", &sal);

		if (sal >= 0)
		{
			printf("Digite seu numero de filhos \n");
			scanf("%i", &fil);
			medfil = medfil + fil;
			medsal = medsal + sal;
			i = i + 1;
			if (maior<sal)
			{
				maior = sal;
			}
			if (sal <= 100)
			{
				perc = perc + 1;
			}
		}
	}
	medfil = medfil / i;
	medsal = medsal / i;
	perc = (perc * 100) / i;
	printf("A media do salario da populacao eh %0.f. /n A media do numero de filhos eh %0.f. /n O maior salario eh %0.f. /n %0.f por cento das pessoas da cidade recebem menos do que 100 reais", medsal, medfil, maior, perc);

}
*/

/*void Ex33()
{
	int ano = 0;
	float Chico = 1.5, Ze = 1.1;
	while (Chico >= Ze)
	{
		Chico = Chico + 0.2;
		Ze = Ze + 0.3;
		ano = ano + 1;
	}
	printf("Levarao %i anos para que Ze seja maior do Chico/n", ano);

}
*/

/*void Ex34()
{
	int valor, maior = -99999, menor = 99999, i;
	for (i = 0; i<50; i++)
	{
		printf("Digite um valor\n");
		scanf("%i", &valor);
		if (valor>maior)
		{
			maior = valor;
		}
		if (valor<menor)
		{
			menor = valor;
		}
	}
	printf("O menor valor digitado eh : %i \n O maior valor digitado eh : %i", menor, maior);
}
*/

/*void Ex35()
{
	int idade = 1, olho = 0, cabelo = 0, maior = -100, quant = 0, fem = 0;
	char sexo;
	while (idade > 0)
	{
		printf("Digite sua idade\n");
		scanf_s("%i", &idade);
		printf("Qual seu sexo? ('M' para masculino e 'F' para feminino)\n");
		getchar();
		sexo = getchar();
		if (sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M')
		{
			printf("Opcao invalida, Tente novamente\n");
			sexo = getchar();
		}
		if (sexo != 'f' && sexo != 'F');
		{
			fem = 1;
		}
		printf("Selecione a cor dos seus olhos (1-azuis 2-verdes 3-castanhos)\n");
		scanf_s("%i", &olho);
	
		printf("Selecione a cor dos seus cabelos (1-Louros 2-Castanhos 3-Pretos)\n");
		scanf_s("%i", &cabelo);
		
		if (idade > maior)
		{
			maior = idade;
		}
		if (idade >= 18 && idade <= 35 && olho == 2 && cabelo == 1 && fem == 1)
		{
			quant = quant + 1;
		}
	}
	printf("A maior idade da populacao eh %i \n A quantidade de indivíduos do sexo feminino cuja idade esta entre 18 e 35 anos e inclusive e que tem olhos verdes e cabelos louros eh %i.", maior, quant);
	
}
*/

/*void Ex36()
{
	int numero;
	int contador = 0;
	int main(int argc, char * argv[])
	{

		printf("informe  o numero: ");
		scanf("%i", &numero);
		for (contador = 0; contador <= 20; contador++)
		{
			printf("%i x %i = %i\n", numero, contador, numero * contador);
		}
}
*/

/*void Ex37()
{
	struct dma1{
		int dia;
		int mes;
		int ano;
	};
	struct dma2 {
		int dia;
		int mes;
		int ano;
	};
	struct dma1 a;
	printf("Digite o dia: ");
	scanf_s("%i", &a.dia);
	printf("Digite o mes: ");
	scanf_s("%i", &a.mes);
	printf("Digite o ano: ");
	scanf_s("%i", &a.ano);

	struct dma2 b;
	printf("Digite o dia: ");
	scanf_s("%i", &b.dia);
	printf("Digite o mes: ");
	scanf_s("%i", &b.mes);
	printf("Digite o ano: ");
	scanf_s("%i", &b.ano);

	int diferença = b.dia - a.dia;
	diferença = diferença * -1;

	printf("A diferenca entres os dias e de: %i", diferença);
}
*/

/*void Ex38()
{
	struct hm {
		int horas;
		int minutos;
	};

	struct hm a;
	printf("Informe os minutos: ");
	scanf_s("%i", &a.minutos);

	int resultado = a.minutos / 60;
	int min = a.minutos - (resultado * 60);

	printf("O valor em horas e %i %i", resultado, min);
}
*/

/*void Ex39()
{
	struct pessoa

	{
		char nome[30];
		float alt;
		int peso;
		int cpf;
		int sexo[2];
	};

	int imc, pesq, resposta = 1, i = 0, quant = 0;
	struct pessoa P[50];
	while (resposta == 1)
		{
			printf("Digite o nome: \n");

			gets_s(P[i].nome);

			printf("Digite a sua altura: \n");

			scanf_s("%f", &P[i].alt);

			printf("Digite o seu peso: \n");

			scanf_s("%i", &P[i].peso);

			printf("Digite o seu cpf: \n");

			scanf_s("%i", &P[i].cpf);

			printf("Digite o seu sexo:\n 1-M \n 2-F \n");

			scanf_s("%i", &P[i].sexo);
			
			i++;
			quant = quant + 1;
			printf("Digite 1 para parar de inserir: ");
			scanf_s("%i", &resposta);
		} 

	printf("Digite o cpf a ser pesquisado");
	scanf_s("%i", &pesq);
	for (i = 0; i < quant; i++)
	{
		if (pesq == P[i].cpf)
		{
			imc = P[i].peso / (P[i].alt*P[i].alt);
			printf(P[i].nome);
			printf("\n O seu IMC eh: %i", imc);
			system("pause");
		}
		else
		{
			printf("Cpf não cadastrado\n");
		}
	}

}
*/

/*void Ex40()
{
	float valor, qnt;
	int codigo;


	do
	{

		printf("Informe o codigo: ");
		scanf_s("%i", &codigo);

		printf("Informe a quantidade: ");
		scanf_s("%f", &qnt);

		;



		switch (codigo)
		{
		case 1001:
			valor = 5.32 * qnt;
			break;
		case 1324:
			valor = 6.45 * qnt;
			break;
		case 6548:
			valor = 2.37 * qnt;
			break;
		case 987:
			valor = 5.32 * qnt;
			break;
		case 7623:
			valor = 6.45 * qnt;
			break;
		case -1:
			break;
		default:
			printf("Codigo invalido.");

		}
	} while (codigo != -1 || qnt != -1);

	printf("preço total:%.2f\n", valor);
}
*/






int main()
{
	//Ex1();
	//Ex2();
	//Ex3();
	//Ex4();
	//Ex5();
	//Ex6();
	//Ex7();
	//Ex8();
	//Ex9();
	//Ex10();
	//Ex11();
	//Ex12();
	//Ex13();
	//Ex14();
	//Ex15();
	//Ex16();
	//Ex17();
	//Ex18();
	//Ex19();
	//Ex20();
	//Ex21();
	//Ex22();
	//Ex23();
	//Ex24();
	//Ex25();
	//Ex26();
	//Ex27();
	//Ex28();
	//Ex29();
	//Ex30();
	//Ex31();
	//Ex32();
	//Ex33();
	//Ex34();
	//Ex35();
	//Ex36();
	//Ex37();
	//Ex38();
	//Ex39();
	//Ex40();
	

	system("pause");
    return 0;
}

