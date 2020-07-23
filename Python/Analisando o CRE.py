mat = None
cre = None
menor_cre = 10
soma = 0
x = 0
mat_cre = None

while True:
    mat = str(input())
    if mat == '999':
        break

    cre = float(input())
    x += 1
    soma += cre
    if cre<menor_cre:
        menor_cre = cre
        mat_cre = mat

media = soma / x
print(mat_cre)
print('{0:.2f}'.format(media))