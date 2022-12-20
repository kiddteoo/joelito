casos = int(input())

while(casos > 0):
	casos2 = int(input())
	arr = input().split()
	pos = int(input())
	i = 0
	arr2 = []
	while(i < len(arr)):
		if(i == pos):
			i += 1
		else:
			arr2.append(arr[i])
			i += 1
	print(*arr2)
	casos -= 1