#pile ou face
from random import *
c=5
for i in range(8):
    rdn=randint(0,1)
    if rdn == 1:
        c=c+1
        print("win")
    else:
        print("loss")
    print(c)