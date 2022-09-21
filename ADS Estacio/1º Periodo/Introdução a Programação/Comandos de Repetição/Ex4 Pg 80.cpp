/*Uma professora de matem�tica quer fazer um programa
para seus alunos estudarem a tabuada.
a) Escreva uma fun��o que sorteia dois n�meros entre 0 e
9 (use a fun��o rand() da biblioteca stdlib). A fun��o
deve pedir que o usu�rio digite o resultado da multiplica��o
dos n�meros sorteados. Enquanto o usu�rio n�o acertar, a
fun��o deve indicar que houve erro e pedir ao usu�rio que
tente novamente. Ao final, a fun��o deve imprimir uma
mensagem indicando o acerto.
b) Fa�a um programa que pe�a a um aluno que resolva 15
opera��es, chamando a fun��o acima.
DESAFIO: Refa�a a fun��o para que o usu�rio tenha at� 5
chances de acertar a multiplica��o. Assim, a repeti��o deve
terminar quando o usu�rio acertar ou quando as chances
acabarem. Ao final, se o usu�rio n�o conseguiu acertar,
indique o valor correto. Se ele conseguiu, parabenize-o.*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int calc(int x, int y){
    int resultado = x * y;
return resultado;
}


int main() {
int x, y, i;
bool verificar = false;
int erros = 4;
int acertos = 0;
srand(time(NULL));
  do {
      x = rand() % 10;
      y = rand() % 10;
      int res = calc(x,y);
      printf("Quanto e %d * %d? =", x, y);
      scanf("%d", &i);

      if(acertos < 15) {
        do{
            if(i == res) {
              printf("Voce acertou.");
              acertos += 1;
              break;
            }else if(i != res){
              erros -= 1;
              printf("Voce errou.");

              printf("Quanto e %d * %d? = ", x, y);
              scanf("%d", &i);
            }
        }while(erros != 0);
      };

      if(acertos == 15){ 
        printf("Parabens, voce venceu"); 
        verificar = true;
      }
      if(erros == 0) {
        printf("Voce errou, o resultado era: %d", res);
        break;
      };
  }while (!verificar);

 return 0;
}

