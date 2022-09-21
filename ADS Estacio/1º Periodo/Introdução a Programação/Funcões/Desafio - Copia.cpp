#include<stdio.h>
#include<math.h>
	
			/*Desafio PAG 122*/
	
	/*Faça um programa para calcular quantas
latas de verniz serão necessárias para cobrir um
deque de madeira. O usuário do programa
informará a largura e o comprimento da superfície a
ser coberta e o programa deverá imprimir o número
de latas necessárias (valor inteiro), dado que cada
lata de verniz cobre até 3 m2
de superfície. O
programa deverá ter no mínimo 3 funções. Teste o
programa calculando o necessário para cobrir uma
superfície de 4.5 x 5m.
Observação: tente identificar as tarefas que poderão
constituir diferentes funções e, para cada tarefa,
especifique os dados de entrada (parâmetros)
necessários para sua execução e defina se esta
tarefa produzirá ou não um resultado (retorno).*/

float numeros(float a ,float b,float c){

   float retornaarea(float a ,float b){
       float area;
       area = (a * b)/3;
       return area;
   }
    void imprimeresultado(float a,float b){

        printf("É necessario %.0f latas",ceil(retornaarea(a,b)));
    }


int main()
{
     float largura,altura,area;
     scanf("%f%f",&largura,&altura);

    imprimeresultado(largura,altura);

    return 0;
}
