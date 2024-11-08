from TD4_Bis_func import *
numList = []
power = True
count=0
while power == True:
    numList.append(count)
    numList[count]=int(input("Entrée un entier: "))
    turnOff = input("Souhaitez-vous continuez? (yes/no): ")
    if turnOff == "no":
        power = False
    count=count+1
    print()
countPosi, countNega = negapi(numList)
print()
print("Nombres positives: ", countPosi, "|", "Nombres négatifs: ", countNega)