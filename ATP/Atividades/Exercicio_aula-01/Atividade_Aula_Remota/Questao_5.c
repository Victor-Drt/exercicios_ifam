/*CABEÇALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo:Faça um algoritmo para Calcular o preço de um produto de peso variável.*/

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

    printf("O valor total é de: R$ %f",total);
}
