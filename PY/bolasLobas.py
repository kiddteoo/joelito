casos = int(input())
while(casos > 0):
    frase = input()
    index1, index2 = map(int, input().split())
    str = ""
    k = 0
    for i in range(0, len(frase)):
        if(index1 == i):
            str = str + frase[index2]
        elif(index2 == i):
            str = str + frase[index1]
        else:
            str = str + frase[i]
    print(str)
    casos -= 1
