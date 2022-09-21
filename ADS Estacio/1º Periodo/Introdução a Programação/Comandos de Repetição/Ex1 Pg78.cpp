/*Escreva uma função que recebe como parâmetro um
número inteiro n. A função deve ler n valores do teclado
e retornar quantos destes valores são negativos. Faça
também um programa principal que leia do teclado o
que for necessário para executar a chamada correta
desta função e imprimir seu resultado na tela.*/



#include <stdio.h>

int loop(int n){
  int numero;
  for(int i=0; i<n; i++)
  {
    scanf("%d", &numero);
    if(numero < 0) printf("O numero %d e negativo.\n", numero);
    if(numero > 0) printf("O numero %d e positivo.\n", numero);
  }
  return 0;
}

int main() {
  int olharLoop;
  printf("Quantos numeros quer verificar: ");
  scanf("%d", &olharLoop);
  loop(olharLoop);
  return 0;
}
