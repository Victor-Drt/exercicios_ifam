/*CABEÇALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo:Faça um algoritmo para Calcular a idade de uma pessoa.*/

#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"");

    int ano, mes, dia, idade, ano_hj, mes_hj, dia_hj;

    ano_hj = 2020;
    mes_hj = 9;
    dia_hj = 16;


    printf("Insira o ano de Nascimento:");
    scanf("%d",&ano);

    printf("Insira o mes de Nascimento:");
    scanf("%d",&mes);

    printf("Insira o dia de Nascimento:");
    scanf("%d",&dia);

    idade = (ano_hj - ano);

    if(mes_hj <= mes){
        if(dia_hj <= dia){
            idade = idade - 1;
            printf("A sua idade é: %d", idade);
        }
    }else{
        printf("A sua idade é: %d", idade);
    }


}
