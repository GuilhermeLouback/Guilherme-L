'''Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.'''


from io import UnsupportedOperation


print('Faça ja o seu cadsatro: ')

usuario = str(input('Digite o login: '))
senha = str(input('Digite sua senha: '))

while usuario==senha:
    print('Erro: O login e a senha nao podem ser os mesmos!!!!')
    usuario = str(input('Digite o login: '))
    senha = str(input('Digite sua senha: '))

else:
    print('Usuario cadastrado com sucesso!!!! ')