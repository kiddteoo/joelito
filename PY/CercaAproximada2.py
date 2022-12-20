casos = int(input())
while(casos > 0):
    casos2 = int(input())
    arr = list(map(int, input("").split()))
    search, rank = input().split()
    i = 0
    count = 0
    search = int(search)
    rank = int(rank)
    while(i < len(arr)):
        if(arr[i] == search or (arr[i] >= search and arr[i] <= search + rank) or (arr[i] <= search and arr[i] >= search - rank)):
            count += 1 
        i += 1    
    print(count)
    casos -= 1