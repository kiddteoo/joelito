def same(str1, str2):
    return sorted(str1) == sorted(str2)


casos = int(input(""))
fraseIn = ""
frase = ""
frase2 = ""
while(casos > 0):
    fraseIn = input("")
    if(len(fraseIn) % 2 == 0):
        frase = fraseIn[:len(fraseIn)//2]
        frase2 = fraseIn[len(fraseIn)//2:]
    else:
        frase = fraseIn[:len(fraseIn)//2]
        frase2 = fraseIn[len(fraseIn)//2:]
        frase2 = frase2[1:]

    if(same(frase, frase2) == True):
        print("SI")
    else:
        print("NO")
    casos -= 1