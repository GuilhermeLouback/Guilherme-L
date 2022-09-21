# Função Lambda

    #É uma função (pequena) sem nome 
    #Pode ter varios argumentos mas somente 1 expressão 
    #Muito utilizada dentro de outras funções 
    #Codigo mais 'limpo'

'''def somar(x):
    return x + 10         #função 'somar'

print(somar(2))'''


#        argumento   expressão
somar = lambda x,y  : x + y + 10  #função não possui nome
print(somar(2,4))
