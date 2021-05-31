//a)Tamanho 500 de números maiores de 600.

#include<stdio.h>

int main(){
    int vetor[500];
    int i = 0;

    while(i < 500){
        for(int j = 601; j < 1101 ; j++){
            vetor[i] = j;
            printf("vetor[%d] = %d \n",i, vetor[i]);
            i++;
        }
    }
}
