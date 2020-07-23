msg = "Idade invalida."

idade = int(input())

if( (idade >= 0) and ( idade <= 130) ):
    jogo = input()
    
    msg = "Pode entrar!"
    
    if( jogo == "azar" ):
        if( idade < 21 ):
            msg = "Volte daqui há alguns anos."
    elif( jogo == "mmorpg" ):
        if( idade < 14 ):
            msg = "Volte daqui há alguns anos."
    elif( jogo == "moba" ):
        if( idade < 10 ):
            msg = "Volte daqui há alguns anos."
    elif( jogo == "casual" ):
        pass
    else:
        msg = "Jogo invalido."
    
print( msg )
