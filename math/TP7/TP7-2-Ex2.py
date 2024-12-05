mot=input("mot: ")
l=len(mot)
newmot=""
if l%2==0:
    for i in range(0,l-1,2):
        newmot=newmot+mot[i]+mot[i+1]+"#"
else:
    for i in range(0,l-1,2):
        newmot=newmot+mot[i:i+2]+"#"
    newmot=newmot+mot[l-1]
print(newmot)