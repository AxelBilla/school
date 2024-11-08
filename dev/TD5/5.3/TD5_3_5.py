t=[]
for k in range(0,3):
    t.append(k)
    t[k]=[]
    for m in range(0,1):
        t[k].append(m)
        #t[k][m]=2*k+(m+1) #Partie 1
        t[k][m]=(k+1)+(4*m) #Partie 2
for k in range(0,3):
    for m in range(0,1):
        print(t[k][m])
print(t)