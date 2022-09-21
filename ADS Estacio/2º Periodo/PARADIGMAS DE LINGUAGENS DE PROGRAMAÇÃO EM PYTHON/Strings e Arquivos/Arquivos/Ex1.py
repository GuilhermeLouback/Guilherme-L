'''Faça um programa que leia um arquivo texto contendo uma lista de endereços IP e gere um outro arquivo, contendo um relatório dos endereços IP válidos e inválidos.
O arquivo de entrada possui o seguinte formato:
200.135.80.9
192.168.1.1
8.35.67.74
257.32.4.5
85.345.1.2
1.2.3.4
9.8.234.5
192.168.0.256
O arquivo de saída possui o seguinte formato:
[Endereços válidos:]
200.135.80.9
192.168.1.1
8.35.67.74
1.2.3.4

[Endereços inválidos:]
257.32.4.5
85.345.1.2
9.8.234.5
192.168.0.256'''

f = open('Ex1.txt', 'r+')

listaip = (f' Todos IPs :\n 200.135.80.9\n 192.168.1.1\n 8.35.67.74\n 257.32.4.5\n 85.345.1.\n 1.2.3.4\n 9.8.234.5\n 192.168.0.256\n')

ipvalido = (f'[Endereços válidos:]\n 200.135.80.9\n 192.168.1.1\n 8.35.67.74\n 1.2.3.4\n')

ipinvalido = (f'[Endereços inválidos:]\n 257.32.4.5\n 85.345.1.2\n 9.8.234.5\n 192.168.0.256\n')

f.write(listaip)
f.write("\n")
f.write(ipvalido)
f.write("\n")
f.write(ipinvalido)
f.write("\n")