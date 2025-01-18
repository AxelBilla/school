from TD5_37_func import *
import time

########################################################################
# Gave up after realizing I didn't actually have to make the full game #
########################################################################
# Perfectly functional as long as no pieces gets to either end, as the #
# lady piece is supposed to make it so they can go back and take out   #
# the out of reach pieces but I'm not gonna bother adding this one.    #
########################################################################

#setup board
a=10
b=10
bg="_" #input("Content to fill with: ")
ply1="X"#input("What should Player 1 be represented by?: ") #"X"
queen1="Y"#input("Who should their queen be represented by?: ") #"Y"
ply2="O"#input("What should Player 2 be represented by?: ") #"O"
queen2="U"#input("Who should their queen be represented by?: ") #"U"

#play
play=False
turns=0
cz=input("Do you want to play? (YES/NO):")
while cz !="YES" and cz !="NO":
    print("Invalid Reply.")
    cz=input("\nDo you want to play? (YES/NO):")
if cz=="YES":
    play=True
else:
    print("Guess you didn't want to play...")
    
while play==True: 
    algList=[]
    for i in range(a):
        algList.append(i)
        algList[i]=listFillerContent(b, bg)
    board=damnPlacer(algList, ply1, ply2)
    board[1][1]="X"
    for i in range(len(board)):
        print(board[i])
        
    while True:
        #Bottom Player (1st)
        turns=turns+1
        board=movement(queen1, ply1, ply2, board, bg, turns)
        time.sleep(0.25)
        w=winCheck(queen2,ply2,board)
        if w==True:
            winMsg(ply1)
            break
            
        #Top Player (2nd)
        turns=turns+1
        board=movement(queen2, ply2, ply1, board, bg, turns)
        time.sleep(0.25)
        w=winCheck(queen1,ply1,board)
        if w==True:
            winMsg(ply2)
            break
    cz=input("Do you want to play another? (YES/NO):")
    while cz !="YES" and cz !="NO":
        print("Invalid Reply.")
        cz=input("Do you want to play another? (YES/NO):")
    if cz=="NO":
        print("Hope you had fun...")
        play=False
    

