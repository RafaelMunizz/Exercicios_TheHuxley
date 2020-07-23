idade = 0
valor_compra = 0
pag = None
cont = None
vendas = 0
vv = 0
vc = 0
m_idade = 150
maior_compra = 0
quant_vv = 0

while True:
    vendas += 1
    idade = int(input())
    if idade < m_idade:
        m_idade = idade

    valor_compra = float(input())
    if valor_compra > maior_compra:
        maior_compra = valor_compra
    pag = input()
    if pag == "C":
        vc += valor_compra
    elif pag == "V":
        vv += valor_compra
        quant_vv += 1

    cont = input()
    if cont == "N":
        break

if quant_vv==0:
    quant_vv=1
print(vendas)
print(vv)
print(vc)
print(m_idade)
print(maior_compra)
media = vv / quant_vv
if media==0:
    print('0')
else:
    print('{0:.2f}'.format(media))