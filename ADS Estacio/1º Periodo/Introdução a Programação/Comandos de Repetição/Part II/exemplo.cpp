//autor:Monitor Gabriel TadayoshiRodrigues Oka
//Data:25/05/2011
//Contato:oka.gabriel@gmail.com
#include<iostream>
#include <stdio.h>




var
vet:vetor[1.30] de inteiro
inter1,inter2,inter3,inter4,num,i,soma1,soma2,soma3,soma4:inteiro
media1,media2,media3,media4:real

inicio
inter1<-0
inter2<-0
inter3<-0
inter4<-0
soma1<-0
soma2<-0
soma3<-0
soma4<-0
i<-1
enquanto (i<=30) faca
   escreval("Digite um número")
   leia(num)
   se((num>=0)e(num<=100)) entao
      vet[i]<-num
      i<-i+1
   senao
      escreval("Número inválido")
   fimse
fimenquanto
para i de 1 ate 30 faca
   se((vet[i]>=0)e(vet[i]<=25))entao
      inter1<-inter1+1
      soma1<-soma1+vet[i]
   senao
      se((vet[i]>25)e(vet[i]<=50)) entao
         inter2<-inter2+1
         soma2<-soma2+vet[i]
      senao
         se((vet[i]>50)e(vet[i]<=75)) entao
            inter3<-inter3+1
            soma3<-soma3+vet[i]
         senao
            se((vet[i]>75)e(vet[i]<=100))entao
               inter4<-inter4+1
               soma4<-soma4+vet[i]
            fimse
         fimse
      fimse
   fimse
fimpara
escreval("O total de números nos intervalos é de: ",inter1," ",inter2," ",inter3," ",inter4," ",",respectivamente [0,25],(25,50],(50,75]e(75,100]")
media1<-soma1/inter1
media2<-soma2/inter2
media3<-soma3/inter3
media4<-soma4/inter4
escreva("A média aritmética dos elementos de cada intervalo é de :",media1," ",media2," ",media3," ",media4," respectivamente")
fimalgoritmo
