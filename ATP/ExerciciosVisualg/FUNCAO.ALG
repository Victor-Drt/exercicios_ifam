Algoritmo "funcao"
// Descrição   : Calcular o valor da função F(x) = 2x2 + 7x + b. Sabendo que o
//               algoritmo terá que ler os valores de “x” e de “b” e ao final
//               exibir o valor de F(x).
Var
// Seção de Declarações das variáveis
fx,x,b:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Insira o valor de x: ")
leia(x)
escreval("Insira o valor de b: ")
leia(b)
escreval("Voce quer saber o resultado desta função: f(",x," ) = 2*",x,"²+7*",x,"+",b)
escreval("O resultado é: f(",x,")=",2*(x*x)+7*x+b)

Fimalgoritmo