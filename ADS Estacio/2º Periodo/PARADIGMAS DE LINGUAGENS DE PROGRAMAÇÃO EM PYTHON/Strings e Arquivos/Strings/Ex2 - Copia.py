'''Nome ao contrário em maiúsculas. 
Faça um programa que permita ao usuário digitar o seu nome e em seguida mostre o nome do usuário de trás para frente utilizando somente letras maiúsculas. 
Dica: lembre−se que ao informar o nome o usuário pode digitar letras maiúsculas ou minúsculas.'''

def reverso(n):
    return str(n[::-1])

n = str(input('Digite seu nome: ')).strip()
n=n.upper()
print(f'Reverso: {reverso(n)}')




