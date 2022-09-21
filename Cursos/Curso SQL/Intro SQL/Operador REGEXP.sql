REGEXP- Filtra elementos assim com LIKE , porem de maneira mais ordenada podendo combinar letras ou numero "[ ]a" combina o que estiver dentro das chaves com a inicial "A" e filtra

ex: pessoas que tenha 'ga' e 'ea' no nome



*Para iniciar usamos '^'

USE sakila;
 
SELECT * FROM actor 
WHERE first_name REGEXP '[ge]a'