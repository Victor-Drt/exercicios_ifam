cod = int(input("Insira o codigo do funcionario: "))
salario = float(input("Insira o salario do funcionario: "))

if cod == 1:
    cargo = "Escrituario"
    percent = 50
    valor_aumento = salario * percent/100
    print("Codigo: %d\nCargo: %s\nPercentual de Aumento: %d\nValor do aumento: %7.2f"%(cod, cargo, percent,valor_aumento))
elif cod == 2:
    cargo = "Secretário"
    percent = 35
    valor_aumento = salario * percent / 100
    print("Codigo: %d\nCargo: %s\nPercentual de Aumento: %d\nValor do aumento: %7.2f" % (cod, cargo, percent, valor_aumento))
elif cod == 3:
    cargo = "Caixa"
    percent = 20
    valor_aumento = salario * percent / 100
    print("Codigo: %d\nCargo: %s\nPercentual de Aumento: %d\nValor do aumento: %7.2f" % (cod, cargo, percent, valor_aumento))
elif cod == 4:
    cargo = "Gerente"
    percent = 10
    valor_aumento = salario * percent / 100
    print("Codigo: %d\nCargo: %s\nPercentual de Aumento: %d\nValor do aumento: %7.2f" % (cod, cargo, percent, valor_aumento))
elif cod == 5:
    cargo = "Gerente"
    percent = 0
    valor_aumento = salario * percent / 100
    print("Codigo: %d\nCargo: %s\nPercentual de Aumento: %d\nSem aumento" %(cod, cargo, percent))
else:
    print("Funcionario não encontrado!")
