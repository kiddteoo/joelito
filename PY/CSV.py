str = input()
arr = str.split(";")

arr2 = ""
n = 10
for i in range(0, len(arr)):
	if(i != len(arr) - 1):
		if(len(arr[i]) < n):
			arr2 += arr[i]
			arr2 += ";"
		else:
			arr2 += "ERROR"
			arr2 += ";"
	else:
		if(len(arr[i]) < n):
			arr2 += arr[i]
		else:
			arr2 += "ERROR"
print(arr2)