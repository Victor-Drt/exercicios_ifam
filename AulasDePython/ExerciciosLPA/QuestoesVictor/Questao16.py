#16) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima:
#• a idade dessa pessoa;
#• essa idade convertida em semanas.

anoNascimento = int(input("Insira o ano de nascimento: "))
anoAtual = int(input("Insira o ano atual: "))

idade = anoAtual - anoNascimento
qtdSemanas = 52
idadeSemanas = idade * qtdSemanas

print("\nIdade: ", idade)
print("Idade em semanas: ", idadeSemanas)