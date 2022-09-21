#include<stdio.h>
#include<math.h>
	
			/*Desafio PAG 122*/
	
	/*Fa�a um programa para calcular quantas
latas de verniz ser�o necess�rias para cobrir um
deque de madeira. O usu�rio do programa
informar� a largura e o comprimento da superf�cie a
ser coberta e o programa dever� imprimir o n�mero
de latas necess�rias (valor inteiro), dado que cada
lata de verniz cobre at� 3 m2
de superf�cie. O
programa dever� ter no m�nimo 3 fun��es. Teste o
programa calculando o necess�rio para cobrir uma
superf�cie de 4.5 x 5m.
Observa��o: tente identificar as tarefas que poder�o
constituir diferentes fun��es e, para cada tarefa,
especifique os dados de entrada (par�metros)
necess�rios para sua execu��o e defina se esta
tarefa produzir� ou n�o um resultado (retorno).*/

float numeros(float a ,float b,float c){

   float retornaarea(float a ,float b){
       float area;
       area = (a * b)/3;
       return area;
   }
    void imprimeresultado(float a,float b){

        printf("� necessario %.0f latas",ceil(retornaarea(a,b)));
    }


int main()
{
     float largura,altura,area;
     scanf("%f%f",&largura,&altura);

    imprimeresultado(largura,altura);

    return 0;
}
