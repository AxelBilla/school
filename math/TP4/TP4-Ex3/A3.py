prix=float(0)
b=input("Êtes-vous étudiant? (Oui/Non): ")
n=int(input("Combien de places de concert souhaitez-vous acheter?: "))
prix=n*20
if b=="Oui":
    prix=prix*0.75
elif n >= 3:
    prix=prix*0.9
print("Le total est de: ", int(prix), "€")