from TD5_2_func import *

count=int(input("How many numbers do you want to add?: "))
txt="What numbers do you want to add?: "
for i in range(count):
    algList=listFiller(i, txt)

algList=intTurner(algList)
maxed=[]
mCount=0
for i in range(len(algList)):
    if algList[i] == max(algList):
        maxed.append(mCount)
        maxed[mCount]=i+1
        mCount=mCount+1
print("La plus grand valeur est présente dans l'entrée(s) N°",', '.join(map(str, maxed)), "et vaux", max(algList) ) 


### this is fucked