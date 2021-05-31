//b)Tamanho 200 de números reais maiores que 800.

#include<stdio.h>

int main(){
    float vetor[200];
    int i = 0;

    while(i < 200){
        for(float j = 800.0; i < 200 ; j++){
            vetor[i] = j+0.3*j;
            printf("vetor[%d] = %f \n",i, vetor[i]);
            i++;
        }
    }
}
