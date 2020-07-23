lista=[]
C=B=0
for i in range(7):
    lista.append(input().upper())
for i in lista:
    if i=='CINEMA':
        C+=1
    if i=='BOLICHE':
        B+=1
if B>C:print('BOLICHE')
else: print('CINEMA')