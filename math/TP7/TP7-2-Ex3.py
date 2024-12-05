n=int(input("entier: "))
binaire=""
q=n
while q>0:
    binaire=str(q%2)+binaire
    q=q//2
print(binaire)