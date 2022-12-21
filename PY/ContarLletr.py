def isalpha(x):
    return x in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

def letter(input2):
    count=0
    for char in input2:
        if isalpha(char):
            count += 1
    return count

str2 = "s"
arr = []
while(str2 != "FI"):
	str2 = input()
	if(str2 != "FI"):
		arr.append(letter(str2))
print(*arr)