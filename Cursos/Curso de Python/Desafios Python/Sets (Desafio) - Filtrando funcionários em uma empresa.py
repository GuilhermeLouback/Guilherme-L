'''
Criar um programa que gera 3 listas de acordo com a necessidade logo abaixo:
lista1 = Funcionarios que tem carro e trabalham a noite 
lista2 = funcionarios que tem carro e trabalham durante o dia 
lista3 = fncionarios que nao tem carro 

'''
funcionarios = ['Ana', 'Marcos', 'Alice', 'Pedro', 'Sofia', 'Bruno', 'Melissa']
turno_dia = ['Ana', 'Marcos', 'Alice', 'Melissa']
turno_noite = ['Pedro', 'Sophia', 'Bruno']
tem_carro = ['Marcos', 'Alice', 'Bruno', 'Melissa']


list1 = set(tem_carro).intersection(turno_noite) 
list2 = set(tem_carro).intersection(turno_dia) 
list3 = set(funcionarios).difference(tem_carro) 


print(list1)
print(list2)
print(list3)

