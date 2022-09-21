#Erros 
    #Excelente para testes 
    #Não reliza o 'stop' no programa 
    #Mensagens customizadas quando encontra um erro 

try:
    letras = ['a','b','c']    
    print(letras[3])    #Dentro do 'try' ele testa 


except IndexError:         #Se um erro de Index exibe msg
    print('Index ñ existe')


