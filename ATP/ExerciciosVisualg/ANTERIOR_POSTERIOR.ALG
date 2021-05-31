Algoritmo "anterior_posterior"
//Ler um número inteiro e exibir os 20 números anteriores, e os 20 posteriores.

Var
// Seção de Declarações das variáveis 
ant,i,post,cont:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("insira um numero:")
leia(i)
para ant de i ate (i-20) passo -1 faca
escreval("Esses sao os 20 numeros anteriores: ",ant)
fimpara
escreval("")
para post de i ate(i+20) faca
escreval("Esses sao os 20 numeros posteriores: ",post)
fimpara


Fimalgoritmo