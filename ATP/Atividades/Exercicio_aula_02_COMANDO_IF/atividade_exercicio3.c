/*CABE�ALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo: Atividade � Exerc�cio3*/

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
    gets(tipoProduto); //* L� string ctipoProduto

    printf("\n \n As strings lidas sao \n %s \n %s", produto, tipoProduto ); // Imprime as strings

    if(tipoProduto == "unit"){
        printf("\n \n Tipo Unit�rio: %s ", tipoProduto ); /* Imprime as strings se for do tipo peso unit�rio*/
        printf("\n\n Qual o valor unitario? ");
        scanf("%f",&preco_unit);

        printf("\n\n qual a quantidade : ");
        scanf("%f",&quantidade);

        total_unit = preco_unit*quantidade;

        printf("O valor total a ser pago �: %f", total_unit);

    }else{  //Produto em peso
        printf("\n \n Tipo peso vari�vel: %s ", tipoProduto ); /* Imprime as strings se for do tipo peso vari�vel*/

        printf("\n \n Qual o pre�o do quilo? ");
        scanf("%f",&preco_quilo);

        printf("\n\n qual o peso do produto em Kg: ");
        scanf("%f",&peso);

        total_quilo = preco_quilo*peso;

        printf("O valor total a ser pago �: %f", total_quilo);
    }
    return;
}
