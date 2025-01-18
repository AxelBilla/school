def A1():
    i=k=aux=0
    tab2=tab=[]
    n=int(input("n: "))
    for i in range(0,n):
        tab.append(i)
        tab[i]=int(input(f"tab #{i}: "))
    for j in range(0,n-1):
        for i in range(0,n-1):
            if tab[i]>tab[i+1]:
                aux=tab[i]
                tab[i]=tab[i+1]
                tab[i+1]=aux
            print(tab) 
    for i in range(0, n):
        print(tab[i])
    
# a) 5,13,22,24,31,40
# -> [5, 24, 22, 40, 13, 31]
#    [5, 22, 24, 13, 31, 40]
#    [5, 22, 13, 24, 31, 40]
#    [5, 13, 22, 24, 31, 40]
#    [5, 13, 22, 24, 31, 40]

# b) Les lignes 8, 9 et 10 permettent de garder en mémoire le contenu actuelle dans 'aux', puit de le remplacer par celui présent à l'index suivant et enfin remplacer le contenu de l'index suivant par le contenu de 'aux'

# c) 

def A2():
    i=k=aux=0
    tab2=tab=[]
    n=int(input("n: "))
    for i in range(0,n):
        tab.append(i)
        tab[i]=int(input(f"tab #{i}: "))
    for j in range(0,n-1):
        for i in range(0,n-1):
            if tab[i]>tab[i+1]:
                aux=tab[i]
                tab[i]=tab[i+1]
                tab[i+1]=aux
            print(tab) 
        if tab2==tab:
            break
        else:
            tab2=tab  
    for i in range(0, n):
        print(tab[i])

# 2
# c)

def B1():
    i=k=aux=cnt=0
    tab=[]
    n=int(input("n: "))
    for i in range(0,n):
        tab.append(i)
        tab[i]=int(input(f"tab #{i}: "))
    for j in range(0,n-1):
        for i in range(0,n-1):
            if tab[i]>tab[i+1]:
                aux=tab[i]
                tab[i]=tab[i+1]
                tab[i+1]=aux
                t=True
                cnt+=1
                print(tab)
            else:
                t=False 
        if not t:
            break
    for i in range(0, n):
        print(tab[i])
    print(cnt)

# d) 
#   1) 5
#   2) 0
#   3) 4
#   4) 7

B1()