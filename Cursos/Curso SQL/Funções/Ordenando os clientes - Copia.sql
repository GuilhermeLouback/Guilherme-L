USE sakila;
 
SELECT 
	cus.customer_id AS NOME,
    cus. first_name '1 NOME',
    cus. last_name '2 NOME',
    SUM(amount) AS TOTAL
    
FROM payment pay
JOIN customer cus USING (customer_id)
GROUP BY customer_id
ORDER BY TOTAL DESC