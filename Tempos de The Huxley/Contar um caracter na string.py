lista = input().split(' ')
letra = input()
soma = 0
n = []
for i in lista:
    n+=i
for i in n:
    if i==letra:
        soma+=1

print(soma)