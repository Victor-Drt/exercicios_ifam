/*CABE�ALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo: Atividade � Exerc�cio2*/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"");

    float num1, num2, resultado;

    int opcao;

    printf("Insira o primeiro numero: ");
    scanf("%f",&num1);

    printf("Insira o segundo numero: ");
    scanf("%f",&num2);

    printf("Escolha a opera�ao aritmetica: \n1.+\n2.-\n3.*\n4./\nSua Escolha: ");
    scanf("%d",&opcao);

    if(opcao == 1){
        resultado = num1+num2;
        printf("O resultado �: %2.f",resultado);
    }if(opcao == 2){
        resultado = num1-num2;
        printf("O resultado �: %2.f",resultado);
    }if(opcao == 3){
        resultado = num1*num2;
        printf("O resultado �: %2.f",resultado);
    }if(opcao == 4){
        resultado = num1/num2;
        printf("O resultado �: %2.f",resultado);
    }else{
        printf("Op��o inv�lida!");
    }




}
