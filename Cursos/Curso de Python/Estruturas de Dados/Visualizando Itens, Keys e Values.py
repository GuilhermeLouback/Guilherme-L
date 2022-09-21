#Dicionarios

    #Utiliza index no formato de keys e values
    #Aceita strings, integer, float, boolean...


 
aluno = {

#    key   value

    'nome':'Ana',
    'idade' : 16, 
    'nota_final': 'A',
    'Aprovação':True, 
    'materias' : ['fisica', 'matematica', 'ingles'] 
}

print(aluno.items()) #itens  keys, values

print(aluno. keys()) #keys 

print(aluno.values()) #values

print(aluno.get('materias')) #obtem valores armazanados na lista mateiras

print(len(aluno)) #obtem o numero de keys 

