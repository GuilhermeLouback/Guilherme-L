#include <stdio.h>

int main()
{
    int menor = 0;
    int vet[20];
    int indice=0;
    
    for(int i=0;i<20;i++){
        
        printf("digite o valor do vetor no indice %d",i);
        scanf("%d",&vet[i]);
        menor = vet[0];
        if(menor > vet[i])
        menor = vet[i];
        indice = i;
        
    }
    printf("menor é : %d e o indice é %d",menor,indice);
    
    
    return 0;
}

