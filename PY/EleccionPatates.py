casos = int(input(""))
leng = 0
fact = 0
lst = []
while(casos > 0):
    leng = input()
    lst = leng.split(" ")
    leng = lst[0]
    lst.pop(0)
    maxs = lst[0]
    index = 0
    for i in range(0,len(lst)):
        if lst[i] > maxs:
            maxs = lst[i]
            index = i
    print(index + 1)
    lst = []
    casos -= 1