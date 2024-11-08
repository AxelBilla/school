from random import * 
def third(points):
    print(f"You started with {points} pts.\n")
    i=0
    while points > 0:
        i=i+1
        if randint(0,1) == 1:
            points=points+1
            print(f"Turn [{i}]: you won!")
        else:
            points=points-1
            print(f"Turn [{i}]: you lost!")
        print(f"You now have {points} pts\n")
    return points

points=5
points=third(points)
print(f"You now have {points} pts")
