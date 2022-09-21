/*Escreva uma fun��o que retorne o valor total a ser
pago em uma compra de supermercado. A fun��o deve
ler a quantidade e o pre�o unit�rio de cada produto,
atualizando o subtotal a cada itera��o do la�o.
Considere que a compra ser� encerrada quando for
digitado um valor menor ou igual a zero para a
quantidade de um produto.
Fa�a um programa para chamar e imprimir o resultado
sua fun��o.
Teste seu programa com a sequ�ncia:
1 4.02 3 7.56 1 5.3 -4
ou, dependendo de sua implementa��o,
1 4.02 3 7.56 1 5.3 -4 2.0*/

#include <stdio.h>

float TotalP()
{
    float t = 0;
    float val;
    int qt;
    printf("Quantidade ");
    scanf("%d", &qt);
    printf("Pre�o: ");
    scanf("%f", &val);
    
    
    while (qt > 0)
    {
        t += val*qt;
        
        printf("Quantidade ");
        scanf("%d", &qt);
        printf("Pre�o: ");
        scanf("%f", &val);
    }
    
    return t;
}

int main()
{
    printf("Total a pagar: R$%f", TotalP());

    return 0;
}

