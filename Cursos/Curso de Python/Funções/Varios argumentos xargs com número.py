 # Funções .
# Varios argumentos (xargs)

#Criar uma função que soma varios numeros 

def soma(*numeros): 
    resultado = 0              #Valor inicial 
    for num in numeros:        #
        resultado += num       #Soma = (0+2)+(0+3)+(0+4)+(0+7) = 16
    return resultado           #
        
    

x = soma (2,3,4,7)          #Igual a 16 

print(x)
