Ordenar informações de Rentabilidade





SELECT 
	customer_id,
	SUM(amount) AS Total
    
FROM payment
GROUP BY customer_id
ORDER BY Total DESC