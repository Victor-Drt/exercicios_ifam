#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    bool entrada1, entrada2;
    printf("Entrada 1: ");
    scanf("%i", &entrada1);
    printf("Entrada 2: ");
    scanf("%i", &entrada2);

    if(entrada1 && entrada2) {
        printf("AND %i, %i \n", entrada1, entrada2);
    }
    if(entrada1 || entrada2) {
        printf("OR %i, %i ", entrada1, entrada2);
    }
}
