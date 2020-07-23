n = None

while n!=0:
    ant = 1
    post = 1
    soma = 0

    n = int(input())

    if n>=0 and n<=47:
        if n==0:
            break
        for i in range(0,n):
            if i==0:
                print('0',end='')
            elif i==1:
                print(' 1',end='')
            elif i==2:
                print(' 1',end='')
            else:
                soma = ant + post
                print('',soma, end='')
                ant= post
                post = soma

    else:
        print('SEM RESPOSTA')