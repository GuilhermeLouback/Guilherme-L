#include<stdio.h>

/*DESAFIO: O programa abaixo (embora pareça inútil
para um programador iniciante) executa uma tarefa
bastante comum em algoritmos mais avançados.

Responda: é possível inverter o conteúdo das duas
variáveis sem utilizar a variável auxiliar? Justifique.

int main() {
int valor1,valor2,auxiliar;
printf("Digite os valores:");
scanf("%d%d",&valor1,&valor2);
auxiliar = valor1;
valor1 = valor2;
valor2 = auxiliar;
printf("Valor 1: %d\n",valor1);
printf("Valor 2: %d\n",valor2);
return 0;
}*/

Sim, Somente declarando a variavel Valor2=Valor1, pois a auxiliar passa a receber o valor de "Valor1".

