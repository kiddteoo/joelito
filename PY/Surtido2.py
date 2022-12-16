import operator
casos = int(input(""))
casos2 = 0
gal = ""
count = 0
while(casos > 0):
    d = {}
    casos2 = int(input(""))
    while(casos2 > 0):
        gal = input("")
        if gal in d:
            d[gal] += 1
        else:
            d[gal] = 1
        casos2 -= 1
    d = dict( sorted(d.items(), key=operator.itemgetter(1),reverse=True))
    arr = []
    flag = 0
    if(len(d) >= 3):
        for key, value in d.items():
            while(d[key] > 0):
                arr.append(key)
                d[key] -= 1

        i = 0
        galletita = []
        surtidito = 0
        while(i < len(arr)):
            flag = True
            if(arr[i] not in galletita):
                flag = False
                galletita.append(arr[i])
                arr.pop(i)
                i = 0
            if(len(galletita) == 3):
                flag = False
                surtidito += 1
                i = 0
                galletita = []
            if(flag == True):
                i += 1
        print(surtidito)
    else:
        print("0")
    
    casos -= 1