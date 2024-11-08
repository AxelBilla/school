#Prog. Calcule Vente
itemPrices=0
userInput=0

amountItems=int(input("Nombre de produit(s): "))
print()
for i in range(amountItems):
    userInput=input(f"Prix du produit N°{i+1}: ")
    itemPrices=int(itemPrices)+int(userInput)
print()
print("Prix total: ", itemPrices, "€")
print()

payAmount=int(input("Combien souhaitez vous payer?: "))
while payAmount < itemPrices:
    print("Montant insuffisant, réessayer")
    payAmount=int(input("Combien souhaitez vous payer?: "))
    
fullAmount=payAmount-itemPrices
moneyTens= fullAmount/10
moneyFives= (moneyTens-int(moneyTens))*2
moneyOnes= (moneyFives-int(moneyFives))*5
print()

print("Merci de récuperer votre monnaie.")
print("Billets de 10€: ", int(moneyTens+0.0001))
print("Billets de 5€: ", int(moneyFives+0.0001))
print("Pièces de 1€: ", int(moneyOnes+0.0001))