def soma(entrada):
    if len(entrada) == 1:
        return int(entrada)
    
    metade = len(entrada) // 2

    somaTotal = soma(entrada[0 : metade]) + soma(entrada[metade : len(entrada)])

    return somaTotal

numeros = input().split()
entrada = numeros[0]*int(numeros[1])
resultado = entrada

while len(str(resultado)) > 1:
    metade = len(str(resultado))//2
    resultado1 = soma(str(resultado)[0 : metade])
    resultado2 = soma(str(resultado)[metade : len(str(resultado))])

    resultado = resultado1 + resultado2

print(resultado)