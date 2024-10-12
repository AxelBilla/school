from TD4_Bis_func import *
power=True
while power == True:
    currency = input("Souhaitez vous convertir vers l'euro ou le dollar? (€/$): ")
    amountMoney = float(input("Quelle somme souhaitez vous convertir?: "))
    res=exchangeRate(currency, amountMoney)
    print(res)
    stop=input("Souhaitez-vous arrêter? (yes/no): ")
    if stop == "yes":
        break
    