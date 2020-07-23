valor = list(input())
valor1 = []
for i in range(len(valor)):
    i += 1
    valor1+=valor[-i]

for i in range(len(valor)):
    if valor1[0]=='0':
        del valor1[0]
    elif valor1[-1]=='0':
        del valor1[-1]

for i in valor1:
    print(i,end='')

