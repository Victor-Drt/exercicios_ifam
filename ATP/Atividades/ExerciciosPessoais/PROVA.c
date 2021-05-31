#include <stdio.h>

int main() {
    char operacao;
    float num1, num2;

       printf("Digite a operacao (+ ou -): ");
       scanf("%s", &operacao);

       printf("Digite o PRIMEIRO numero: ");
       scanf("%f", &num1);

       printf("Digite o SEGUNDO numero: ");
       scanf("%f", &num2);

      if(operacao == '+') {
            printf("SOMA = %f + %f = %f", num1, num2, num1+num2);
      }else{
            printf("SUBTRAIR = %f - %f = %f", num1, num2, num1-num2);
      }

}
