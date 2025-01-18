from TD5_2_func import *
##### FILLING ##### (all functions)
numList=[]
listAmount=0
countList=int(input("How many lists do you want to use?: "))
textContent=""
for x in range(countList):
    listDisposal()
    countNumbers=int(input("How many numbers do you want to add?: "))
    txt="What numbers do you want to add?: "
    for i in range(countNumbers):
        algList=listFiller(i, txt)
    numList.append(x)
    numList[x]=algList
    listAmount=listAmount+1

#### ACTUAL WORK #### (I'm not fucking doing this again just to be used as a function elsewhere that will never exist)

sumLists=[]
for z in range(max(map(len, numList))):
    sumLists.append(z)
    sumLists[z]=0
for x in range(listAmount):
    for i in range(len(numList[x])):
        if i < len(numList[x]):
            sumLists[i]=int(sumLists[i])+int(numList[x][i])
print(sumLists)