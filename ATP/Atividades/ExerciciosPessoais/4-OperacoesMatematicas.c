#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Definindo variaiveis
    int a = 6, b = 3;

    //Soma
    printf("A Soma de %d e %d � = %d", a, b, a+b);

    //Subtracao
    printf("\nA Subtra��o de %d e %d � = %d", a, b, a-b);

    //Multiplica��o
    printf("\nA Multiplica��o de %d e %d � = %d", a, b, a*b);

    //Divisao
    printf("\nA Divis�o de %d e %d � = %d", a, b, a/b);

    //Resto da Divisao
    printf("\nO Resto da Divis�o de %d e %d � = %d", a, b, a%b);

    //Valor Absoluto
    printf("\nO valor Absoluto de -3 = %d", abs(-3));
}
