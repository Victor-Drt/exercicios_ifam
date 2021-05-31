idade = int(input("Insira a idade: "))

if idade >= 0 and idade <= 2:
    categoria = "Recém-nascido"
    print("O individuo de idade %d, é classificado como : %s "%(idade, categoria))
elif idade >= 3 and idade <= 11:
    categoria = "Criança"
    print("O individuo de idade %d, é classificado como : %s "%(idade, categoria))
elif idade >= 12 and idade <= 19:
    categoria = "Adolescente"
    print("O individuo de idade %d, é classificado como : %s "%(idade, categoria))
elif idade >= 20 and idade <= 55:
    categoria = "Adulto"
    print("O individuo de idade %d, é classificado como : %s "%(idade, categoria))
elif idade > 55:
    categoria = "Idoso"
    print("O individuo de idade %d, é classificado como : %s "%(idade, categoria))
else:
    print("Idade invalida!")