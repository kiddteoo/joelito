casos = int(input(""))
leng = 0
fact = 0
lst = []
count = 0

while(casos > 0):
    count = 0
    leng = int(input(""))
    lst = list(map(int, input("").split()))
    fact = int(input(""))
    for i in range(leng):
        if lst[i] == fact:
            count += 1
    print(count)
    lst = []
    casos -= 1