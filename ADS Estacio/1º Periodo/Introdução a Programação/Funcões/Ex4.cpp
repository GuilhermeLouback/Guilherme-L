#include<stdio.h>

/*				PAG 99

4. a) Elabore uma fun��o que receba tr�s valores
reais e retorne a m�dia aritm�tica destes valores.
b) Em seguida, fa�a um programa (fun��o
principal) que leia tr�s valores do teclado e imprima
sua m�dia, utilizando a fun��o da letra a).
c) Teste seu programa com os valores 2, 6 e 7.*/

float numeros (float a, float b, float c){
	float media;
	media = (a + b + c)/3;
	return media;
}

int main(){
	float x,y,z, k;
	printf("Digite 3 numeros : ");
	scanf ("%f%f%f", &x, &y, &z);
	
	k=numeros(x,y,z);
	printf("A media e: %.2f",k);

	
	return 0; 
	
}
