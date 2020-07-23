idade_em_dias = int(input())

anos = int(idade_em_dias/365)
meses = int((idade_em_dias%365)/30)
dias = idade_em_dias-(anos*365)-(meses*30)

print('{0:.0f}'.format(anos) ,"ano(s)")
print('{0:.0f}'.format(meses) ,"mes(es)")
print('{0:.0f}'.format(dias) ,"dia(s)")