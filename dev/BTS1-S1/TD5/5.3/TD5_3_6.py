from TD5_3_func import *
algList=[]
a=int(input("How many lines would you like to have?: "))
b=int(input("How many columns would you like to have?: "))
for i in range(a):
    print(f"Line #{i+1}")
    algList.append(i)
    algList[i]=listFiller(b)
x=biggestInList(algList)
print("Max: ", x)