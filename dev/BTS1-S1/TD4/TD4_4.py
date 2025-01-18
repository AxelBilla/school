#Seth Rogan
from TD4_func import *
userInputs = []
count=0
power=True
while power == True:
    userInputs.append(count)
    userInputs[count]=int(input("Veuillez saisir un nombre: "))
    exitInput=input("Souhaitez vous arrêter? (yes/no): ")
    if exitInput == "yes":
        break
    count=count+1

result= averaged(userInputs)
print("La moyenne est de", result)
