
n = 0
aparecimentos = 0
numeros = 0
cont = 0

while True:
    lista = []
    for i in range(1000):
        numeros=int(input())
        if numeros==-1:
            break
        cont += 1
        lista.append(numeros)
    if numeros==-1:
        break
    n = int(input())

    for i in range(len(lista)):
        if lista[i]==n:
            aparecimentos+=1

    print(n,'appeared',aparecimentos,'times')
    n=aparecimentos=0

