#Prog. Random 10->20
result=17
userInput=int(input("Choose a number between 10 and 20: "))
while(userInput != result):
    if userInput > 20:
        print("Plus petit!")
    elif userInput < 10:
        print("Plus grand!")
    userInput=int(input("Choose a number between 1 and 3: "))
print("Congrats! The number was indeed", result)