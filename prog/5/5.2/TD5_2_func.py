#from TD5_2_func import *

#Global Variables
g_funcList=[]
funcList=[]
sumList=0
countNega=0
countPosi=0

#Functions
def listFiller(i, txt): #Fills a temporary list
    global funcList
    funcList.append(i)
    funcList[i]=input(txt)
    return funcList

def algTOfunc(algList):
    global funcList
    funcList=algList

def globalList(): #Turns the temporary list into the global list
    global g_funcList
    global funcList
    g_funcList=funcList
    return g_funcList

def listDisposal(): #Kills temp list
    global funcList
    funcList=[]
    return funcList

def intTurner(algList): #Turns items within list into integers
    for i in range(len(algList)):
        algList[i]=int(algList[i])
    return algList

def sum(i): #Requires to be pre-filled by listFiller then be Global'd, calc sum.
    global g_funcList
    global sumList
    sumList=sumList+float(g_funcList[i])
    return sumList
    
    
def negapi(i): #Requires to be pre-filled by listFiller then be Global'd, sum of pos & neg numbers.
    global g_funcList
    global countPosi
    global countNega
    if int(g_funcList[i]) >= 0:
        countPosi = countPosi+1
    else:
        countNega = countNega+1
    return countNega, countPosi

def madAdder(i, algList):
    boop=int(algList[i])+1
    return boop    
    
def sethRogan(): # Needs to be pre-filled
    global g_funcList
    global sumList
    avg=sumList/len(g_funcList)
    return avg