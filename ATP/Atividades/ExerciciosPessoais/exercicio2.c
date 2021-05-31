#include <stdio.h>
#include<conio.h>
#include<locale.h>

main(){
    int quant_num, cont;

    printf("Insira a quantidade de repetiçôes: \n");
    scanf("%d",&quant_num);

    while(quant_num > 0){
        if(quant_num % 10 == 0){
            printf("\n");

            printf("Deseja continuar? Digite 0// ");
            scanf("%d",&cont);
            if(cont == 0){
                printf("1-");
            }else{
                return 0;
            }

        }

    }

}

