/*Faça um programa que crie três vetores, preencha
dois deles com valores lidos do teclado e, ao final,
preencha o terceiro vetor armazenando, em cada
índice, a soma dos elementos com este mesmo
índice nos outros vetores.*/




#include <stdio.h>

int main()
{
    int vet1[10],vet2[10],vet3[10];
    
    for(int i=0;i<10;i++){
        printf("digite os valores do primeiro vetor");
        scanf("%d", &vet1[i]);
        
    }
    for(int i=0;i<10;i++){
        printf("digite os valores do segundo vetor");
        scanf("%d", &vet2[i]);
        
    }
    for(int i=0;i<10;i++){
       
        vet3[i]= vet2[i] + vet1[1];
        
    }
    for(int i=0;i<10;i++){
       
       printf("%d",vet3[i]);
        
    }
    
    
    return 0;
}
