#include<stdlib.h>
#include<stdio.h>
//a)Definir uma matriz 50x50 de inteiros, preencher com números sequenciais de 0 a 50 e exibir o resultado.

void main(){
    int matriz[50][50];

    for ( int i = 0; i < 50; i++ ){
        for ( int j=0; j < 50; j++ ){
            matriz[i][j] = i;
        }
    }

    for ( int j = 0; j < 50; j++ ){
            if(j == 49){
                printf("\n");
            }
        for ( int i = 0; i < 50; i++ ){
            printf("%d ", i);
        }
    }
}
