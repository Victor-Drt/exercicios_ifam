#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*programa 1. exibir 4 menus de opções (1= Menu atualizar,
2= listar, 3=remover, 4=sair). Exibir este menu enquanto for digitado
um numero entre 1 e 3. Se for digitado o numero 4 tem que sair do
algoritmo.*/

main(){
    int opcao;
    while(opcao != 4){
        printf("Escolha a opçao: \n1.ATUALIZAR MENU\n2.LISTAR\n3.REMOVER\n4.SAIR DO MENU\n");
        scanf("%d",&opcao);
    }
}
