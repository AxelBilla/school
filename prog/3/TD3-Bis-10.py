#Prog Chevaux
from math import*
nVal=int(input("Nombre chevaux parti: "))
pVal=int(input("Nombre chevaux joué: "))
chancesX= factorial(nVal) / (factorial(nVal-pVal))
chancesY= factorial(nVal) / (factorial(pVal) * factorial(nVal-pVal))

print("Ordonnée: Vous avez 1 chance sur", int(chancesX), "de gagner")
print("Désordre: Vous avez 1 chance sur", int(chancesY), "de gagner")

# I have no idea what these games fucking are, made exactly what you asked
# so don't even know if those results are expected or not