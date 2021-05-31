#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Definindo variaiveis
    int a = 6, b = 3;

    //Soma
    printf("A Soma de %d e %d é = %d", a, b, a+b);

    //Subtracao
    printf("\nA Subtração de %d e %d é = %d", a, b, a-b);

    //Multiplicação
    printf("\nA Multiplicação de %d e %d é = %d", a, b, a*b);

    //Divisao
    printf("\nA Divisão de %d e %d é = %d", a, b, a/b);

    //Resto da Divisao
    printf("\nO Resto da Divisão de %d e %d é = %d", a, b, a%b);

    //Valor Absoluto
    printf("\nO valor Absoluto de -3 = %d", abs(-3));
}
