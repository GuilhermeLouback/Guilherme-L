/*a) Escreva uma fun��o que recebe um inteiro N como
par�metro e imprime uma linha contendo os n�meros
de 1 at� N. Por exemplo, se o valor do par�metro for 6,
a fun��o dever� imprimir: 1 2 3 4 5 6
b) Fa�a um programa para testar a fun��o, solicitando
que o usu�rio digite o valor de N.
c) Refa�a seu programa para que, ap�s o usu�rio
digitar o valor de N (por exemplo, 6), o programa
imprima o tri�ngulo:
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
