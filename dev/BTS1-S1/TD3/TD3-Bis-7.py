#Prog. Biggest Numbers 20
listNums=[]
listBiggests=[]
strBig=""
for i in range(5):
    listNums.append(i)
    listNums[i]= int(input("Nombre: "))
for i in range(len(listNums)):
    if listNums[i] == max(listNums):
        listBiggests.append(i+1)
for i in reversed(range(len(listBiggests))):
    strBig=str(listBiggests[i])+","+str(strBig)
strBig=strBig.rstrip(",")+"."
print("Le plus grand nombre est", max(listNums), "et est présent au(x) numéro(s)", str(strBig))
