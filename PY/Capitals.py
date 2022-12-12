casos = int(input(""))
cas2 = 0
pais = ""
count = 0
paisCap = {}
arr = []
search = ""
lent = 0
arrSearch = []
while(casos > 0 ):
	cas2 = int(input(""))
	paisCap = {}
	while(cas2 -1 > 0):
		pais = input("")
		arr = pais.split('-')
		paisCap[arr[0]] = arr[1]
		cas2 = cas2 -1
	search = input("")
	lent = len(paisCap)
	count = 0
	for country, capital in paisCap.items():
		if(country == search):
			print(capital)
		else:
			count = count +1
	if (count == lent):
		print('NO HO SE')
		
	casos = casos -1