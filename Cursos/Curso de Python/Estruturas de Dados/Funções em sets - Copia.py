# Set (Listas)

        #Similar a listas
        #Evita itens duplicaods 
        #Não utiliza index


list1 = set([1, 2, 3, 4, 5, 6])
s1 = { 1, 2, 3, 4, 5, 6}   #set nao aparece numeros duplicados 

s1.add(7)    #Adiciona um item ao set
s1.update([6, 7, 8, 9, 10]) #Adicona uma lista ao Set
s1.remove(10)            #Remove um item do Set
s1.discard(90)            #Remove e nao gera erro se nao haver o item no Set

print(list1)
print(s1)
print(type(list1))
print(type(s1))