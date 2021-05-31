/*CABEÇALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo: Atividade – Exercício3*/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    char produto[25], tipoProduto[25];
    float preco_quilo, peso, total_quilo;
    float preco_unit, quantidade, total_unit;

    printf(" Digite o nome do produto: ");
    gets(produto); /* Le string produto*/

    printf("\n Digite o tipo de produto ( unit ou peso)?: ");
    gets(tipoProduto); //* Lê string ctipoProduto

    printf("\n \n As strings lidas sao \n %s \n %s", produto, tipoProduto ); // Imprime as strings

    if(tipoProduto == "unit"){
        printf("\n \n Tipo Unitário: %s ", tipoProduto ); /* Imprime as strings se for do tipo peso unitário*/
        printf("\n\n Qual o valor unitario? ");
        scanf("%f",&preco_unit);

        printf("\n\n qual a quantidade : ");
        scanf("%f",&quantidade);

        total_unit = preco_unit*quantidade;

        printf("O valor total a ser pago é: %f", total_unit);

    }else{  //Produto em peso
        printf("\n \n Tipo peso variável: %s ", tipoProduto ); /* Imprime as strings se for do tipo peso variável*/

        printf("\n \n Qual o preço do quilo? ");
        scanf("%f",&preco_quilo);

        printf("\n\n qual o peso do produto em Kg: ");
        scanf("%f",&peso);

        total_quilo = preco_quilo*peso;

        printf("O valor total a ser pago é: %f", total_quilo);
    }
    return;
}
