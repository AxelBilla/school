from random import randint

def createList(): #Prep
    l=[]
    for i in range(randint(8, 20)):
        l.append(i)
        l[i]=randint(1,6)
    return l

def maxValue(listM): #Ex1
    m=listM[0]
    for i in range(1, len(listM)):
        if listM[i]>m:
            m=listM[i]
    return m

def minValue(listM): #Ex2
    m=listM[0]
    for i in range(1, len(listM)):
        if listM[i]<m:
            m=listM[i]
    return m

def getRange(listE): #Ex3
    rangeE=maxValue(listE)-minValue(listE)
    return rangeE


def TD(): #Ex4
    tab1=createList()
    tab2=createList()

    mE=getRange(tab1)
    aE=getRange(tab2)

    print("List: ", tab1, "Range: ", mE)
    print("List: ", tab2, "Range: ", aE)

TD()
