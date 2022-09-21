'''
Calculo de IMC - Indice de massa corporal 
    Qual é a sua altura?
    Qual é o seu peso ?

Menor que 18,5 - Magreza
Entre 18,5 e 24,9 - Normal
Entre 25 e 29,9 - Sobrepeso
Entre 30 e 39,9 - Obesidade
Maior que 40 - Obsesidade Grave

'''


altura = float(input('Qual sua altura ? '))
peso = float(input('Qual seu peso ? '))

resultado = peso / (altura*altura)
print(f'O se IMC e de {resultado}')

if 18.5 > resultado :
    print('Magreza')

elif 18.5 <= resultado <= 24.9:
    print('Peso Normal')

elif 25 <= resultado <= 29.9:
    print('Sobrepeso')

elif 30 <= resultado <= 39.9:
    print('Obesidade')

elif 40 > resultado:
    print('Obesidade Morbida')

else:
    pint('Valor digitado invalido')
