#Dicionarios

    #Utiliza index no formato de keys e values
    #Aceita strings, integer, float, boolean...


 #        key   value
aluno = {'nome':'Ana', 'idade' : 16, 'nota_final': 'A', 'Aprovação':True }

'''
for x in aluno.keys():
    print(x)     #Imprime somente as keys

for x in aluno.values():
    print(x)     #Imprime somente as valores
'''

for keys, values in aluno.items():
    print(keys, values)     #Imprime valores sem estarem dentro de uma touple 