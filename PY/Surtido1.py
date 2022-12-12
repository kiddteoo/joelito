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
    print(min(d.values()))
    casos -= 1