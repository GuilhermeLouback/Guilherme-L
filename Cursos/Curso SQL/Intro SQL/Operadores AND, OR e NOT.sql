AND = E

OR  =  OU

NOT =  NO



USE sakila;
 
SELECT * FROM payment
WHERE NOT staff_id = 1 AND NOT amount = 0.99 AND customer_id < 10