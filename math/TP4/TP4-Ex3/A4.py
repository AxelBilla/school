prix=float(0)
m=int(input("Quel mois est-il? (1->12): "))
b=input("Êtes-vous étudiant? (Oui/Non): ")
n=int(input("Combien de places de concert souhaitez-vous acheter?: "))
prix=n*20
if m == 6 and b == "Oui":
    prix=prix*0.8
    prix=prix*0.75
elif m == 6 and b != "Oui":
    prix=prix*0.8   
elif m != 6:
    if b == "Oui":
        prix=prix*0.75
    elif n >= 3:
        prix=prix*0.9


print("Le total est de: ", int(prix), "€")