#funcs
#Ex.1
def dnaCheck(para):
    match para:
        case "A":
            return "T"
        case "C":
            return "G"
        case "G":
            return "C"
        case "T":
            return "A"

#Ex.2
def dnaComp(b1, b2): #old "myst"
    if len(b1)!=len(b2):
        B=False
    else:
        B=True
        i=0
        while B:
            if i>=len(b1):
                break
            if b1[i]!=dnaCheck(b2[i]):
                B=False
            i+=1
    return B

#Ex.3
def highFreq(b):
    let=["A","C","G","T"]
    hLet=let[0]
    hCount=0
    z=0
    for i in range(len(let)):
        for y in range(len(b)):
            if b[y]==let[i]:
                z+=1
        if z>hCount:
            hCount=z
            hLet=let[i]
        z=0
    return hLet

#Ex.4
def bigA(b):
    hChain=0
    chainA=0
    for i in range(len(b)):
        if b[i]=="A":
            chainA+=1
        if chainA>hChain:
            hChain=chainA
        
    return chainA


#Prog
b1="TTTAAGC"
b2="AAATTCG"

print("----------")
print(dnaComp(b1,b2))
print(bigA(b1))
print(highFreq(b2))
print(dnaCheck("A"))