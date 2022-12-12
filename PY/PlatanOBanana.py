letter = ""
countP = 0
countB = 0
while letter != '0':
    letter = input("")
    if (letter == 'P'):
        countP = countP  + 1
    elif (letter == 'B'):
        countB = countB + 1

if countP > countB:
    print("M'agraden els platans")
elif countB > countP:
    print("M'agraden les bananes")
else:
    print("No puc distingir entre un platan i una banana")
