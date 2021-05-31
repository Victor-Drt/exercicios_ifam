#include <stdio.h>
#include <stdlib.h>
typedef struct Aviao{

    int capacidadePassageiros;
    float valor;
    float distanciaQuePercorre;

}
    NOVO_AVIAO;
    NOVO_AVIAO aviao1;

int main(void){

    aviao1.valor = 2255.75;
    aviao1.capacidadePassageiros = 100;
    aviao1.distanciaQuePercorre = 925.50;

    printf("Valor:R$ %f \n", aviao1.valor);
    printf("Capacidade: %d pessoas\n", aviao1.capacidadePassageiros);
    printf("Distancia que percorre: %f Km\n", aviao1.distanciaQuePercorre);

    return 0;

}

