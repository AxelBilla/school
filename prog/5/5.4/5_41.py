from TD5_41func import *

#Generate the suppliers at random
amnt=int(input("\n How many entries would you like to have?: "))
algList=supFiller(amnt)

#Display for comfort since everything is random
print("\n[Suppliers]\n"+("-"*71)+"\n[    (NAME)   |    (PHONE)    |          (DATE)          | (TURNOVER) ]\n"+("-"*71))
displaySup(algList)
print("-"*71)

#Subprogs
while True:
    print("\n[ (1)= Biggest Turnover | (2)= Name Finder | (3)= Dates between Orders ]")
    choice=int(input("Choose a program to use: "))
    match choice:
        case 1:
            #[Biggest Turnover]
            caPion,caName=caCheck(algList)
            print(f"\nThe biggest TN comes from {algList[caName].name} with {caPion}$\n")
            exi=input("Do you want to stop? (YES/NO): ")
            if exi=="YES":
                break
        case 2:
            #[Name finder]
            nameSearch=input("\nWho would you like to find?: ")
            google=searchFunc(nameSearch, algList)
            print(f"[Result] Last Order: {algList[google].date}\n")
            exi=input("Do you want to stop? (YES/NO): ")
            if exi=="YES":
                break
        case 3:
            #[Orders between two dates]
            fDate=input("\nFirst date (DD/MM/YYYY): ")
            lDate=input("Second date (DD/MM/YYYY): ")
            rdList=orderFinders(fDate,lDate,algList)
            print(f"\n[Orders] {fDate}-{lDate}: ")
            for i in range(len(rdList)):
                    print(f"[ {rdList[i].name} | {rdList[i].phone} ]")
            exi=input("Do you want to stop? (YES/NO): ")
            if exi=="YES":
                break