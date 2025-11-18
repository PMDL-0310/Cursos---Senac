CREATE DATABASE IF NOT EXISTS api_usuarios;

USE api_usuarios;

CREATE TABLE IF NOT EXISTS usuarios (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) NOT NULL UNIQUE,
    data_criacao TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

INSERT INTO usuarios (nome, email) VALUES 
('Alice Silva', 'alice.silva@teste.com'),
('Bruno Costa', 'bruno.costa@teste.com');

DESCRIBE usuarios;

SELECT * FROM usuarios;