Comando last_insert_id() ajuda a acrecentar dados ao ultimo item acrescentado



USE sakila;
 
INSERT INTO country
VALUES 
	(DEFAULT, 'Minas Gerais' , '2021-02-12 21:44:00');
    
INSERT INTO city 
VALUES
	(DEFAULT, 'Garani',last_insert_id(),  '2034-02-12 21:44:00')