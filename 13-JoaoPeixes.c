#include<stdio.h>
#include<stdlib.h>

/*Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule o excesso.
Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.*/

int main()
{
	float pesoPeixe, excesso, multa;
	
	printf("Qual e o peso de todos os peixes?\n");
	scanf("%f",&pesoPeixe);
	if(pesoPeixe > 50)
	{
		excesso = pesoPeixe - 50;
		multa = excesso * 4;
		printf("O valor que deve ser da multa que deve ser pago e de R$ %.2f.",multa);
	}
	else
	{
		printf("Voce nao precisa pagar multa.");
	}
}
