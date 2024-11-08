age= int(input("Saisir age: "))
taille= int(input("Saisir taille en cm: "))
if age >= 7 or taille >= 125:
        print("Tu peu monter seul")
elif age >= 4:
    print("Tu peu monter avec un adulte")
else:
    print("Tu ne peu pas monter seul")