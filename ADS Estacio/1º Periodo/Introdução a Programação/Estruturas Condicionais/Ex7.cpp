#include <stdio.h>
#include <math.h>

		/*PAG 78

/*7) Elabore uma função que recebe como

parâmetro um inteiro representando um dia
da semana e imprime o seu respectivo
nome por extenso. Considere que o número
1 representa o domingo; 2, a segunda, etc.
Caso o número não corresponda a um dia
da semana, a função deve exibir a
mensagem “Dia da semana inválido".
Faça um programa para chamar a função.
Teste seu programa com um valor válido e
outro inválido.*/

int dia (int a){
switch (a)
{
case 1: printf("Segunda");
break;
case 2: printf ("Terca");
break;
case 3: printf ("Quarta");
break;
case 4: printf ("Quinta");
break;
case 5: printf ("Sexta");
break;
case 6: printf ("Sabado");
break;
case 7: printf ("Domingo");
break;
default: printf("Valor invalido");
}
return 0;
}


int main(){
	int x,z;
	printf("Digite um numero: ");
	scanf ("%d", &x);
	z = dia(x);
	return 0;
}
