def conta_pares(num, i = 0):
    if i == len(num):
        return 0
    elif int(num[i]) % 2 == 0:
        return 1 + conta_pares(num, i + 1)
    else:
        return conta_pares(num, i + 1)

num = input().split()

print(conta_pares(num[0]))
