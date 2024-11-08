a=int(input("saisir un nombre inférieur à 255: "))
for i in range(0,8):
    print(a%2)
    a=a//2
print("l'octet correspondant est cette série de bits lue à l'envers")