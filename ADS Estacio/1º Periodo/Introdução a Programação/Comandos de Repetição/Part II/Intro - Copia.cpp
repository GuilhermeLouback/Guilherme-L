#include<iostream>
#include <stdio.h>




int main()
{
int i, cont=0;
float nota, media, soma = 0;
for (i = 0; i < 4; i++){
printf("Digite uma nota:" );
scanf ("%f", &nota);
soma += nota;
}
media = soma / 4;
printf("Digite tudo de novo!" );
for (i = 0; i < 4; i++){
printf("Digite uma nota:" );
scanf ("%f", &nota);
if( nota > media )
cont++;
}
printf("Media = %f", media);
printf("%d notas acima" , cont);
return 0;
}


