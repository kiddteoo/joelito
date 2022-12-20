casos = int(input())
while(casos > 0):
    casos2 = int(input())
    arr = list(map(int, input("").split()))
    search = int(input())
    i = 0
    while(i < len(arr)):
        if(arr[i] == search or arr[i] + 1 == search or arr[i] -1 == search):
            print("SI")
            break 
        i += 1
    if(i == len(arr)):
        print("NO")    

    casos -= 1