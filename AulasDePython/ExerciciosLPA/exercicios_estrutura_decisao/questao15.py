

opc = input("Insira a opcao desejada: \n(+) - Adição\n(-) - Subtração\n(*) - Multiplicação\n(/) - Divisao\n")

if (opc == "+"):
    print("Voce selecionou a opçao 'Adição'!")
    num1 = float(input("Insira o primeiro valor para a Soma: "))
    num2 = float(input("Insira o segundo valor para a Soma: "))
    soma = num1 + num2
    print("%7.2f + %7.2f = %7.2f"%(num1,num2,soma))
elif (opc == "-"):
    print("Voce selecionou a opçao 'Subtração'!")
    num1 = float(input("Insira o primeiro valor para a Subtração: "))
    num2 = float(input("Insira o segundo valor para a Subtração: "))
    sub = num1 - num2
    print("%7.2f - %7.2f = %7.2f"%(num1,num2,sub))
elif (opc == "*"):
    print("Voce selecionou a opçao 'Multiplicação'!")
    num1 = float(input("Insira o primeiro valor para a Multiplicação: "))
    num2 = float(input("Insira o segundo valor para a Multiplicação: "))
    mult = num1 * num2
    print("%7.2f x %7.2f = %7.2f" % (num1, num2, mult))
elif (opc == "/"):
    print("Voce selecionou a opçao 'Divisão'!")
    num1 = float(input("Insira o primeiro valor para a Divisão: "))
    num2 = float(input("Insira o segundo valor para a Divisão: "))
    div = num1 / num2
    print("%7.2f / %7.2f = %7.2f" % (num1, num2, div))
else:
    print("Tchauu!")