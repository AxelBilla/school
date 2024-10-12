notes=[[],[]]
sumNotes=0

for i in range(9):
    appenderOne=notes[0]
    appenderOne.append(i)
    notes[0][i]=notes[0][i]+1
    appenderTwo=notes[1]
    appenderTwo.append(i)
    notes[1][i]=float(0)

print("  N°:", notes[0])
print("Note:", notes[1])

for i in range(9):
    notes[1][i]=float(input(f"Notes N°{i+1}: "))
    sumNotes=sumNotes+notes[1][i]

print("  N°:  ", notes[0])
print("Note:", notes[1])
print("Moyenne: ", sumNotes/len(notes[1]))