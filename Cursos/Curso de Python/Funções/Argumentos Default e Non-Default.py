  # Funções .
#Parametros ---> argumentos 
#Default = Aquele que voce define o valor no parametro
#Non-Default = Aquele que voce nao define valor no parametro


def boas_vindas(nome, quantidade = 4):  #(Non-Dfault , Defalut)
    print(f'Olá {nome}.')
    print(f'Temos {str(quantidade)} laptops em estoque')


boas_vindas('Linda' )    

boas_vindas('Linda' , 6 )    #Atuliza se inserir novo valor 

        # Non-Default sempre na frente do Defalut
