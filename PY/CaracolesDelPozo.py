casos = int(input(""))
i = 0
metrosPozo = 0
metrosDia = 0
metrosNoche = 0
pNo = 0
while i < casos:
    metrosPozo, metrosDia, metrosNoche = input("").split()
    metrosPozo = int(metrosPozo)
    metrosDia = int(metrosDia)
    metrosNoche = int(metrosNoche)
    dias = 0
    pNo = 0
    mSubida = 0
    while mSubida< metrosPozo:
        dias += 1
        mSubida = mSubida + metrosDia
        if mSubida >= metrosPozo:
            break
        mSubida = mSubida - metrosNoche
        if (metrosDia == metrosNoche) and (metrosDia <= metrosPozo):
            pNo = 1
            break
        elif metrosDia < metrosNoche:
            pNo = 1
            break 
    if pNo == 1:
        print("NO")
    else:
        print(dias)
    i+=1