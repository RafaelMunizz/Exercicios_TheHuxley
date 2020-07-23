def serie(num, cont, inicial):
    cont += 1
    if cont == num:
        return inicial

    if cont % 2 == 0:
        s = 1
    else:
        s = 4
    return s + serie(num, cont, inicial)

inicial = 3
num = int(input())

print(serie(num, 0, inicial))