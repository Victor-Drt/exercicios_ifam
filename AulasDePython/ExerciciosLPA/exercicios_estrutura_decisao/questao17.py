a = float(input("Insira o valor do lado a: "))
b = float(input("Insira o valor do lado b: "))
c = float(input("Insira o valor do lado c: "))

if(a < b+c and b < a+c and c < b+c):
    if(a == b and b == c):
        print("É um triangulo equilatero")
    elif(a == b or b==c or a==c):
        print("É um triangulo isosceles")
    else:
        print("É um triangulo escaleno")
else:
    print("Não é um triangulo!")