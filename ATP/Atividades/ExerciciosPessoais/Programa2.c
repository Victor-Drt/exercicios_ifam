#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*programa2. alterar o programa 1 para ele exibir as seguintes
mensagens: a) se opção for igual a 1 mostrar "Atualizando
sistema"; b) se opção for igual a 2 mostrar "Listando conteúdo
do sistema"; c) se opção for igual a 3 mostrar "Removendo conteúdo do sistema"; d) se opção for igual a 4 mostrar "Saindo do sistema";  */
main(){
    int opcao;
    while(opcao != 4){
        printf("Escolha a opçao: \n1.ATUALIZAR MENU\n2.LISTAR\n3.REMOVER\n4.SAIR DO MENU\n");
        scanf("%d",&opcao);

        if(opcao == 1){
            printf("ATUALIZANDO SISTEMA...");
        }else if(opcao == 2){
            printf("LISTANDO CONTEUDO...");
        }else if(opcao == 3){
            printf("REMOVENDO CONTEUDO DO SISTEMA...");
        }else{
            printf("SAINDO...");
        }
    }
}
