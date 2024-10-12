#Unlimited Country->Capital Finder (Pre-filled)
from TD4_Bis_func import *
countryList = ["France", "Italie", "Espagne", "Allemagne", "Pologne", "République Tchèque", "Angleterre", "Portugal", "Pays-Bas"]
capitalList = ["Paris", "Rome", "Madrid", "Berlin", "Varsovie", "Prague", "Londre", "Lisbonne", "Amsterdam"]
amountCountry = int(input("Combien de pays souhaitez vous saisir?: "))
for i in range(amountCountry):
    print()
    print("Saisir un pays parmis cette liste.")
    print(countryList)
    userInput=input("Pays: ")
    capitalListm(userInput, countryList, capitalList)
