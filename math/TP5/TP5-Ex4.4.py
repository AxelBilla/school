#10 dice rolls, sum numbers. If even = +1, odd = -2 STAR WITH 10 [x]
#5 rolls instead [x]
#Keep on going while  above 0 [x]
from random import *

def oddeve(result):
    if result%2==0:
        points=1
        return points
    else:
        points=-2
        return points   

def first():
    rolls=0
    for i in range(10):
        x=randint(1,6)
        rolls=rolls+x
        print("The dice has chosen: ", x, "\n")
    z=oddeve(rolls)
    return z

def second():
    rolls=0
    for i in range(5):
        x=randint(1,6)
        rolls=rolls+x
        print("The dice has chosen: ", x, "\n")
    z=oddeve(rolls)
    return z

def third():
    rolls=0
    for i in range(5):
        x=randint(1,6)
        rolls=rolls+x
    z=oddeve(rolls)
    return z


points=10
z=int(input("Select a program (1/2/3): "))
if z==1:
    result=first()
    points=result+points
    print(f"You now have {points} pts")
elif z==2:
    result=second()
    points=result+points
    print(f"You now have {points} pts")
else:
    while points > 0:
        result=third()
        points=result+points
        print(f"You now have {points} pts")
