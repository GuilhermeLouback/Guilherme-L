/*Escreva uma função que retorne o valor total a ser
pago em uma compra de supermercado. A função deve
ler a quantidade e o preço unitário de cada produto,
atualizando o subtotal a cada iteração do laço.
Considere que a compra será encerrada quando for
digitado um valor menor ou igual a zero para a
quantidade de um produto.
Faça um programa para chamar e imprimir o resultado
sua função.
Teste seu programa com a sequência:
1 4.02 3 7.56 1 5.3 -4
ou, dependendo de sua implementação,
1 4.02 3 7.56 1 5.3 -4 2.0*/

#include <stdio.h>

float TotalP()
{
    float t = 0;
    float val;
    int qt;
    printf("Quantidade ");
    scanf("%d", &qt);
    printf("Preço: ");
    scanf("%f", &val);
    
    
    while (qt > 0)
    {
        t += val*qt;
        
        printf("Quantidade ");
        scanf("%d", &qt);
        printf("Preço: ");
        scanf("%f", &val);
    }
    
    return t;
}

int main()
{
    printf("Total a pagar: R$%f", TotalP());

    return 0;
}

