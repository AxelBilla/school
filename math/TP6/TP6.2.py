#Euclide
a=int(input("a: "))
b=int(input("b: "))
r=b
while b>0:
    r=a%b
    a=b
    b=r
if a==1:
    print(f"PGCD = {a}, ces nombres sont premiers!")
else:
    print(f"PGCD = {a}, ces nombres ne sont pas premiers...")