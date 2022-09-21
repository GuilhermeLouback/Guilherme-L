/*Fa�a uma fun��o que receba um valor n e retorne o
seu fatorial. Fa�a um programa para testar sua fun��o.
Teste seu programa com o valor:
4*/


#include <stdio.h>

int calcfat(int n) {
    int fatorial = n;
    for (int i = n - 1; i > 1; i--)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main(){
    int n;
    printf("Digite um n�mero ");
    scanf("%d", &n);
    int fatorial = calcfat(n);
    printf("Fatorial de %d = %d", n, fatorial);
    return 0;
}
