tamanho1 = int(input())
lista1 = []
lista2 = []
lista3 = []

for i in range(tamanho1):
    lista1.append(int(input()))
    lista3.append(lista1[i])
tamanho2 = int(input())

for i in range(tamanho2):
    lista2.append(int(input()))
    lista3.append(lista2[i])

for i in range(len(lista3)):
    print(lista3[i])