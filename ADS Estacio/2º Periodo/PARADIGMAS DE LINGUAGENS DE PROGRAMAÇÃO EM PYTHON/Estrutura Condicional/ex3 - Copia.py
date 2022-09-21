'''Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.'''

sexo = str(input('Digite a primeira letra de acordo com sua sexualidade : '))

if sexo == 'm':
    print('M - Sexto Masculino')
elif sexo == 'f':
    print('F - Sexo feminino')
elif sexo != 'm' or 'f':
    print('Sexo invalido ')