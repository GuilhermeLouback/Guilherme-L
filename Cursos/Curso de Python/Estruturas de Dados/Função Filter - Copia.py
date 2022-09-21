# Função Filter

    #Muito utilizado com listas
    #Aplicar uma função a um iterable, filtrando os itens (list, tuple, dicionario, etc.)

valores = [10,12,34,44,57]

'''def remover20(x):
    return x > 20

print(list(map(remover20 , valores))) # Retorna true e false 
print(list(filter(remover20 , valores))) # retorna os valores acima de 20
'''

print(list(map(lambda x : x > 20 , valores)))  
print(list(filter(lambda x : x > 20 , valores)))

#Ambos são as mesmas coisas, Filter reira o resultado da função