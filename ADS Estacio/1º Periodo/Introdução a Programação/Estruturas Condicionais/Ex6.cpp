#include <stdio.h>
#include <math.h>

			/*PAG 65

/*6) Elabore uma função que receba como

parâmetro a idade de uma pessoa (inteiro) e
imprima:
se idade < 13: “Criança”;
se 13 = idade < 20: “Adolescente”;
se 20 = idade < 65: “Adulto”; e,
se idade = 65: “Idoso”.
Para fazer o programa, combine o uso de 3
pares de if-else.
Faça um programa que leia do teclado a idade
da pessoa e imprima a mensagem.
Teste com o valor 15 e com o valor 70.*/


int idade(int a){
	if (a<13){
	printf("Crianca");
	}
	else {
		if(a>=13 && a<=19){
		printf("Adolescente");
		}
		else{
			if(a>=20 && a<=65){
				printf("Adulto");
			}
			else{
				if(a>=66){
					printf("Idoso");
				}
			}
		}
	}
}

int main(){
	int x,z;
	printf("Digite um numero: ");
	scanf ("%d", &x);
	z = idade(x);
	
	return 0;
}
