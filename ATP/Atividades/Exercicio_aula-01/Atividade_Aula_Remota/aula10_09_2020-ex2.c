/*CABE�ALHO DO ALGORITMO
Autor: Victor Duarte
Data:10-09-2020
Objetivo: desxri�ao de uma quest�o
*/

/* DIRETIVAS DE COMPILA��O */

#include<stdio.h>
#include<conio.h>


/* PROGRAMA PRINCIPAL */
main(){
/* tudo sera executado*/
float a, b, media;

printf("Insira a primeira nota: ");
scanf("%f", &a);

printf("Insira a segunda nota: ");
scanf("%f", &b);

media = (a+b)/2;

printf("A media eh: %.2f", media);


}


/*comando aqui fora do main(), esses comandos nao sera executados*/
