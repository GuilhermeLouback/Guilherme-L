#Dicionarios

    #Utiliza index no formato de keys e values
    #Aceita strings, integer, float, boolean...


 #        key   value
aluno = {'nome':'Ana', 'idade' : 16, 'nota_final': 'A', 'Aprovação':True }

'''
aluno ['nome'] = 'José' # 1ª Forma

aluno.update({'nome':'Guilherme' , 'nota_final': 'B'}) # 2ª forma, atualiza mais de 1 item

aluno.update({'endereco':'Rua A'})  #Adiciona dados ao final


print(aluno['nome'])
print(aluno.get('endereco', 'Não existe ')) #Não exibe msg de erro 
'''


del aluno[ 'idade'] #Remove informações de dentro do dicionario 
print(aluno)