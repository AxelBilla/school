def A3():
    tx=t=c=0
    tab=[100,1,2,3,4,5,6,7,8,9]        #[7,25,19,12,18] #[1,5,7,8,9] #[8,2,3,5,6] #[9,7,6,2,0]
    while t<=1:
        for i in range(0,len(tab)-1):
            if tab[i]>tab[i+1]:
                tx=tab[i]
                tab[i]=tab[i+1]
                tab[i+1]=tx
                t=0
                c+=1
                print(tab)
                continue
            else:
                t+=1
    print("final: ", tab, "#",c)

        #[100,1,2,3,4,5,6,7,8,9]

A3()

# d) Aucun cas n'est inférieur, le cas 4 est même supérieur de 2 points (7->9)

# c) [100,1,2,3,4,5,6,7,8,9] = 9
#    [1,2,3,4,5,6,7,100,9] = 1