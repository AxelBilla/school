# Functions #

def pgcd(val1, val2):
    rest=0
    if val1<val2:
        val1,val2=val2,val1 #switches Val1&2 if val2 is bigger than val1
    while val2!=0:
        rest=val1%val2 
        val1=val2
        val2=rest
    return val1

    

# Main Algo #

a=int(input("A: "))
b=int(input("B: "))
print("PGCD: ", pgcd(a,b))


#####################################################
#                   Exercices                       #
#####################################################
# 1)                                                #
#  A= 128 | 78 | 28 | 28 | 6  | 6  | 6  | 6 | 2 | 2 #
#  B= 78  | 50 | 50 | 22 | 22 | 16 | 10 | 4 | 4 | 2 #
#  D= 50  | 28 | 22 | 6  | 16 | 10 | 4  | 2 | 2 | 0 #
#                                                   #
# 2) Si b!=0                                        #
#                                                   #
# 3) Si b!=0, alors [a = b] et [b = d]              #
#####################################################