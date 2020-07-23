idadeEmAnos = int(input("Informe a sua idade em dias:"))

anos = 0
meses = 0
dias = 0

while True:
    if idadeEmAnos >= 365:
        idadeEmAnos -= 365
        anos += 1
    elif idadeEmAnos >= 30:
        idadeEmAnos -= 30
        meses += 1
    else:
        dias = idadeEmAnos
        break

print("",anos,"Ano(s)\n", meses, "Mes(es)\n", dias, "Dia(s)")