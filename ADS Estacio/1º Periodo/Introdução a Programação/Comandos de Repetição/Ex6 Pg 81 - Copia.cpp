/*Para controlar seus gastos mensais, Ana anota todas as suas
despesas. Assim, quando vai ao shopping, em cada loja que
entra, ela registra quantos itens comprou e qual o valor de
cada um dos itens. Fa�a um programa para ajud�-la. O
programa dever� ler o n�mero de itens comprados em cada
loja e o valor de cada um. O programa ser� encerrado
quando for informada uma quantidade negativa de itens.
DESAFIO: Altere o programa para imprimir o gasto total de Ana*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int meudinheiro,lojas,newsitem,itens,newsprice,preco,numloja,valorfinal;
	printf("Qual capital incial: ");
	scanf("%d",&meudinheiro);
	printf("Quantas lojas passou : ");
	scanf("%d",&lojas);
	itens = 0;
	preco = 0;
	newsitem = 0;
	newsprice = 0;
	numloja = lojas;
	valorfinal = 0;
	while (lojas > 0) 
	{
		printf("Itens que comprou na loja %d: ",lojas);
		scanf("%d",&newsitem);

		itens = itens + newsitem;
		lojas --;
	}
	while (itens > 0) 
	{
		printf("custo do item de numero %d: ",itens);
		scanf("%d",&preco);

		newsprice = preco + newsprice;
		itens--;
	}

	while (meudinheiro > newsprice)
	{
		valorfinal = meudinheiro - newsprice;
		break;
	}

	printf("Voce gastou um total de %d reais em produtos,comprando em %d lojas.\n",newsprice,numloja);
	printf("\nSeu novo saldo e de %d\n",valorfinal);
	return 0;
}
