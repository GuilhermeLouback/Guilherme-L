# Gerador de Expressões 

    #Uma forma mais rapida para listas, dicionarios, etc.
    #Menos memoria alocad
    #Valores em bytres


from sys import getsizeof


numeros = [x * 10 for x in range (100)]
print(type(numeros))
                               #ocupa mais lugar na memoria 
print(getsizeof(numeros))


print('====')


numeros = (x * 10 for x in range (100))
print(type(numeros))
                              #ocupa menos lugar na memoria 
print(getsizeof(numeros))

#Para utilizar, somente troca [] por ()  