quant=int(input())
b=S=0
a=-1

for i in range(int(quant/2)):
    a+=2
    b+=4
    S+=(a/b)+1
if quant%2!=0:
    a+=2
    b+=4
    S+=(a/b)

print()
print('%.2f'%(S))

b=S=0
a=-1

for i in range(int(quant/2)):
    a+=2
    b+=4

    print('%d/%d + 1'%(a,b),end='')
    if a==quant-1:
        break
    print(' + ',end='')
if quant%2!=0:
    a+=2
    b+=4
    print('%d/%d' % (a, b))