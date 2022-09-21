#include<stdio.h>

/*8. Reescreva o
programa ao lado
usando apenas
duas variáveis.

int main() {
float lado1,lado2,lado3;
float perimetro;
printf("TRIANGULO\n");
printf("Digite os lados:");
scanf("%f%f%f",&lado1,
&lado2,&lado3);
perimetro=lado1+lado2+lado3;
printf("Perimetro:%f",perimetro);
return 0;
}*/

int main() {
	
	int a,b;
	printf("Digite o valor de dos lados de um triangulo : ");
	scanf("%d %d",&a ,&b);
	a = a+b;
	printf("Digite o valor do ultimo lado do triangulo : ");
	scanf("%d", &b);
	a = a+b;
	printf("Perimetro do triangulo e igual a: %d", a);
	
return 0;
}
