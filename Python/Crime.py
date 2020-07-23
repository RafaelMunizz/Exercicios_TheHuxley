resultado = 0

a= input("Telefonou para a vitima?\n")
b=input("Esteve no local do crime?\n")
c=input("Mora perto da vitima?\n")
d=input("Devia para a vitima?\n")
e=input("Ja trabalhou com a vitima?\n")

if a == "True":
    resultado += 1
if b == "True":
    resultado += 1
if c == "True":
    resultado += 1
if d == "True":
    resultado += 1
if e == "True":
    resultado += 1

if (resultado == 2):
    print("Suspeita")
elif (resultado == 3 or resultado==4):
    print("Cúmplice")
elif (resultado == 5):
    print("Assassino")
else:
    print("Inocente")