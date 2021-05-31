Algoritmo "negativos_multiplos"
//Ler um número inteiro e exibir os 20 números anteriores impares, e os 20
//posteriores múltiplos de 10.

Var
// Seção de Declarações das variáveis 
i,ant,post:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("insira um numero:")
leia(i)
escreval("Esses sao os 20 numeros anteriores impares: ")
para ant de i ate (i-20*2) passo -1 faca
se (ant mod 2 = 1) ou (ant mod 2 = -1) entao
escreval(ant)
fimse
fimpara
escreval("")
escreval("Esses sao os 20 numeros posteriores multiplos de 10: ")
para post de i ate (i+20*10) faca
se post mod 10 = 0 entao
escreval(post)
fimse
fimpara



Fimalgoritmo