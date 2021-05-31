#include <stdio.h>
#include <stdlib.h>
typedef struct Computador{

    int num_Tamanho;
    int modelo;
    float valor;

}
    NOVO_RELOGIO;
    NOVO_RELOGIO relogio1;

int main(void){

    relogio1.num_Tamanho = 4;
    relogio1.modelo = 8;
    relogio1.valor = 1050.25;

    printf("Numero Tamanho: %d\n", relogio1.num_Tamanho);
    printf("numero do Modelo: %d\n", relogio1.modelo);
    printf("Valor:R$ %f", relogio1.valor);

    return 0;

}
