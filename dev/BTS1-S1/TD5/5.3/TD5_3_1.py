from TD5_3_func import *
algList=[]
a=int(input("How many lines would you like to have?: "))
b=int(input("How many columns would you like to have?: "))
for i in range(a):
    algList.append(i)
    algList[i]=listFillerZero(b)
    
for i in range(len(algList)):
    print(algList[i])