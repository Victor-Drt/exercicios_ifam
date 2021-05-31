/*CABEÇALHO DO ALGORITMO
Autor: Victor Duarte
Data:16-09-2020
Objetivo: Atividade – Exercício1*/

#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"");

    int senha, senha_padrao;
    senha_padrao = 40028922;


    printf("Insira a senha numerica: ");
    scanf("%d",&senha);

    if(senha == senha_padrao){
        printf("Login Aceito!");
    }else{
        printf("Login Falhou!");
    }

}
