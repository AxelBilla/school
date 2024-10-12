from TD4_Bis_func import *
qubert=0

cubeInt = int(input("Quel nombre entier souhaitez-vous mettre au cube?: "))
for i in range(3):
    qubert=qubert+3
    result= cubed(cubeInt, qubert)
    print(result)