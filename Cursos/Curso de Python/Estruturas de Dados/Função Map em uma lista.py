# Função MAP
    
    #Muito utilizada com listas
    #Aplicar funçõs a um Iterable, por item. (lista, tuple, dicionario, etc.)





lista1 = [1,2,3,4]

def multi(x):
    return x * 2

lista2 = map(multi, lista1)  #faz com que uma função seja aplicada dentro de uma lista 

print(list(lista2))