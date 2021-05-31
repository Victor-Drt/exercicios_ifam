preco = float(input("Insira o valor do produto: "))
codigo = int(input("Insira o codigo do produto: "))

if codigo == 1:
    procede = "Sul"
    print("A procedencia do produto é %s" % procede)
elif codigo == 2:
    procede = "Norte"
    print("A procedencia do produto é %s" % procede)
elif codigo == 3:
    procede = "Leste"
    print("A procedencia do produto é %s" % procede)
elif codigo == 4:
    procede = "Oeste"
    print("A procedencia do produto é %s" % procede)
elif codigo >= 5 and codigo <= 6:
    procede = "Nordeste"
    print("A procedencia do produto é %s" % procede)
elif codigo >= 7 and codigo <= 9:
    procede = "Sudeste"
    print("A procedencia do produto é %s" % procede)
elif codigo >= 10 and codigo <= 20:
    procede = "Centro-oeste"
    print("A procedencia do produto é %s" % procede)
elif codigo >= 21 and codigo <= 30:
    procede = "Noroeste"
    print("A procedencia do produto é %s" % procede)
else:
    procede = "Nao encontrada"
    print("A procedencia do produto é %s" % procede)
