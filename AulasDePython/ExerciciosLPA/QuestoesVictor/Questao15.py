#15) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
#• o peso dessa pessoa em gramas;
#• se essa pessoa engordar 5%, qual será seu novo peso em gramas.

peso = int(input("Insira o peso em Kg: "))

pesoEmGramas = peso * 1000

casoEngorde = pesoEmGramas + pesoEmGramas * 0.05

print("Peso em kg: ", peso)
print("\nPeso em g: ", pesoEmGramas)
print("\nPeso em g caso engorde 5%: ", casoEngorde)