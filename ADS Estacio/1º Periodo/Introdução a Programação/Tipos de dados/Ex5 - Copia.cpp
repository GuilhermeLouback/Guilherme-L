#include<stdio.h>

/*5. -Fa�a um programa que l� uma temperatura em
graus Celsius e apresenta-a convertida em graus
Fahrenheit. A f�rmula de convers�o �: 

F = (9*C+160)/5  */

int main (){
	
	int c, f;
	printf("Qual temperatura em Celcius:  ");
	scanf("%d", &c);
	f = (9*c+160)/5;
	printf("O valor em Fahrenheit e: %d", f);

return 0;
}
