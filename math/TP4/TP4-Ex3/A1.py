prix=float(0)
n=int(input("Combien de places de concert souhaitez-vous acheter?: "))
prix=n*20
if n >= 3:
    prix=prix*0.9
print("Le total est de: ", int(prix), "€")