# Listas

        #Armazenar mais de uma informação em variaveis
        #Manter a sequencia dos dados em uma variavel 

#             0        1          2         3
produtos= ['arroz', 'feijão', 'laranja', 'banana',5,  6, 7 ,  8]


item1, item2, *outros, item8, = produtos  # *indica que a outros itens na lista 


'''item1= produtos[0]
item2= produtos[1]       E igual a sentença acima 
item3= produtos[2]
item4= produtos[3]'''




print(item1)
print(item2)
print(item8)
print(outros)  # imprime o restante dos itens na lista 
