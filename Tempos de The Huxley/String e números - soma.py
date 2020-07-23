lista1=input().split(" ")
lista2=input().split(" ")
num1 = ''
num2 = ''
lista3 = lista1+lista2
lista4 = []
for i in lista1:
    num1+=i.strip()
for i in lista2:
    num2+=i.strip()

soma = int(num1)+int(num2)
n=0
for i in lista3:
    if int(i)>=10:
        n=10
        print('Erro em uma ou mais sequencia de entrada de dados')
        break
soma=str(soma)
if n!=10:
    for i in range(len(soma)):
        print(soma[i],end=' ')