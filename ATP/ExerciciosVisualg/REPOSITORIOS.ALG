Algoritmo "Repositorio"

Var
quantidade_agua,capacidade_repositorio1:inteiro
capacidade_repositorio2,capacidade_repositorio3:inteiro
preenchido:inteiro
excedente:inteiro

Inicio
   escrevaL("Insira a quantidade de litros de água: ")
   leia(quantidade_agua)

   escreva("Insira a capacidade de água do repositório 1: ")
   leia(capacidade_repositorio1)
      se quantidade_agua >= capacidade_repositorio1 entao
      escreval("Encheu este reservatorio!")
      excedente <- quantidade_agua - capacidade_repositorio1
      escreval("Sobrou: ",excedente," Litros!")
      senao
      excedente<- quantidade_agua
      escreval("Encheu apenas ",excedente,"L do reservatorio!")
      fimalgoritmo
      fimse

   escreva("Insira a capacidade de água do repositório 2: ")
   leia(capacidade_repositorio2)
     se excedente >= capacidade_repositorio2 entao
      escreval("Encheu este reservatorio!")
      escreval("Sobrou: ",excedente - capacidade_repositorio2," Litros!")
      excedente <- excedente - capacidade_repositorio2
      senao
      excedente<- capacidade_repositorio2 - excedente
      escreval("Faltou apenas ",excedente,"L de agua  para preencher reservatorio!")
      fimalgoritmo
      fimse
   escreva("Insira a capacidade de água do repositório 3: ")
   leia(capacidade_repositorio3)
      se excedente >= capacidade_repositorio3 entao
      escreval("Encheu este reservatorio!")
      escreval("Sobrou: ",excedente - capacidade_repositorio3," Litros!")
      excedente <- excedente - capacidade_repositorio3
      senao
      excedente<-  capacidade_repositorio3 - excedente
      escreval("Faltou apenas ",excedente,"L de agua  para preencher reservatorio!")
      fimalgoritmo
      fimse

Fimalgoritmo