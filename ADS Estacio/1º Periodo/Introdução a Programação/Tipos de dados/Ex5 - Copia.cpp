#include<stdio.h>

/*5. -Faça um programa que lê uma temperatura em
graus Celsius e apresenta-a convertida em graus
Fahrenheit. A fórmula de conversão é: 

F = (9*C+160)/5  */

int main (){
	
	int c, f;
	printf("Qual temperatura em Celcius:  ");
	scanf("%d", &c);
	f = (9*c+160)/5;
	printf("O valor em Fahrenheit e: %d", f);

return 0;
}
