/*a) Escreva uma função que recebe um inteiro N como
parâmetro e imprime uma linha contendo os números
de 1 até N. Por exemplo, se o valor do parâmetro for 6,
a função deverá imprimir: 1 2 3 4 5 6
b) Faça um programa para testar a função, solicitando
que o usuário digite o valor de N.
c) Refaça seu programa para que, após o usuário
digitar o valor de N (por exemplo, 6), o programa
imprima o triângulo:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6*/

#include <stdio.h>

int imprimeN(int n){
  int cont = 1;
  
    for(int i=1; i <= n; i++){
      for(int j=1; j <= i; j++){
        printf("%d", j);
      }
      printf("\n");
    }

  return 0;
}

int main(void) {
  int n;
  printf("Digite um valor para N: ");
  scanf("%d", &n);
  imprimeN(n);
  return 0;

}
