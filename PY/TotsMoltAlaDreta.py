def rightRot(lists, num):
    output_list = []
    for item in range(len(lists) - num, len(lists)):
        output_list.append(lists[item])
    for item in range(0, len(lists) - num):
        output_list.append(lists[item])
 
    return output_list
 
casos = int(input())
while(casos > 0):
	casos2 = int(input())
	arr = input().split()
	search = int(input())
	i = 0
	arr2 = rightRot(arr, search)
	print(*arr2)
	casos -= 1