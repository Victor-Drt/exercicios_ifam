#include <stdio.h>
#include<conio.h>
#include<locale.h>

main(){
    int quant_num;

    printf("Insira a quantidade de numeros: ");
    scanf("%d",&quant_num);

    for(int i = 0; i< quant_num; i++){
        if(i % 10 == 0){
            printf("\n");
        }
        printf("1");
    }

}
