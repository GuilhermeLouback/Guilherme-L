#include<stdio.h>

/*6. Fa�a um programa que l� um valor de sal�rio

m�nimo e o sal�rio de um funcion�rio. O programa
deve calcular e imprimir quantos sal�rios m�nimos
esse funcion�rio ganha.
Ap�s fazer o programa, verifique se seu programa
est� correto fazendo o teste de mesa com as
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
