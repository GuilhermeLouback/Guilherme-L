#include<stdio.h>


/*			PAG 99

3. a) Escreva uma fun��o que recebe dois n�meros
inteiros e imprime a soma, o produto, a diferen�a, o
quociente e o resto entre esses dois n�meros.
b) Fa�a um programa em C (fun��o principal) que
leia dois inteiros do teclado e chame a fun��o da
letra a).
c) Teste seu programa com os valores 11 e 3. */

int numeros (int a, int b){
	int soma;
		soma = a+b;
	int produto;
		produto = a*b;
	int diferenca;
		diferenca = a-b;
	float qct;
		qct = a/b;
	float resto;	
		resto = a%b;
	printf("Soma: %d", soma);
	printf("\nProduto: %d", produto);
	printf("\nDiferenca: %d", diferenca);
	printf("\nQuociente:  %f", qct);
	printf("\nResto: %f", resto);
	return 0;
}

	int main(){
		int x,y,z;
		printf("Digite dois Numeros: ");
		scanf("%d %d", &x, &y);
		z= numeros(x,y);
		
		return 0;
	}

