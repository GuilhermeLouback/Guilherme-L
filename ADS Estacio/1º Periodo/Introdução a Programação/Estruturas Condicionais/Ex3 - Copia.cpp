#include <stdio.h>
#include <math.h>


			/*PAG 53
/*3) Elabore uma fun��o que receba como
par�metros dois n�meros inteiros e imprima
uma mensagem se um for divis�vel pelo
outro.
Em seguida, fa�a um programa que leia
um n�mero inteiro do teclado e chame a
fun��o para verificar se este n�mero �
divis�vel por 2, por 3, por 5 e por 7
(ser�o 4 chamadas).
Fa�a um teste de mesa com o valor 14.*/

int numero(int a){
	if (a%2==0){
		printf("O Numero e divisivel por 2");
		}
		else{
			if (a%3==0){
				printf("O numero e divisivel por 3");
			}
			else{
				if (a%5==0){
					printf("O numeor e divisivel por 5");
				}
				else{
					if (a%7==0){
						printf("O numero e divisivel por 7");
					}
				}
			}
		}
	}


int main(){
	int x,z;
	printf("Digite um numero: ");
	scanf ("%d", &x);
	z = numero(x);
	
	
	return 0;
}
