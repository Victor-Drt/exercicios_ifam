#include<stdlib.h>
#include<stdio.h>
/*b)Definir duas matrizes 10x10 de inteiros, preencher com
    números aleatórios, realizar a soma entre as duas matrizes
    e exibir o resultado
*/
void main(){
    int matriz1[10][10], matriz2[10][10], matrizResult[10][10];


    printf("=======MATRIZ 1=======\n");
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                matriz1[i][j] = rand() % 10;
                printf("%d ", matriz1[i][j]);
            }
            for ( int j = 0; j < 10; j++ ){
                if(j == 9){
                    printf("\n");
                }
            }
        }

       printf("\n=======MATRIZ 2=======\n");
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                matriz2[i][j] = rand() % 10;
                printf("%d ", matriz2[i][j]);
            }
            for ( int j = 0; j < 10; j++ ){
                if(j == 9){
                    printf("\n");
                }
            }
        }

        printf("\n=======MATRIZ RESULTADO=======\n");
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    matrizResult[i][j] = matriz1[i][j] + matriz2[i][j];
                    printf("%d ", matrizResult[i][j]);
                }
                for ( int j = 0; j < 10; j++ ){
                    if(j == 9){
                        printf("\n");
                    }
                }
            }






}
