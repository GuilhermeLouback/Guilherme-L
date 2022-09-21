'''
Criar um programa que calcula a quantidade de tinta necessaria para pintar um parede. O usuario deverá fornecer as sequintes informações: Rendimento, altura e largura .
O programa deve mostrar a mensagem 'Voce necessita de x latas de tinta '
'''


rendimento = int(input('Qual o rendimento da lata ? '))
altura = int(input('Qual a altura da parede ? '))
largura = int(input('Qual a largura da parede ? '))

def calculo_tinta ():
    area = altura * largura
    total = area / rendimento
    print(f'Voce precisa de {total} latas de tintas ')

    
calculo_tinta()

    