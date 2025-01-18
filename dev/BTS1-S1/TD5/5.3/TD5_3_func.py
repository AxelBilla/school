#from TD5_3_func import *

#Functions
def listFiller(col): #Fills a list
    funcList=[]
    for i in range(col):
        funcList.append(i)
        funcList[i]=input(f"Column #{i+1}: ")
    return funcList

def listFillerZero(col): #Fills a list full of zeroes
    funcList=[]
    for i in range(col):
        funcList.append(i)
        funcList[i]=0
    return funcList

def biggestInList(list):
    x=max(list[0])
    for i in range(len(list)):
        if max(list[i]) > x:
            x=max(list[i])
    return x