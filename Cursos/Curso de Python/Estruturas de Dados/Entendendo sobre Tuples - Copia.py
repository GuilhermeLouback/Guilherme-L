# Tuples

        #Armazenar mais de uma informação em variaveis
        #Manter a sequencia dos dados em uma variavel 
        #Não podem ser alteradas (Immutable)


cores_list = ['amarelo', 'verde', 'azul', 'vermelho']
cores_tuple = ('amarelo', 'verde', 'azul', 'vermelho')

'''
print(type(cores_list)) #<class 'list'>
print(type(cores_tuple)) #<class 'tuple'>
'''


cores_list.append('roxo')
                                #list voce consegue alterea
print(cores_list)


'''
cores_tuple.append('roxo')
                                #Tuple voce não consegue alterea
print(cores_tuple)
'''