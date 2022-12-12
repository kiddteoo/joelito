casos = int(input(""))
leng = 0
fact = 0
flag = 0
lst = []
while(casos > 0):
    flag = 0
    leng = int(input(""))
    lst = list(map(int, input("").split()))
    for i in range(leng -1):
        if lst[i] == lst[i+1]:
            flag = 1
    if flag == 1:
        print("SI")
    else:
        print("NO")
    lst = []
    casos -= 1