#include<stdio.h>

/*6. Faça um programa que lê um valor de salário

mínimo e o salário de um funcionário. O programa
deve calcular e imprimir quantos salários mínimos
esse funcionário ganha.
Após fazer o programa, verifique se seu programa
está correto fazendo o teste de mesa com as
entradas 800.00 e 2030.40.*/

int main(){
	
	float salarioMin, salarioFun, salarioTotal;
	printf("Qual valor do salario minimo : ");
	scanf("%f", &salarioMin);
	printf("Salario do funcionario: ");
	scanf("%f", &salarioFun);
	salarioTotal = salarioMin/salarioFun;
	
	printf("O Funcionario recebe: %f salarios", salarioTotal);
	
	
	
	
	
	return 0;
}
