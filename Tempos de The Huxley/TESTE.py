lista = ['nao','pedi',"resposta"]
a=[]
for i in range(len(lista)):
    a+=[lista[i][::-1]]

    print(a[i],end=' ')