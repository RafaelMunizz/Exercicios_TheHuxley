tamanho = int(input())
lista = []
lista2 = []
for i in range(tamanho):
    lista.append(int(input()))

r=int(input()) #número a remover

for i in lista:
    if i!=r:
        lista2.append(int(i)) #Criação de lista nova sem o valor selecionado (r)

if tamanho==0:
    print('[ ]')
    print('A lista estah vazia - nao eh possivel remover elemento')
elif lista==lista2:
    print("[",end='')
    for i in range(len(lista)):
        print('',lista[i],end='')
    print(' ]')
    print('Nao eh possivel remover o elemento %d' %(r))
else:
    print("[", end='')
    for i in range(len(lista)):
        print('', lista[i], end='')
    print(' ]')
    print("[", end='')
    for i in range(len(lista2)):
        print('', lista2[i], end='')
    print(' ]')