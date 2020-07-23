def fatorial(x):
    soma = 1
    for i in range(1, x+1):
        soma *= i

    return soma

def euler(num, cont, n):
    if num == cont:
        return ("{0:.15f}".format(n))

    elif num > cont:

        n += (1 /fatorial(cont))
        cont += 1
        return euler(num, cont, n)

cont = 0
n = 0

num = int(input())
print(euler(num, cont, n))