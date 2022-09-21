#include <stdio.h>
#include <math.h>

			/*PAG 47
/*2) Faça uma função que receba como
parâmetro um número inteiro e imprima se
este número é par ou ímpar.
Em seguida, faça um programa que leia
um número inteiro do teclado e chame a
função.
Faça um teste de mesa com o valor 4 e
outro com o valor 5.*/

int numero(int a){
	if(a%2==0){
		printf("O numero e par");
	}
	else{
		printf("O numero e impar");
	}
}


int main(){
	int x,z;
	printf("Digite um numero: ");
	scanf ("%d", &x);
	z = numero(x);
	
	
	return 0;
}
