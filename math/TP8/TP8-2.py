from random import randint

def exo1():
    sumT=amnt=l=0
    for i in range(10):
        r=randint(1,6)
        amnt+=1 if r%2==0 else -2
        if l==r: amnt+=5
        l=r
        sumT=sumT+r
    if sumT>10: amnt+=3
    print("Gain:", amnt)    

exo1()