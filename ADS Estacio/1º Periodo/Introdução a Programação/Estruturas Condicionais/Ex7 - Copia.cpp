#include <stdio.h>
#include <math.h>

		/*PAG 78

/*7) Elabore uma fun��o que recebe como

par�metro um inteiro representando um dia
da semana e imprime o seu respectivo
nome por extenso. Considere que o n�mero
1 representa o domingo; 2, a segunda, etc.
Caso o n�mero n�o corresponda a um dia
da semana, a fun��o deve exibir a
mensagem �Dia da semana inv�lido".
Fa�a um programa para chamar a fun��o.
Teste seu programa com um valor v�lido e
outro inv�lido.*/

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
