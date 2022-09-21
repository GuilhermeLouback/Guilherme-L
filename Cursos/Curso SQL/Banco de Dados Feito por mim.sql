USE carros;

CREATE TABLE marcas (
	id INT NOT NULL AUTO_INCREMENT,
    nome_marca VARCHAR(255) NOT NULL,
    PRIMARY KEY(id)
);

CREATE TABLE inventario(
	id INT NOT NULL AUTO_INCREMENT,
	modelo VARCHAR(255) NOT NULL,
    transmissao VARCHAR(255) NOT NULL,
    motor VARCHAR(255) NOT NULL,
    combustivel VARCHAR(255) NOT NULL,
    marcas_id INT NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY (marcas_id) REFERENCES marcas(id)
);

CREATE TABLE clientes (
	id INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(255) NOT NULL,
    sobrenome VARCHAR(255) NOT NULL,
    endereco VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

INSERT INTO clientes (nome, sobrenome, endereco)
VALUES 
	('Guilherme', 'Louback', 'Rua1'),
    ('Beto', 'Castro', 'Rua1'),
    ('Gu', 'Lopes', 'Rua1'),
    ('Gabriel', 'Louback', 'Rua1'),
    ('Mateus', 'Ferreira', 'Rua1');
    
INSERT INTO marcas (nome_marca, origem)
VALUES 
	('BMW', 'Alemanha'),
    ('FIAT', 'Italia'),
    ('Mercedes', 'Alemanha'),
    ('Reanult', 'Franca'),
    ('Jaguar', 'Inglaterra');
    
INSERT INTO inventario(
	modelo,
    transmissao,
    motor,
    combustivel,
    marcas_id
)
VALUES 
	('BMW 218', 'AUTOMATICA', '2.0', 'GASOLINA', 1),
    ('XE 2.0D', 'MANUAL', '2.0', 'DIESEL', 5);