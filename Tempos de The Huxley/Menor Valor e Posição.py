tamanho = int(input())
num = input().split(' ')

for i in range(len(num)):
    num[i]=int(num[i])

min = min(num)

print('menor valor:', min)
print('Posicao:', num.index(min))