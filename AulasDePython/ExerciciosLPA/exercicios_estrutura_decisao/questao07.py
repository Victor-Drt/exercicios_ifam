idade = int(input("Insira a idade do nadador: "))

if idade >= 5 and idade <= 7:
    categoria = "Infantil A"
    print("O nadador de idade %d, faz parte da categoria: %s "%(idade, categoria))
elif idade >= 8 and idade <= 10:
    categoria = "Infantil B"
    print("O nadador de idade %d, faz parte da categoria: %s "%(idade, categoria))
elif idade >= 11 and idade <= 13:
    categoria = "Juvenil A"
    print("O nadador de idade %d, faz parte da categoria: %s "%(idade, categoria))
elif idade >= 14 and idade <= 17:
    categoria = "Juvenil B"
    print("O nadador de idade %d, faz parte da categoria: %s "%(idade, categoria))
elif idade >= 18:
    categoria = "Senior"
    print("O nadador de idade %d, faz parte da categoria: %s "%(idade, categoria))
else:
    print("Idade não qualificada!")

