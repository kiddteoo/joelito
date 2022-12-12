numC = int(input(""))
while numC > 0:
    numCartes = int(input(""))
    numPis = 2
    numCartRest = 0
    numCartFullPis = 2
    sumaNum = 0
    if numCartes == 2:
        numPis = 1
        numCartRest =  0
        print(numPis, numCartRest)
    elif numCartes == 1:
        numPis = 0
        numCartRest = 1
        print(numPis, numCartRest)
    else:
        if(2 +(numPis * 2) + (numPis -1) > numCartes):
            numCartRest = numCartes -2
            numPis = 1
            print(numPis, numCartRest)
        else:
            numCartFullPis = (2 + (numPis * 2) + (numPis -1))
            while(numCartFullPis <= numCartes):
                finalValor = numCartFullPis
                numPis = numPis + 1
                numCartFullPis = (numCartFullPis + (numPis * 2) + (numPis -1))

            numCartRest = numCartes -finalValor
            print(numPis -1, numCartRest)
    numC = numC -1