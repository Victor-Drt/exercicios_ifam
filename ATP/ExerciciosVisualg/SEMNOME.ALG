Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : {Ler um valor inteiro da quantidade de litros de água, em
//seguida ler três valores inteiro correspondentes a capacidade de água de cada
//repositório, e ao final preencher e exibir a quantidade de água de cada repositó-
//rio e se for o caso, exibir a quantidade excedente.
// Autor(a)    : Victor Duarte Nascimento
// Data atual  : 17/03/2020
Var
// Seção de Declarações das variáveis 
qtdL,total, cont:inteiro
lrep1,lrep2,lrep3,sobrou:real
rep:vetor[1..3] de inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Insira a quantidade de Litros d'agua: ")
leia(qtdL)
para cont de 1 ate 3 faca
escreval("Insira a capacidade do repositorio ",cont)
leia(rep[cont])
fimpara
lrep1<-qtdL-rep[1]
lrep2<-lrep1-rep[2]
se lrep2 > rep[3] entao
lrep3<-lrep2-rep[3]
senao
lrep3<-lrep2
fimse
sobrou<-lrep3
escreval("Em cada repositorio ficaram: Rep1: ",rep[1]," Rep2: ",rep[2]," Rep3: ",rep[3])
se sobrou < 0 entao
escreval("Nao sobrou nada!")
senao
escreval("Foram",sobrou,"L excedentes!")
fimse
Fimalgoritmo
