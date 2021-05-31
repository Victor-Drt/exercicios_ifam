//Calculadora de Velocidade media.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"");
    float deltaS, s_zero, s_final, deltaT, t_zero, t_final, v_Media;

    printf("Insira a 'Posição inicial'(So) em metros: \n");
    scanf("%f",&s_zero);
    printf("Insira a 'Posição final'(S) em metros: \n");
    scanf("%f",&s_final);

    deltaS = s_final - s_zero;

    printf("Insira a 'tempo inicial'(To) em segundos: \n");
    scanf("%f",&t_zero);
    printf("Insira a 'Tempo final'(T) em segundos: \n");
    scanf("%f",&t_final);

    deltaT = t_final - t_zero;
    v_Media = deltaS / deltaT;

    printf("A Velocidade Media em Segundos é: %f m/s\nA Velocidade Media em Horas é: %f Km/h",v_Media, v_Media*3.6);
}

