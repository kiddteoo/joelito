casos = int(input(""))
cas2 = 0
amigo = ""
arr = []
search = ""
arrSearch = []
while(casos > 0 ):
	cas2 = int(input(""))
	ami = {}
	while(cas2 -1 > 0):
		amigo = input("")
		arr = amigo.split(' ')
		ami[arr[0]] = arr[1]
		cas2 = cas2 -1
	search = input("")
	for amigo, mejo in ami.items():
		if(amigo == search):
			print(mejo)
		
	casos = casos -1