from typing import NamedTuple
from random import *
from datetime import datetime, timedelta
from random_word import RandomWords
#pip install Random-Word

class supplier(NamedTuple): #Create the equivalent of a struct in python.
    name: str
    phone: str
    date: str
    tn: float

#f=supplier("Nom","0600000000","01/01/2001",100.5)

def supFiller(ent): #Fills with suppliers
    r=RandomWords()
    funcList=[]
    for i in range(ent):
        a=r.get_random_word() #Can be changed to a manual input, just too lazy to type every time
        b=str(0)+str(randint(600000000,999999999)) #Can be changed to a manual input, just too lazy to type every time
        bList=[]
        for j in range(len(b)):
            bList.append(b[j:j+2])
        b=str(bList[0])+"."+str(bList[1])+"."+str(bList[2])+"."+str(bList[3])+"."+str(bList[4])
        c=gen_datetime() #Can be changed to a manual input, just too lazy to type every time
        d=(i+2.5)*randint(1,200) #Can be changed to a manual input, just too lazy to type every time
        funcList.append(i)
        funcList[i]=supplier(a,b,c,d) #give the index [i] of the funcList list the values create above for name,phone,date and tn.
    return funcList

def displaySup(funcList): #Comfortably displays the whole list of suppliers.
    for i in range(len(funcList)):
        print(f"[ {funcList[i].name} | {funcList[i].phone} | {funcList[i].date} | {funcList[i].tn}]")



def caCheck(funcList): #Check who has the biggest turnover
    idCa=0
    maxCa=funcList[0].tn #maxCa is automatically set as the first entry's turnover rate
    for i in range(len(funcList)):
        if funcList[i].tn > maxCa: #If the entry [i]'s turnover rate is higher than the current highest,
            maxCa=funcList[i].tn #replace it
            idCa=i #Keep in mind the index of the biggest turnover
    return maxCa, idCa

def searchFunc(target, funcList):
    for i in range(len(funcList)):
        if funcList[i].name == target: #If the name of the entry at index [i] is the same as our target,
            idCa=i #Keeps in mind the index of our target
    return idCa

def orderFinders(a,b,funcList):
    orderList=[]
    cnt=0 #Keep count
    format_data = "%d/%M/%Y" #Get time format of DD/MM/YYYY
    a=datetime.strptime(str(a), format_data) #Turns our 1st input into a valid date
    b=datetime.strptime(str(b), format_data) #Turns our 2nd input into a valid date
    for i in range(len(funcList)):
        if funcList[i].date > a and funcList[i].date < b: #If the date of index [i] is between our 1st & 2nd date,
            orderList.append(cnt) #Create and index [cnt] in our orderList
            orderList[cnt]=funcList[i] #Fill the newly created index [cnt] with the whole content of our orignal list's index [i] 
            cnt=cnt+1 #Increase the count so that next time we can do the above, we can still create a new index.
    if orderList==[]:
        print("[Result] Last Order: NONE \n")
    else:
        return orderList



#Credit: https://gist.github.com/rg3915/db907d7455a4949dbe69
#Used this to generate random dates
def gen_datetime(min_year=1900, max_year=datetime.now().year):
    # generate a datetime in format yyyy-mm-dd hh:mm:ss.000000
    start = datetime(min_year, 1, 1)
    years = max_year - min_year + 1
    end = start + timedelta(days=365 * years)
    return start + (end - start) * random()
        