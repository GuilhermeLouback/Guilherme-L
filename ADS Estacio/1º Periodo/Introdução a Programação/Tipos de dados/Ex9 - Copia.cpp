#include<stdio.h>

/*9. Construa um programa que aplique um
desconto de 25% sobre o preço de um produto
recebido como entrada e imprima o valor
resultante. Verifique se o programa está
correto fazendo o teste de mesa. Use o valor
150.00 como entrada.*/

int main(){
	int desconto, preco, total;
	desconto = (25);
	printf("Qual valor do produto: ");
	scanf("%d", &preco);
	total = (preco/100)*desconto;
	total = preco - total;
	printf("O valor do produto com desconto e: %d", total);
	
	return 0;
}
