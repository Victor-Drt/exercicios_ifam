'''
1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a
mensagem de reprovado para média inferior a 7.0.
'''

nota1 = float(input("insira a primeira nota: "))
nota2 = float(input("insira a segunda nota: "))
nota3 = float(input("insira a terceira nota: "))
nota4 = float(input("insira a quarta nota: "))

soma = (nota1 + nota2 + nota3 + nota4)
media = soma/4

msg_aprovado = "Aluno aprovado com nota %2.2f"%media
msg_reprovado = "Aluno reprovado com nota %2.2f"%media

if media >= 7:
    print(msg_aprovado)
else:
    print(msg_reprovado)

