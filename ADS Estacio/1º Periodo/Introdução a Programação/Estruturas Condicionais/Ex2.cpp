#include <stdio.h>
#include <math.h>

			/*PAG 47
/*2) Fa�a uma fun��o que receba como
par�metro um n�mero inteiro e imprima se
este n�mero � par ou �mpar.
Em seguida, fa�a um programa que leia
um n�mero inteiro do teclado e chame a
fun��o.
Fa�a um teste de mesa com o valor 4 e
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
