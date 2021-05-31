/* d) Tamanho 25 de inteiros.
    O usuário irá digitar a posição e um valor inteiro.
    O algoritmo terá que preencher os números anteriores e posteriores.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int vetor[25], valor_fix, valor, posic_fix, posic;
    int inc = 1;

    printf("Insira a posiçao entre 0 e 24: ");
    scanf("%d",&posic_fix);
    posic = posic_fix;

    if(posic >= 0 && posic <= 24){
        printf("Insira o valor: ");
        scanf("%d",&valor_fix);

        valor = valor_fix;

        printf("Antecessores: ");
        for(int i = 0; i < posic; i++ ){
            vetor[i] = valor-inc;
            printf("%d ", vetor[i]);
            inc++;
        }

        inc = 1;
        printf("\nPosteriores: ");
        for(int j = 24; j > posic_fix; j-- ){
            vetor[j] = valor_fix+inc;
            printf("%d ", vetor[j]);
            inc++;
        }

    }else{
        printf("Posicao fora do Vetor...");
    }

}
