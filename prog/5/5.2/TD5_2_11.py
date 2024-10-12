numList=[[4,8,7,9,1,5,4,6],[7,6,5,2,1,3,7,4]]

sumLists=numList[0]
for i in range(len(numList[1])):
    for z in range(len(numList[0])):
        sumLists[z]=sumLists[z]*numList[1][i]
        
print(sumLists)