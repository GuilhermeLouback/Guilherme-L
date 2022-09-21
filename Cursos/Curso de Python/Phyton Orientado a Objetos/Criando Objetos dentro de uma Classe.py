#Python Orientado a Objetos 

#Classes
    #Utilizadas para criar Objetos (instances)
    #Objetos são parte dentro de uma Class(instancias)
    #Classes são utilizadas para agrupar dados e funções, podendo reutilizar 
    #========
    #Class: Frutas
    #Objects: Abacate, Banana....


#Criar uma classe
class Funcionarios:
    pass

#Criar Objetoo
usuario1 = Funcionarios()
usuario2 = Funcionarios()

#Criar parametros do usuario1

usuario1.nome = 'Elena'
usuario1.sobrenome = 'Cabral'
usuario1.data_nascimento = '11/08/96'

#Criar parametros do usuario1

usuario2.nome = 'Carol'
usuario2.sobrenome = 'Louback'
usuario2.data_nascimento = '19/03/93'


#print
print(usuario1.nome)
print(usuario2.nome)