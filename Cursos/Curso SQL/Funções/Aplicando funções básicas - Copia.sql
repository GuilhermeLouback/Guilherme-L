Media de Valores



USE sakila;
 
SELECT MAX(amount) AS Maior,
		MIN(amount) AS Menor,
        AVG(amount) AS 'Media de Valores'
FROM payment