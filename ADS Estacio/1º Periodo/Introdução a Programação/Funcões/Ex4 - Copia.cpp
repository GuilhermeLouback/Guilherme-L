#include<stdio.h>

/*				PAG 99

4. a) Elabore uma função que receba três valores
reais e retorne a média aritmética destes valores.
b) Em seguida, faça um programa (função
principal) que leia três valores do teclado e imprima
sua média, utilizando a função da letra a).
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
