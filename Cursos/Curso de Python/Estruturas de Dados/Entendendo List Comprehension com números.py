#List Comprehension

    #Mais simples de se escrever
    #Utilizado quando voce precisa criar uma nova lista a partir de uma existente 
    #[Expressaão for 'iten' in 'iten' ]

'''
valores = []

for x in range(6):
    valores.append(x * 10)

print(valores)'''

valores = [x * 10 for x in range(6)]
print(valores)

            #Mesma expressão simplificada 