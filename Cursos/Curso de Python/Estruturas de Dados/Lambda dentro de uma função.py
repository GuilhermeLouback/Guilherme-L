# Função Lambda

    #É uma função (pequena) sem nome 
    #Pode ter varios argumentos mas somente 1 expressão 
    #Muito utilizada dentro de outras funções 
    #Codigo mais 'limpo'



def somar(x):
    func2 = lambda x : x + 10 
    return func2(x) * 4

print(somar(2))