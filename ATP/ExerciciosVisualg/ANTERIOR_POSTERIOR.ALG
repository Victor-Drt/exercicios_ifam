Algoritmo "anterior_posterior"
//Ler um n�mero inteiro e exibir os 20 n�meros anteriores, e os 20 posteriores.

Var
// Se��o de Declara��es das vari�veis 
ant,i,post,cont:inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
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