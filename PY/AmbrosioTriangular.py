casos = int(input(""))
i = 0

while i < casos:
    casoIn = int(input(""))
    valorF = 0
    suma1 = 0
    posicionIni = 1
    while posicionIni <= casoIn:
        valorF = valorF + posicionIni
        suma1 = suma1 + valorF
        posicionIni = posicionIni + 1
    i += 1
    print(suma1)