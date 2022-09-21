#Enviar E-mail com os detalhes da compra online(MAximo 3 tentativas) para compras confirmadas


compra_confirmada = True
dados_compra = 'Compra no valor de R$12.50 e entrega confirmada'


for enviar in range(3):
    if compra_confirmada:
        print(dados_compra)
        print('Detalhes enviados para seu e-mail')
        break

    else:
        print('falha na compra')
