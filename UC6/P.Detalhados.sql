create view pedidos_detalhados as
select 
	pedido.id as ID_pedido,
    cliente.nome as Nome_cliente,
    s.p.status as Status_pedido,
    produto.nome as Nome_produto,
    ip.quantidade as Quantidade_comprada,
    ip.preco_unitario as Preco_unitario
from 
	pedidos p
join
	usuarios u on p.usuario_id = cliente.id
join 
	itens_pedido ip on pedido.id = ip.pedido_id
join
	produtos pr on ip.produto_id = produto.id;
    
select * from v_pedidos_detalhados;

create view c_clientes_sem_senha as
select 
	id,
    nome,
    email,
    celular,
    criado_em
from 
	usuarios;
    
select * from c_clientes_sem_senha;

create view v_resumo_estoque_baixo as
select 
	pedido.id as ID_Produto,
    p.nome as Nome_produto,
    p.estoque as Estoque_atual,
    p.preco as Preco_venda,
    c.nome as Categoria
from
	produtos p
join 
	categorias c on p.categoria_id = c.id
where
	p.estoque < 10;
    
select * from v_resumo_estoque_baixo;