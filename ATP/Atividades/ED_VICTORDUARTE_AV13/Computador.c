#include <stdio.h>
#include <stdlib.h>
typedef struct Computador{

    int num_Processadores;
    int ram_Memoria;
    int versao_windows;

}
    NOVO_PC;
    NOVO_PC pcGamer1;

int main(void){

    pcGamer1.num_Processadores = 4;
    pcGamer1.ram_Memoria = 8;
    pcGamer1.versao_windows = 10;

    printf("Numero de Processadores: %d\n", pcGamer1.num_Processadores);
    printf("RAM: %d\n", pcGamer1.ram_Memoria);
    printf("Versao Windows: %d", pcGamer1.versao_windows);

    return 0;

}
