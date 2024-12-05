#example du livre
def exemple():
    msg=input("msg: ")
    n=len(msg)
    i=0
    cpt=0
    while i < n:
        if msg[i]=="a":
            cpt+=1
        #i+=1
    print(cpt)
    
#- a) msg=string; n=int; i=int; cpt=int.
#- b) Il manque un "i+=1" afin de changer l'état de i pour notre condition while.
#- c) Cette algorithme regarde combien de fois est présent "a" dans une chaine de caractère donner.
#- d) ajouter "i+=1" à la ligne 8
#- e) L'on pourrait soit mettre la chaine de caractère en minuscule avec msg.lower(), ou ajouter "or msg[i]=="A" à notre condition if

#- f)
def editF():
    msg=(input("msg: "))
    alpha="abcdefghijklmnopqrstuvwxyz"
    res=[0]*26
    for i in range(len(msg)):
        for y in range (len(alpha)):
            if msg[i].lower()==alpha[y]:
                res[y]+=1
    print(res)
    
def editFvC():
    msg=(input("msg: "))
    alpha="abcdefghijklmnopqrstuvwxyz"
    res=[0]*26
    count=0
    highest=""
    for i in range(len(msg)):
        for y in range (len(alpha)):
            if msg[i].lower()==alpha[y]:
                res[y]+=1
                if res[y]>count:
                    count=res[y]
                    highest=msg[i]
    print(res)
    print(f'The most common letter was: "{highest}"", with {count} instances')


editFvC()