#include <stdio.h>
#include <stdlib.h>
typedef struct Celular{

    int ddd;
    float preco;
    int imei;

}
    NOVO_CELULAR;
    NOVO_CELULAR celular1;

int main(void){

    celular1.preco = 2255.75;
    celular1.imei = 5656598;
    celular1.ddd = 92;

    printf("DDD: %d \n", celular1.ddd);
    printf("Preço:R$ %f \n", celular1.preco);
    printf("IMEI: %f \n", celular1.imei);

    return 0;

}
