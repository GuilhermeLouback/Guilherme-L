IN - Filtra diversas categorias de uma só vez



USE sakila;
 
SELECT * FROM address 
WHERE district IN ('Alberta','Texas', 'California');