#Python Orientado a Objetos 

#Classes
    #Utilizadas para criar Objetos (instances)
    #Objetos são parte dentro de uma Class(instancias)
    #Classes são utilizadas para agrupar dados e funções, podendo reutilizar 
    #========
    #Class: Frutas
    #Objects: Abacate, Banana....

from datetime import datetime #importar ano do sistema 

#Criar uma classe
class Funcionarios:
    
    def __init__(self, nome, sobrenome, ano_nascimento):
        self.nome = nome
        self.sobrenome = sobrenome
        self.ano_nascimento = ano_nascimento

    def nome_completo(self):
        return self.nome + ' ' + self.sobrenome

    def idade_funcionario(self):
        ano_atual = datetime.now().year #Pega o ano atual do sistema 
        self.ano_nascimento = int(ano_atual - self.ano_nascimento)
        return self.ano_nascimento
        
        

#Criar Objetoo
usuario1 = Funcionarios('Elena', 'Cabral', 2009)
usuario2 = Funcionarios('Carol', 'Silva', 2005)
usuario3 = Funcionarios('Guilherme' , 'Louback' , 1996)

#print
print(Funcionarios.idade_funcionario(usuario1))
print(Funcionarios.idade_funcionario(usuario2))
print(Funcionarios.idade_funcionario(usuario3))