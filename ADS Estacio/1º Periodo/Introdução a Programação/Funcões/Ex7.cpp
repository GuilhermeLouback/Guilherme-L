#include<stdio.h>
#include<math.h>
		/* PAG 121
		
7. a) Considerando Pi = 3,14159, para cada op��o
abaixo, escreva uma fun��o que recebe como
par�metro o raio de um c�rculo e:
? retorne seu di�metro;
? retorne sua circunfer�ncia;
? retorne sua �rea;
? imprima o di�metro, a circunfer�ncia e a �rea
chamando as fun��es anteriores.

b) Elabore um programa que leia do teclado o valor
do raio de dois c�rculos e, para cada c�rculo, chame a
fun��o que imprime as informa��es.
c) Teste seu programa com os valores 1 e 3.*/

int calculo(vRaio) {
	float diametro,circunferencia,area,pi;
	pi = 3.14159;
	diametro = 2 * vRaio;
	circunferencia = 2 * pi * vRaio;
	area = pi * (vRaio * vRaio);
	printf("\nA circunfer�ncia �:%f \nO diametro:%f\nArea:%f",diametro,circunferencia,area);
}

int main(){
	printf("\nInforme o raio de uma circunfer�ncia: ");
	int Raio;
	scanf("%d", &vRaio);
	calculo(vRaio);
}
	
