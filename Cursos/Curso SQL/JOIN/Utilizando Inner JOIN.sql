JOIN - Seleciona a informações de uma ou mais tabelas ao mesmo tempo

USE sakila;
 
SELECT * FROM customer JOIN payment
ON customer.customer_id = payment.payment_id