#include<stdlib.h>
#include<stdio.h>

/*Definir uma matriz 5x5 de inteiros, solicitar do usuário que
    digite a quantidade de elementos, e preencher automaticamente
    da seguinte forma. Se o usuário digitar 11:*/

void main(){
    int matriz[5][5], valorUser;
    int limite = 1;

    printf("Insira um valor de 1 a 25: ");
    scanf("%d",&valorUser);

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(limite <= valorUser){
                matriz[i][j] = limite;
                limite++;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
