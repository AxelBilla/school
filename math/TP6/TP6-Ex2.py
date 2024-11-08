def passCheck(pswd):
    if pswd == "sesame":
        return True
    else:
        return False

userInput=input("[PASSWORD]: ")
check=3
while passCheck(userInput) != True and check!=1:
    userInput=input("[PASSWORD]: ")
    check=check-1
if passCheck(userInput) == True:
    print("Access Granted!")
else:
    print("Wrong Password.")
