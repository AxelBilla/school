from random import *

randomInt = randint(1,100)
i=0
print("\n[ Find the secret code! ]\n")
while True:
    i=i+1
    userInput = int(input("What number would you like to try out?: "))
    if userInput > randomInt:
        print("--> Too big!\n")
        continue
    elif userInput < randomInt:
        print("--> Too small!\n")
        continue
    else:
        print(f"--> You got it on attempt #{i}, congrats!\n")
        break

