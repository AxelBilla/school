x=[]
val=1
for i in range(0,1):
    x.append(i)
    x[i]=[]
    for j in range(0,2):
        x[i].append(j)
        x[i][j]=val
        val=val+1
for i in range(0,1):
    for j in range(0,2):
        print(x[i][j])