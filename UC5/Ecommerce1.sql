create database if not exists ecommerce;
use ecommerce;

create table clientes (
    id int auto_increment primary key,
    nome varchar(100) not null,
    email varchar(100) unique not null,
    senha varchar(100) not null,
    telefone varchar(20),
    criado_em datetime default current_timestamp
);

create table enderecos (
    id int auto_increment primary key,
    cliente_id int,
    rua varchar(100),
    numero varchar(10),
    complemento varchar(100),
    bairro varchar(50),
    cidade varchar(50),
    estado char(2),
    foreign key (cliente_id) references clientes(id)
);

-- alter table enderecos add column cep varchar (10) after estado;

create table categorias (
    id int auto_increment primary key,
    nome varchar(100) not null,
    descricao text
);

create table produtos (
    id int auto_increment primary key,
    cliente_id int,
    data_pedido datetime default current_timestamp,
    status varchar(40) default 'Pendente',
    total decimal(10,2),
    foreign key (cliente_id) references clientes(id)
);

create table itens_pedido (
    id int auto_increment primary key,
    pedido_id int,
    produto_id int,
    quantidade int not null,
    preco_unitario decimal(12,2) not null,
    foreign key (pedido_id) references produtos(id),
    foreign key (produto_id) references categorias(id)
);


-- renomeando colunas
alter table clientes
    change column telefone celular varchar(15);

-- renomeando tabela
rename table clientes to usuarios;

-- adicionando nova coluna
alter table usuarios
    add column telefone varchar(12) after email;

create table pedidos (
	id int auto_increment primary key,
    pedido_id int,
    data_pedido datetime default current_timestamp,
    situacao varchar(50) default 'Pedente',
    total decimal(10,2)
);

-- index acessar informacoes com frequencia
alter table usuarios
add index idx_email (email);