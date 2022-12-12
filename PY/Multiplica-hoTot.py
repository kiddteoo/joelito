casos = int(input(""))
leng = 0
arr = 0
fact = 0
lst = []
valF = []

while(casos > 0):
    leng = int(input(""))
    lst = list(map(int, input("").split()))
    fact = int(input(""))
    for num in lst:
        valF.append(num * fact)
    for x in valF:
        print(x, end=" ")
    print()
    lst = []
    valF = []
    casos -= 1