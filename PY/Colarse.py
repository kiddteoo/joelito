casos = int(input())
while(casos > 0):
    arr = []
    casos2 = int(input())
    arr = list(map(int, input().split()))
    ele, pos = map(int, input().split())
    arr.insert(pos, ele)
    casos -= 1
    print(*arr)
