Operção em vendas





SE sakila;
 
SELECT MAX(amount) AS Maior,
		MIN(amount) AS Menor,
        AVG(amount) AS 'Media de Valores',
        SUM(amount) AS 'Total de Vendas',
        COUNT(amount) AS 'Numero de Vendas'
FROM payment
WHERE staff_id = 2