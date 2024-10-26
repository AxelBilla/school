t=[]
for k in range(0,3):
    t.append(k)
    t[k]=[]
    for m in range(0,1):
        t[k].append(m)
        t[k][m]=k+m
for k in range(0,3):
    for m in range(0,1):
        print(t[k][m])