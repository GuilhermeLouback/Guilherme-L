     # Funções .
# Varios argumentos (xargs) identificando os parametros

#Criar uma função que armazena numeros e strings(dados)


def agencia(**carro):
    return carro

print(agencia (marca ='Gol', cor = 'Branco', motor = 1.0, placa = 'QPV3245'))
print(agencia (marca ='Gol', cor = 'Azul', motor = 1.0))
print(agencia (marca ='Gol', cor = 'Preto'))
