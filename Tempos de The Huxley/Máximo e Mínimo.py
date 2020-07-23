tamanho = int(input())
num = 0
lista = []
quant_maior = 0
quant_menor = 0

for i in range(tamanho):
    lista.append(int(input()))

max = max(lista)
min = min(lista)

for i in range(len(lista)):
    if lista[i]==max:
        quant_maior+=1
    elif lista[i]==min:
        quant_menor+=1

print(max, quant_maior)
print(min, quant_menor)
