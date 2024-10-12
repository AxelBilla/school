#Prog. Biggest Numbers Infinite
listNums=[]
listBiggests=[]
strBig=""
userInput="1"
timer=0
while userInput != 0:
    userInput= int(input("Nombre: "))
    listNums.append(timer)
    listNums[timer]= userInput
    timer=timer+1
    
for i in range(len(listNums)):
    if listNums[i] == max(listNums):
        listBiggests.append(i+1)
for i in reversed(range(len(listBiggests))):
    strBig=str(listBiggests[i])+","+str(strBig)
strBig=strBig.rstrip(",")+"."
print("Le plus grand nombre est", max(listNums), "et est présent au(x) numéro(s)", str(strBig))
