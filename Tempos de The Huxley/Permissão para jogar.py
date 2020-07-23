idade = int(input())
jogo = input()
lista = ["azar","mmorpg","moba","casual"]

if (idade<=130 and idade>=0):
    if (jogo not in lista):
        print("Jogo invalido.")
    else:
        if(jogo=="azar"):
            if(idade>=21):
                print("Pode entrar!")
            else:
                print("Volte daqui há alguns anos.")
        elif(jogo=="mmorpg"):
            if(idade>=14):
                print("Pode entrar!")
            else:
                print("Volte daqui há alguns anos.")
        elif(jogo=="moba"):
            if(idade>=10):
                print("Pode entrar!")
            else:
                print("Volte daqui há alguns anos.")
        elif (jogo == "casual"):
                print("Pode entrar!")
else:
    print("Idade invalida.")