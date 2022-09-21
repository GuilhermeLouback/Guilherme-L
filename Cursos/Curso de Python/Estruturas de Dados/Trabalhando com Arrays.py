# Array (Matriz)

        #Similar a listas
        #Melhor perfomace


from array import array

letras = ['a', 'b', 'c', 'd']
numeros_i = [10, 20, 30, 40]
numeros_f = [1.2 ,2.2 ,3.2]


print(letras)
print(numeros_i)
print(numeros_f)
print()


letras = array('u', ['a', 'b', 'c', 'd'])  #tipo de lista String 'u'
numeros_i = array('i', [10, 20, 30, 40])    # tipo de lista integer 'i'
numeros_f = array('f', [1.2 ,2.2 ,3.2])    # tipo de lista float 'f'

print(letras)
print(numeros_i)
print(numeros_f)





