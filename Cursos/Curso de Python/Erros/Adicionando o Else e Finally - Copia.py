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


finally:
    print('Codigo ok')  #Executa independete se houver erro ou nao 


'''
else:
    print('Usuario digitou um valor correto')   #else so aparece quando o 'Try' está OK
    resultado = valor*2
    print(resultado)
'''
    
