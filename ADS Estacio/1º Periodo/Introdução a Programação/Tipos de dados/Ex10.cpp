#include<stdio.h>

/*10. Construa um programa para ler do teclado um
intervalo de tempo em segundos, converter
para horas, minutos e segundos e imprimir o
resultado. Faça o teste de mesa para uma
entrada de 72000 segundos.*/

int main(){
	int segundos, minutos , horas;
	printf("Digite quantos segundos: ");
	scanf("%d", &segundos);
	
	minutos = segundos/60;
	horas = minutos/60;
	
	printf("Valor em minutos e: %d \nO valor em horas e: %d", minutos , horas);
	
	return 0;
}
