Algoritmo "TimeVolei"
//Ler a idade e sexo de 5 pessoas e exibir as mensagens �time infantil feminino
//at� 15 anos�, �time juvenil feminino entre 15 a 21 anos�, �time m�ster feminino
//a partir de 40 anos�, �time infantil masculino at� 15 anos�, �time juvenil
//masculino entre 15 a 21 anos� e �time m�ster masculino a partir de 40 anos�.}
Var
   // Se��o de Declara��es das vari�veis
   idade:vetor[1..5] de inteiro
   sex:vetor[1..5] de caractere
   i:inteiro
   modalidade:caractere
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   para i de 1 ate 5 faca
      escreval("Insira a idade: ")
      leia(idade[i])
      escreval("Insira o sexo: (M ou F)")
      leia(sex[i])
      escreval("")

      se ((idade[i]>21) e (idade[i]<40)) entao
         escreval("N�o h� modalidades")
      fimse

      se (idade[i]<=15) e (sex[i]="M") entao
         escreval("time infantil masculino!")
      fimse
      se (idade[i]<=15) e (sex[i]="F") entao
         escreval("time infantil feminino!")
      fimse
      
      se ((idade[i]>=16) e (idade[i]<=21)) e (sex[i]="M") entao
         escreval("time juvenil masculino!")
      fimse
      se ((idade[i]>=16) e (idade[i]<=21)) e (sex[i]="F") entao
         escreval("time juvenil feminino!")
      fimse
      
      se (idade[i]>=40) e (sex[i]="M") entao
         escreval("time M�ster masculino!")
      fimse
      se (idade[i]>=40) e (sex[i]="F") entao
         escreval("time M�ster feminino!")
      fimse

   fimpara

Fimalgoritmo