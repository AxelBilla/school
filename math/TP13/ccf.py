screwStock=[100,200,300,400,500,600]
screwPrice=[0.1, 0.2, 0.3, 0.4, 0.5, 0.6]

def getOrder():
    screwList=[0]*len(screwStock)
    for i in range(len(screwStock)):
        screwList[i]=int(input(f"Amount of screws #{i+1}: "))
        if screwList[i]>screwStock[i]:
            screwList[i]=screwStock[i]
    return screwList

def getSum(order):
    res=screwTotal=0
    for i in range(len(order)):
        screwTotal+=order[i]
        screwStock[i]-=order[i] #Would have done this in getOrder(), but was asked to do this here
        res+=order[i]*screwPrice[i]
    if screwTotal>=200:
        res-=5
    print(f"Order Total: {res}$") #Wouldn't do this like that either, would print outide getSum() with the returned data
    return res

getSum(getOrder())