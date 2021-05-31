#13) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
#sabendo-se que este sofreu um aumento de 25%

salario = float(input("Insira o valor do Salario: "))
aumento = 0.25
novoSalario = salario + salario * aumento

print("O salario anterior era R$%7.2f com o novo aumento passa a ser R$%7.2f"%(salario, novoSalario))