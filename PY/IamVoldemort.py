def anagrama(palabra1, palabra2):
    palabra1 = palabra1.lower()
    palabra2 = palabra2.lower()
    palabra1 = palabra1.replace(" ", "")
    palabra2 = palabra2.replace(" ", "")
    palabra1_arreglo = list(palabra1)
    palabra2_arreglo = list(palabra2)
    palabra1_arreglo.sort()
    palabra2_arreglo.sort()
    palabra1_ordenada = "".join(palabra1_arreglo)
    palabra2_ordenada = "".join(palabra2_arreglo)
    return palabra1_ordenada == palabra2_ordenada


casos = int(input())
while(casos > 0):
    str1 = input()
    str2 = input()
    es_anagrama = anagrama(str1, str2)
    if es_anagrama:
        print("SI")
    else:
        print("NO")
    casos -= 1