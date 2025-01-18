N=[0,0,0,0,0,0]
N[0]=1
for i in range(len(N)):
    N[i]=N[i-1]+2
    print(N[i])