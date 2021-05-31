/*e)Tamanho  ímpar. Preencher manualmente e verificar se é um vetor palíndromo.
 Pesquise sobre números palíndromo.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL,"");

  const tam = 5;
  int vetor[tam];
  int i, j, palindromo;

  for (i=0; i<tam; i++) {
    printf("Informe %2do. elemento de %d: ", (i+1), tam);
    scanf("%d", &vetor[i]);
  }

  i = 0; // posicoes iniciais do vetor
  j = (tam-1); // posicoes finais do vetor
  palindromo = 1; // flag que indicara se o vetor eh palindromo ou nao
  while ((i < j) && (palindromo == 1)) {
    if (vetor[i] != vetor[j])
       palindromo = 0; // nao eh palindromo
    else {
      i = i + 1;
      j = j - 1;
    }
  }

  if (palindromo == 1)
     printf("\n É um palindromo.");
  else printf("\nNão formam um palindromo.");
}
