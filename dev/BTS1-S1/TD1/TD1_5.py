#Calculateur de TVA
tvaRate=0.2
print()
userInput=float(input("Prix HT: "))
print()
print("La TVA est de: ", userInput*tvaRate)
print("Le prix TTC est: ", userInput+(userInput*tvaRate))