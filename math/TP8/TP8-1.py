from random import randint

def exo1():
    x=0
    listInt=[]
    for i in range(10):
        r=randint(1,6)
        listInt.append(i)
        listInt[i]=r
        x=x+r
    print(listInt, x)

def listMaker(amnt):
    l=[]
    for i in range(amnt):
       l.append(i)
       l[i]=randint(1,100)
    return l
 
def exo2():
    L=listMaker(10)
    M=L[0]
    n=len(L)
    for i in range(0,n-1):
        if L[i]>M:
            M=L[i]
    print(L, M) #M= Biggest in List
            

exo2()