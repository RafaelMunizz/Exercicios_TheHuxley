quant=int(input())
a=b=S=0

for i in range(quant):
    a+=1
    b+=3
    S+=(a/b)

    print('%d/%d'%(a,b),end='')
    if a==quant:
        continue
    print(' + ',end='')

print()
print('%.2f'%(S))