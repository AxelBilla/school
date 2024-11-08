#Global Vals
error=0
countPosi=0
countNega=0
#Defs
def bactorio(factInt): #Ex1
    res=factInt*(factInt-1)
    print("Le resultat est de: ", res)
    
def factorio(factInt): #Ex2
    res=factInt*(factInt-1)
    return res 

def exchangeRate(currency, amountMoney): #Ex4-5
    if currency == "€":
        res=amountMoney * 0.98
    elif currency == "$":
        res=amountMoney * 1.02
    return res

def capitalListm(userInput, countryList, capitalList): #Ex6-7
    global error
    for i in range(len(countryList)):
        error=0
        if userInput == countryList[i]:
            print("La capitale est", capitalList[i])
            break
        else:
            error=1
    if error == 1:
        print("Cette capitale ne doit pas être «capitale», elle s'est échappée de mon capital mémoire")    

def cubed(cubeInt, qubert): #Ex8-9
    result=cubeInt**qubert
    return result

def negapi(numList): #Ex10-11
    global countPosi
    global countNega
    for i in range(len(numList)):
        if numList[i] >= 0:
            countPosi = countPosi+1
        else:
            countNega = countNega+1
    return countPosi, countNega