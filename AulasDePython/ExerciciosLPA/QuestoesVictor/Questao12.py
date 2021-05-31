#12) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do
#imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.

salario = 0.0
imposto = 0.05

salario = float(input("Insira o salário do funcionario: "))

impostoPago = salario * imposto

print("O imposto cobrado sobre o salario de R$",salario," é R$",impostoPago)