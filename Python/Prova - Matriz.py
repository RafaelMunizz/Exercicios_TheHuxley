tamanho = int(input())
lista = input().split()

# Transformando lista em inteiro
lista = [int(i) for i in lista]

# criação matriz
matriz = []
a = tamanho
for i in range(0,tamanho*tamanho,tamanho):
    matriz.append(lista[i:a])
    a += tamanho

# Analisando colunas e verificando quantidade de zero e um
resultado = 0

for i in range(len(matriz)):
    quantidade_zero = quantidade_um = 0
    for j in range(len(matriz[i])):

        if matriz[j][i] == 0:
            quantidade_zero += 1
        elif matriz[j][i] == 1:
            quantidade_um += 1

    if quantidade_zero == (tamanho-1) and quantidade_um == 1:
        resultado = True
    else:
        resultado = False
        break

for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        print(matriz[i][j],end=' ')
    print()

print(resultado)




