#Currency Conv. (Rates are BS, didn't bother putting real ones.)
from TD4_Bis_func import *
currency = input("Souhaitez vous convertir vers l'euro ou le dollar? (€/$): ")
amountMoney = float(input("Quelle somme souhaitez vous convertir?: "))
res=exchangeRate(currency, amountMoney)
print(res)
