//c)Tamanho 50 preenchidos automaticamente com números aleatórios.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = rand() % 200;
        printf("vetor[%d] = %d \n", i, vetor[i]);
    }

}
