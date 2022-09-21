#include<stdio.h>
#include<math.h>
		/* PAG 121
		
7. a) Considerando Pi = 3,14159, para cada opção
abaixo, escreva uma função que recebe como
parâmetro o raio de um círculo e:
? retorne seu diâmetro;
? retorne sua circunferência;
? retorne sua área;
? imprima o diâmetro, a circunferência e a área
chamando as funções anteriores.

b) Elabore um programa que leia do teclado o valor
do raio de dois círculos e, para cada círculo, chame a
função que imprime as informações.
c) Teste seu programa com os valores 1 e 3.*/

int calculo(vRaio) {
	float diametro,circunferencia,area,pi;
	pi = 3.14159;
	diametro = 2 * vRaio;
	circunferencia = 2 * pi * vRaio;
	area = pi * (vRaio * vRaio);
	printf("\nA circunferência é:%f \nO diametro:%f\nArea:%f",diametro,circunferencia,area);
}

int main(){
	printf("\nInforme o raio de uma circunferência: ");
	int Raio;
	scanf("%d", &vRaio);
	calculo(vRaio);
}
	
