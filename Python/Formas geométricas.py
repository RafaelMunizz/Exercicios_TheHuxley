formas = input()

if (formas=="Q"):
    lados = float(input())
    area_q = (lados ** 2)
    perimetro_q = (4 * lados)
    print(round(area_q, 2))
    print(round(perimetro_q, 2))
elif(formas=="R"):
    altura_r = float(input())
    largura_r = float(input())
    area_r = (altura_r*largura_r)
    perimetro_r = 2*(altura_r+largura_r)
    print(round(area_r, 2))
    print(round(perimetro_r, 2))
elif(formas=="C"):
    raio = float(input())
    area_c = 3.14*(raio**2)
    comprimento = (2*3.14*raio)
    print(round(area_c, 2))
    print(round(comprimento, 2))
else:
    print("Nenhuma figura selecionada")