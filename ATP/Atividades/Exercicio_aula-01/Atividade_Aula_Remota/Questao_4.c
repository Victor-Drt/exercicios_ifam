/*CABE�ALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo:Fa�a um algoritmo para Calcular o per�metro de um ret�ngulo*/

#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"");

    float base, altura, area_t;

    printf("Insira o tamanho da Base: \n");
    scanf("%f",&base);

    printf("Insira o tamanho da Altura: \n");
    scanf("%f",&altura);

    area_t = altura*base;

    printf("O tamanho da �rea �: %2.f",area_t);
}
