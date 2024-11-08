
#Functions
def listFillerContent(col, cnt): #Fills a list full of whatever you want
    funcList=[]
    for i in range(col):
        funcList.append(i)
        funcList[i]=cnt
    return funcList

def damnPlacer(board,black,white): #Fills a standard board with pieces
    for i in range(len(board)):
        if i == 0 or i == 2 or i==10 or i==8 or i ==6:
            for j in range(len(board[i])):
                if j%2==0:
                    if i>5:
                        board[i][j]=black
                    else:
                        board[i][j]=white
        elif i == 1 or i == 3 or i == 9 or i ==7:
            for j in range(len(board[i])):
                if j%2!=0:
                    if i>5:
                        board[i][j]=black
                    else:
                        board[i][j]=white
    return board

def movement(queen, player, opp, board, bg, trn): #(x[l][c] l=vertical, c=horizontal)
    print("How to select: >Line.Column, i.e: >10.01 = Tenth Row, First Column.")
    getPiece=float(input("Which piece do you want to move?: "))
    while getPiece > 10.10 or getPiece < 1.01: 
        print("Invalid Input, try again.")
        getPiece=float(input("Which piece do you want to move?: "))
    l=int(getPiece)-1
    c=int((float(getPiece)-int(getPiece))*100+0.1)-1
    print(l,c)
    
    #Regular Piece Control
    if board[l][c] == player:
        print("[Movements]: (TopLeft)=G, (TopRight)=J, (BottomLeft)=B, (BottomRight)=N")
        getMove=input("Where do you want to move? (G/J/B/N): ")
        
        if getMove == "G" and (c-1 < 0 or l-1 < 0):
            print("Invalid Position, try again.")
            board=movement(queen, player, opp, board, bg, trn)
            return board
        elif getMove =="J" and (c+1 > 9 or l-1 < 0):
            print("Invalid Position, try again.")
            board=movement(queen, player, opp, board, bg, trn)
            return board
        elif getMove =="B" and (c-1 < 0 or l+1 > 9):
            print("Invalid Position, try again.")
            board=movement(queen, player, opp, board, bg, trn)
            return board
        elif getMove =="N" and (c+1 > 9 or l+1 > 9):
            print("Invalid Position, try again.")
            board=movement(queen, player, opp, board, bg, trn)
            return board
            
        match getMove:
            case "G":
                if board[l-1][c-1] != bg and board[l-1][c-1] != opp or (l-1) < 0 or (c-1) < 0 or trn%2!=1:
                    print("Invalid Move, try again.")
                    board=movement(queen, player, opp, board, bg, trn)
                    return board
                else:
                    board[l][c]=bg
                    lat=l-1
                    board[l-1][c-1]=queenCheck(lat,board, queen, player)
            case "J":
                if board[l-1][c+1] != bg and board[l-1][c+1] != opp or (l-1) < 0 or (c+1) > 10 or trn%2!=1:
                    print("Invalid Move, try again.")
                    board=movement(queen, player, opp, board, bg, trn)
                    return board
                else:
                    board[l][c]=bg
                    lat=l-1
                    board[l-1][c+1]=queenCheck(lat,board, queen, player)
            case "B":
                if board[l+1][c-1] != bg and board[l+1][c-1] != opp or (l+1) > 10 or (c-1) < 0 or trn%2!=0:
                    print("Invalid Move, try again.")
                    board=movement(queen, player, opp, board, bg, trn)
                    return board
                else:
                    board[l][c]=bg
                    lat=l+1
                    board[l+1][c-1]=queenCheck(lat,board, queen, player)
            case "N":
                if board[l+1][c+1] != bg and board[l+1][c+1] != opp or (l+1) > 10 or (c+1) > 10 or trn%2!=0:
                    print("Invalid Move, try again.")
                    board=movement(queen, player, opp, board, bg, trn)
                    return board
                else:
                    board[l][c]=bg
                    lat=l+1
                    board[l+1][c+1]=queenCheck(lat,board, queen, player)
        
    #YASSSS Control            
    elif board[l][c] == queen:
        print("[Movements]: (TopLeft)=G, (TopRight)=J, (BottomLeft)=B, (BottomRight)=N")
        getMove=input("Where do you want to move? (G/J/B/N): ")
        
        
        
    else:
        print("Invalid Piece, try again.")
        board=movement(queen, player, opp, board, bg, trn)
        return board

    displayBoard(board)
    return board

def winCheck(qnopp,opp,br):
    count=0
    for i in range(len(br)):
        if opp not in br[i] and qnopp not in br[i]:
            count=count+1
    if count==10:
        win=True
        return win

def winMsg(player):
    print(f"\n [ Congratulations to {player}! ] \n [ You're incredible! ]")
    
def queenCheck(l,board, queen, rgpiece):
    if l==0 or l==9:
        piece=rgpiece #change this to QUEEN to enable the piece, otherwise keep it as rgpiece for the simplified ver.
    else:
        piece=rgpiece
    return piece

def displayBoard(board):
    for i in range(len(board)):
        print(board[i])