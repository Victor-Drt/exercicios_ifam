Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : {Ler um valor inteiro da quantidade de litros de �gua, em
//seguida ler tr�s valores inteiro correspondentes a capacidade de �gua de cada
//reposit�rio, e ao final preencher e exibir a quantidade de �gua de cada reposit�-
//rio e se for o caso, exibir a quantidade excedente.
// Autor(a)    : Victor Duarte Nascimento
// Data atual  : 17/03/2020
Var
// Se��o de Declara��es das vari�veis 
qtdL,total, cont:inteiro
lrep1,lrep2,lrep3,sobrou:real
rep:vetor[1..3] de inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
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
