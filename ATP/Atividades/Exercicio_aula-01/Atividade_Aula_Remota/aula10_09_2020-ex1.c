/*CABEÇALHO DO ALGORITMO
Autor: Victor Duarte
Data:10-09-2020
Objetivo: desxriçao de uma questão
*/

/* DIRETIVAS DE COMPILAÇÃO */

#include<stdio.h>
#include<conio.h>


/* PROGRAMA PRINCIPAL */
main(){
/* tudo sera executado*/
int idade;
printf("Algoritmo com entrada e saida de dados \n");

printf("\n Qual eh a sua idade: ");

scanf("\n %d", &idade); /* & = armazenar o conteudo na variavel*/

printf("\n Voce tem %d anos de idade ",idade);

}


/*comando aqui fora do main(), esses comandos nao sera executados*/
