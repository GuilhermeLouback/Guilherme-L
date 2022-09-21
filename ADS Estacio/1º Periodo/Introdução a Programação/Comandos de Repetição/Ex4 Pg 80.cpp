/*Uma professora de matemática quer fazer um programa
para seus alunos estudarem a tabuada.
a) Escreva uma função que sorteia dois números entre 0 e
9 (use a função rand() da biblioteca stdlib). A função
deve pedir que o usuário digite o resultado da multiplicação
dos números sorteados. Enquanto o usuário não acertar, a
função deve indicar que houve erro e pedir ao usuário que
tente novamente. Ao final, a função deve imprimir uma
mensagem indicando o acerto.
b) Faça um programa que peça a um aluno que resolva 15
operações, chamando a função acima.
DESAFIO: Refaça a função para que o usuário tenha até 5
chances de acertar a multiplicação. Assim, a repetição deve
terminar quando o usuário acertar ou quando as chances
acabarem. Ao final, se o usuário não conseguiu acertar,
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

