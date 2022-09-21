# Set (Listas)

        #Similar a listas
        #Evita itens duplicaods 
        #Não utiliza index




set1 = {'a', 'b', 'c'}
set2 = {'a', 'd', 'e'}
set3 = {'c', 'd', 'f'}

set4 = set1.union(set2)  # Uniao set1 com set2 
set4 = set1.difference(set3) #Diferença entra set1 e set3 
set4 = set1.intersection(set2) #intercessão, o que tem nos dois conjuntos
set4 = set1.symmetric_difference(set3) # Retira todos os duplicaods 



print(set4)