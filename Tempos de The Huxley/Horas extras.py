salario_inicial = float(input())
horas_extras = int(input())
salario_final = salario_inicial + (salario_inicial*(2.5/100)*horas_extras)

print ('{0:.2f}'.format(salario_final))