#include <stdio.h>
#include <stdlib.h>
typedef struct Carro{

    float velocidadeMax;
    float preco;
    int anoCarro;

}
    NOVO_CARRO;
    NOVO_CARRO carro1;

int main(void){

    carro1.preco = 15000.75;
    carro1.anoCarro = 2015;
    carro1.velocidadeMax = 120.0;

    printf("Ano do veiculo: %d \n", carro1.anoCarro);
    printf("Preço:R$ %f \n", carro1.preco);
    printf("velocidade Maxima: : %f \n", carro1.velocidadeMax);

    return 0;

}
