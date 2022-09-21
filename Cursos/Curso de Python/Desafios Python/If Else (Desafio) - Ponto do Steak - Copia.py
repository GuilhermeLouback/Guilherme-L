'''
Criar um programa que dependendo da temperatura (celcius) do steak ele retorna a ponto de cozimento em portugues. O ususario deverá fornecer a temperatura 

Temperatura - Cozimento
120ºF ou 48ºC - Selada
130ºF ou 54ºC - Ao ponto pra mal
140ºF ou 60ºC - Ao ponto 
150ºF ou 65ºC - Ao ponto pra bem
160ºF ou 71ºC - Bem passada 
'''

temperatura = int(input('Digite a temperatura da carne: '))

if 48 <= temperatura <  54: 
    print('Carne Selada ')

elif 54 <= temperatura <  60: 
    print('Carne ao ponto pra mal ')

elif 60 <= temperatura <  65: 
    print('Carne ao ponto ')

elif 65 <= temperatura <  71: 
    print('Carne ao ponto pra bem ')

elif 71 <= temperatura <  72: 
    print('Carne bem passada')

else:
    print('Valor invalido')
