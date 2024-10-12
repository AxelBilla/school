from TD4_func import *
turnover = int(input("Chiffre d'affaire du commercial: "))
tnRate, tnAmount= turnoverCalc(turnover)
print(turnover, tnRate, tnAmount)