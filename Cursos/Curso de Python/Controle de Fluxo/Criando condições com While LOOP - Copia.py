#  WHILE LOOP 

#Excelente para loops dependentes de uma condição

#Criar um produto com  com issão de 10% se for acima de 20,00


valor = int(input('Digite o valor do seu produto: '))


while valor > 20 : 
    valor = (valor * 0.10) + valor
    print(f' O valor final do seu produto será de R$ {valor}')
    break 