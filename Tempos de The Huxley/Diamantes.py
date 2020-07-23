jogador = 0
pontos = 0
media = None
menor_ponto = 9999
maior_ponto = 0
jogador_menor = 0
jogador_maior = 0
soma = 0
contador = 0
while True:
    jogador = str(input())
    if jogador == "sair":
        break

    pontos = int(input())
    soma += pontos
    contador += 1
    if pontos <= menor_ponto:
        menor_ponto = pontos
        jogador_menor = jogador

    if pontos >= maior_ponto:
        maior_ponto = pontos
        jogador_maior = jogador


if pontos == 0:
    print('Nenhum jogador foi registrado.')
else:
    print(jogador_menor)
    print(jogador_maior)
    media_pontos = soma / contador
    print('{0:.2f}'.format(media_pontos))