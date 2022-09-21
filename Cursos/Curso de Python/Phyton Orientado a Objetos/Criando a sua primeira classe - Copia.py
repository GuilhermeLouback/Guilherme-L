#Python Orientado a Objetos 

#Classes
    #Utilizadas para criar Objetos (instances)
    #Objetos são parte dentro de uma Class(instancias)
    #Classes são utilizadas para agrupar dados e funções, podendo reutilizar 
    #========
    #Class: Frutas
    #Objects: Abacate, Banana....

class Funcionarios:
    nome = 'Elena'
    sobrenome = 'Cabral'
    data_nascimento = '11/08/1996'


#Objeto
usuario = Funcionarios()

print(usuario.nome)
print(usuario.sobrenome)
print(usuario.data_nascimento)