from TD5_2_func import *

count=int(input("How many numbers do you want to add?: "))
txt="What numbers do you want to add?: "
for i in range(count):
    algList=listFiller(i, txt)
globalList()

#Making things average
for i in range(len(algList)):
    sum(i)
avg=sethRogan()

maxed=[]
mCount=0
for i in range(len(algList)):
    if float(algList[i]) > avg:
        maxed.append(mCount)
        maxed[mCount]=i+1
        mCount=mCount+1
print(f"La moyenne est de {avg}, avec {mCount} élèves avec des notes supérieurs.\n Seules les élèves N°",', '.join(map(str, maxed)), "ont reçu une note au dessus de la moyenne.") 


### this is fucked