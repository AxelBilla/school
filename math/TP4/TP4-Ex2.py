userChoice=int(input("Combien de nombres souhaitez vous entrez?: "))
listNombres=[]
indexListMax=[]
count=0
dele=", "
for i in range(userChoice):
    listNombres.append(i)
    listNombres[i]=int(input("Saisir un Nombre: "))
for i in range(len(listNombres)):
    if listNombres[i] == max(listNombres):
        indexListMax.append(count)
        indexListMax[count]=i+1
        count=count+1
    
print("Le nombre le plus grand est:", max(listNombres), "qui est l'entrée numéro", dele.join(map(str, indexListMax))+".")