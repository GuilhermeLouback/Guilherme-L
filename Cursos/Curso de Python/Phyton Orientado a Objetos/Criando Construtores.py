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
    
    def __init__(self, nome, sobrenome, data_nascimento):
        self.nome = nome
        self.sobrenome = sobrenome
        self.data_nascimento = data_nascimento
        

#Criar Objetoo
usuario1 = Funcionarios('Elena', 'Cabral', '12/01/2009')
usuario2 = Funcionarios('Carol', 'Silva', '15/10/2005')
usuario3 = Funcionarios('Guilherme' , 'Louback' , '11/08/1996')

#print
print(usuario1.nome)
print(usuario2.nome)
print(usuario3.nome)



'''
#Criar parametros do usuario1
usuario1.nome = 'Elena'
usuario1.sobrenome = 'Cabral'
usuario1.data_nascimento = '11/08/96'


#Criar parametros do usuario2
usuario2.nome = 'Carol'
usuario2.sobrenome = 'Louback'
usuario2.data_nascimento = '19/03/93'
'''

