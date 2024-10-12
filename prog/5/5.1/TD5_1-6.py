Suite=[0,0,0,0,0,0,0]
for i in range(len(Suite)):
    if i > 1:
        Suite[i]=Suite[i-1]+Suite[i-2]
    else:
        Suite[i]=1
    print(Suite[i])