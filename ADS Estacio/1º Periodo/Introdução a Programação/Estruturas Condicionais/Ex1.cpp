#include <stdio.h>
#include <math.h>
					/*PAG23
/*1) Indique quais variáveis recebem valor 0, assumindo que
diaSemana tem valor 2 e hora tem valor 10? Tente
identificar as diferenças sutis entre as expressões.
ocupado1 = (diaSemana == 2 || diaSemana == 5)
&& (hora >= 14 && hora < 16)
ocupado2 = diaSemana == 2 || (diaSemana == 5
&& (hora >= 14 && hora < 16))
ocupado3 = (diaSemana == 2 ||(diaSemana == 5
&& hora >= 14)) && hora < 16
ocupado4 = ((diaSemana == 2 || diaSemana == 5)
&& hora >= 14) && hora < 16
DESAFIO: Elabore uma expressão que indique que
você está ocupado nas 2as até às 16h, nas 5as o dia
inteiro e nos outros dias após às 14h.*/

int main(){
	
	
	
	return 0;
}
