casos = int(input(""))
i = 0

while i < casos:
    casoIn = int(input(""))
    if casoIn < 1:
        print("ELS NOMBRES NATURALS COMENCEN EN 1")
    else:
        sum1 = 0
        prod = 1
        posicionIni = 1
        valorF = 0
        while posicionIni <= casoIn:
            sum1 += posicionIni
            prod *= posicionIni
            posicionIni += 1
        print("SUMA:",sum1, "PRODUCTE:",prod)
    i += 1