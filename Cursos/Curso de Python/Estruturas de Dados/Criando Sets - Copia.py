# Set (Listas)

        #Similar a listas
        #Evita itens duplicaods 
        #Não utiliza index


list1 = [10,20,30,40,50]
list2 = [10,20,60,70]

num1 = set(list1)
num2 = set(list2)

print(num1)
print(num1 | num2)  #União,  retirando valores repetidos 
print(num1 - num2)    #Diferença,  entre eles, somentre itens lsit1
print(num1 ^ num2)     #Valores simetrico, unicos e nao repetidos
print(num1 & num2)     #E, Duplicados nas duas listas 

print(len(num1))       #Tamanho de itens na lista  
