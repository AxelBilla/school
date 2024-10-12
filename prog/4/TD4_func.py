tnRate=0
tnAmount=0
result=0
def turnoverCalc(turnover):
    global tnRate
    global tnAmount
    match turnover:
        case one if turnover < 10000:
            tnRate = 0.1
            tnAmount = turnover * tnRate
        case two if turnover >= 10000 and turnover <= 20000:
            tnRate = 0.12
            tnAmount = turnover * tnRate
        case three if turnover > 20000 and turnover <= 30000:
            tnRate = 0.15
            tnAmount = turnover * tnRate
        case four if turnover > 30000:
            tnRate = 0.2
            tnAmount = turnover * tnRate
    print(tnRate, tnAmount)
    return tnRate, tnAmount

def cubed(cubeInt):
    result=cubeInt**2
    return result

def averaged(userInputs):
    global result
    for i in range(len(userInputs)):
        result=result+userInputs[i]
    result=result/int(len(userInputs))
    return result
    