def fatorial(numero):
    if numero == 0 or numero == 1:
        return 1
    return numero * fatorial(numero - 1)

lista = []

for i in range(5):
    lista.append(int(input()))

soma = 0
for i in lista:
    if i % 3 == 0:
        soma += fatorial(i)

print(soma)