# Listas

        #Armazenar mais de uma informação em variaveis
        #Manter a sequencia dos dados em uma variavel 

cor_cliente = input('Digite a cor desejada: ')
cores = ['amarelo', 'verde', 'azul', 'vermelho']




if cor_cliente.lower() in cores:   #Utiliza o lower porque todas as cores da lista estão em letras minusculas 
    
    print('Em estoque ')
else:
    print('Não temos essa cor em estoque')

