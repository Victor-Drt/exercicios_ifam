#14) Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo
#que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência.
#Calcule e imprima:
#• o valor, em reais, de cada kilowatt;
#• o valor, em reais, a ser pago por essa residência;
#• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.

salarioMinimo = float(input("Insira o valor do salario minimo: "))
qtdKw = float(input("Insira a quantidade em kilowatts: "))

valorKilowatt = salarioMinimo * (1/5)
valorASerPago = valorKilowatt * qtdKw
valorComDesconto = valorASerPago - valorASerPago * 0.15


print("O valor de cada Kilowatt é R$%7.2f"%valorKilowatt)
print("O valor a ser pago pela residencia é: R$%7.2f"%valorASerPago)
print("O valor a ser pago pela residencia com um desconto de 15 porcento é: R$%7.2f"%valorComDesconto)