n1 = float(input("Insira a nota do trabalho: "))
n2 = float(input("Insira a nota da avaliação: "))
n3 = float(input("Insira a nota do exame final: "))

media = (n1 * 2 + n2 * 3 + n3 * 5)/(2+3+5)

if media > 8 and media <= 10:
    conceito = "A"
    print("A media foi: %2.2f e o conceito %s"%(media, conceito))
elif media > 7 and media <= 8:
    conceito = "B"
    print("A media foi: %2.2f e o conceito %s" % (media, conceito))
elif media > 6 and media <= 7:
    conceito = "C"
    print("A media foi: %2.2f e o conceito %s" % (media, conceito))
elif media > 5 and media <= 6:
    conceito = "D"
    print("A media foi: %2.2f e o conceito %s" % (media, conceito))
else:
    conceito = "E"
    print("A media foi: %2.2f e o conceito %s" % (media, conceito))