from random import randint

#Ex.1
def getSum(L):
    sumL=0
    for i in range(len(L)):
        sumL+=L[i]
    return sumL

#Ex.2
def exo2():
    M=[0]*11
    result=0
    n=0
    while result!=11:
        j=randint(0,10)
        M[j]=1
        n+=1
        result=getSum(M)
    print(n)

#Ex.3
def centOS():
    M=[0]*11
    for i in range(100):
        j=randint(0,10)
        M[j]+=1
    for y in range(len(M)):
        print(f"Fig #{y}: {M[y]}")