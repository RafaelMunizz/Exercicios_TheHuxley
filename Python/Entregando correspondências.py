cartas = 0
cont = 0
soma = 0

for i in range(7):
    cartas = int(input())
    if cartas>=100:
        cont+=1
    soma+=cartas

print(cont)
print('{0:.0f}'.format(soma/7))
