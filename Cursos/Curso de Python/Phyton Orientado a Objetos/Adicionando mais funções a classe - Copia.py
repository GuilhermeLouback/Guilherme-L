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

    def nome_completo(self):
        return self.nome + ' ' + self.sobrenome
        

#Criar Objetoo
usuario1 = Funcionarios('Elena', 'Cabral', '12/01/2009')
usuario2 = Funcionarios('Carol', 'Silva', '15/10/2005')
usuario3 = Funcionarios('Guilherme' , 'Louback' , '11/08/1996')

#print
'''print(usuario1.nome_completo())'''  #Mesma coisa que a sentença de baixo
print(Funcionarios.nome_completo(usuario1))