/*CABE�ALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo:Fa�a um algoritmo para Calcular o pre�o de um produto de peso vari�vel.*/

#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"");

    float peso, preco, total;

    printf("Insira o peso em Kg: \n");
    scanf("%f",&peso);

    printf("Insira o valor por Kg: \n");
    scanf("%f",&preco);

    total = peso * preco;

    printf("O valor total � de: R$ %f",total);
}
