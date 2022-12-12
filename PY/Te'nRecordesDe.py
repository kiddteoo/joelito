casos = int(input(""))
leng = 0
fact = 0
lst = []
while(casos > 0):
    leng = int(input(""))
    lst = list(map(int, input("").split()))
    fact = int(input(""))
    for i in range(leng):
        if i == fact:
            print(lst[i])
    lst = []
    casos -= 1