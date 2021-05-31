Algoritmo "TimeVolei"
//Ler a idade e sexo de 5 pessoas e exibir as mensagens “time infantil feminino
//até 15 anos”, “time juvenil feminino entre 15 a 21 anos”, “time máster feminino
//a partir de 40 anos”, “time infantil masculino até 15 anos”, “time juvenil
//masculino entre 15 a 21 anos” e “time máster masculino a partir de 40 anos”.}
Var
   // Seção de Declarações das variáveis
   idade:vetor[1..5] de inteiro
   sex:vetor[1..5] de caractere
   i:inteiro
   modalidade:caractere
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   para i de 1 ate 5 faca
      escreval("Insira a idade: ")
      leia(idade[i])
      escreval("Insira o sexo: (M ou F)")
      leia(sex[i])
      escreval("")

      se ((idade[i]>21) e (idade[i]<40)) entao
         escreval("Não há modalidades")
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
         escreval("time Máster masculino!")
      fimse
      se (idade[i]>=40) e (sex[i]="F") entao
         escreval("time Máster feminino!")
      fimse

   fimpara

Fimalgoritmo