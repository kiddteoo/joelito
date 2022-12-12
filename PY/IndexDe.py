def index_of(val, in_list):
    try:
        return in_list.index(val)
    except ValueError:
        return -1 

casos = int(input(""))
leng = 0
fact = 0
lst = []
while(casos > 0):
    leng = int(input(""))
    lst = list(map(int, input("").split()))
    fact = int(input(""))
    index = index_of(fact, lst)
    print(index)
    lst = []
    casos -= 1