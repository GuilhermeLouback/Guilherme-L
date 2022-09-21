#Erros 
    #Excelente para testes 
    #Não reliza o 'stop' no programa 
    #Mensagens customizadas quando encontra um erro 


try:
    valor = int(input('Digite o valor do seu produto: '))
    print(type(valor))
    print(valor)
except ValueError:
    print('Favor digitar somente numeros')

print('mais codigo abaixo')