import math

opc = int(input("Insira a opcao desejada: \n1 - soma\n2 - raiz quadrada\n3 - finalizar\n"))

if (opc == 1):
    print("Voce selecionou a opçao 'Soma'!")
    num1 = float(input("Insira o primeiro valor para a soma: "))
    num2 = float(input("Insira o segundo valor para a soma: "))
    soma = num1 + num2
    print("%7.2f + %7.2f = %7.2f"%(num1,num2,soma))
elif (opc == 2):
    print("Voce selecionou a opçao 'Raiz quadrada'!")
    num = int(input("Insira o valor para retirar a raiz: "))
    raiz = math.sqrt(num)
    print(f'\nA raiz quadrada de {num} é {raiz}')
elif (opc == 3):
    print("Voce selecionou a opçao 'Finalizar\nObrigado'!")
else:
    print("Opcao invalida!")
