#include<stdio.h>
#include<math.h>

/*					PAG 120 

6. Considerando a f�rmula para o c�lculo da
dist�ncia entre dois pontos (x1, y1) e (x2, y2):
a) Escreva uma fun��o que receba como
par�metros as coordenadas de dois pontos e retorne
a dist�ncia entre eles.
b) Escreva um programa em C (fun��o principal) que
capture do teclado as coordenadas dos 3 v�rtices de
um tri�ngulo, calcule e imprima o per�metro deste
tri�ngulo, chamando a fun��o anterior.
c) Teste seu programa, simulando sua execu��o
com as seguintes coordenadas: (4,1), (1,1), (4,5).*/


float pontos(float x1,float y1 , float x2, float y2,float z1,float z2){
	
	
	return sqrt( pow(x1 - y1,2) + pow(x2 - y2, 2)) + sqrt( pow(y1 - z1,2) + pow(y2 - z2, 2));
	
}

int main(){
	float x1,x2,y1,y2,z1,z2;
	printf("Digite os pontos de um triangulo: ");
	scanf("%f%f%f%f%f%f",&x1,&x2,&y1,&y2,&z1,&z2);
	
	printf("O perimetro do triangulo e %.2f",pontos(x1,y1,x2,y2,z1,z2));
	
	
}
