def palindromo(cadena):
    inicio = 0
    fin = len(cadena) - 1
    while cadena[inicio] == cadena[fin]:
        if inicio >= fin:
            return True
        inicio += 1
        fin -= 1
    return False

casos = int(input(""))
i = 0
esPal = False
while (i < casos):
	frase = input("")
	frase = frase.lower()
	frase = frase.replace(" ", "")
	esPal = palindromo(frase)
	if(esPal == True):
		print("SI")
	if(esPal == False):
		print("NO")
	i += 1