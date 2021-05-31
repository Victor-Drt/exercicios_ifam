#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){

    //Permite usar Acento
    setlocale(LC_ALL,"");

    printf("Olá Mundo!");

    //Lendo valor inteiro
    int a = 50;
    printf("\nO valor de a é = %d\n", a);
    scanf("%d",&a);
    printf("\nO valor de a mudou para = %d", a);

    //Lendo valor float
    float b = 5.5;
    printf("\nO valor de b é = %f\n", b);
    scanf("%f",&b);
    printf("\nO valor de b mudou para = %f", b);

    //Lendo valor char
    char c = 'T';
    printf("\nO valor de c é = %c\n", c);
    fflush(stdin);
    scanf("%c",&c);
    printf("\nO valor de c mudou para = %c", c);
}
