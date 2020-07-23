temperatura = float(input())
doente = input()

if (doente != "S" and doente != "N"):
    print("Erro")
else:
    if (doente == "S"):
        if (temperatura >= 37):
            print("Exames Especiais")
        elif (temperatura < 37):
            print("Exames Básicos")
    else:
        if (temperatura >= 37):
            print("Exames Básicos")
        elif (temperatura < 37):
            print("Liberado")
