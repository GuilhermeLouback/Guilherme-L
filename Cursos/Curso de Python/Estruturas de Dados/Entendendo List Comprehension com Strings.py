#List Comprehension

    #Mais simples de se escrever
    #Utilizado quando voce precisa criar uma nova lista a partir de uma existente 
    #[Expressaão for 'iten' in 'iten' ]

frutas1= [ 'abacate', 'banana', 'morango', 'kiwi', 'abacaxi']


'''
frutas2 = []

for iten in frutas1:
    if 'n' in  iten:           #Adiciona itens de uma lista a outra
        frutas2.append(iten)
'''
frutas2 = [iten for iten in  frutas1 if 'b' in iten]  #mesmo codigo acima porem reduzido 


print(frutas2)

