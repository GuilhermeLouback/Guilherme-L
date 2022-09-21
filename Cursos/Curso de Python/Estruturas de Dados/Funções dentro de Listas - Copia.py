# Listas

        #Armazenar mais de uma informação em variaveis
        #Manter a sequencia dos dados em uma variavel 

cidade1 ='RJ'
cidade2 = 'SP'
cidade3 = 'BH'

cidades = ['RJ', 'SP', 'BH', 'Goiania'] #Armazena na varivael cidades
#Index      0     1     2          3

cidades.append('Santa Catarina ') #Adiciona ao final da lista 
cidades.remove('BH')     #Remove um item da lista 
cidades.insert( 1,'JF')   # insere na posição e nome (posição index, nome)
cidades.pop(0)            #Remove um item de acordo com index()
cidades.sort()            #Ordena em ordem alfabetica 

print(cidades)