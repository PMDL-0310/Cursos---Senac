-- Simular uma promoção em massa para todos os produtos de uma categoria, aplicando um desconto. O grupo deve testar a alteração e, em seguida, desfazer todas as modificações.

START TRANSACTION;

UPDATE produtos SET preco = preco * 0.90 WHERE categoria_id = 21;
select * from produtos where categoria_id = 21;

COMMIT; -- Altera o valor do produto de forma permanente
-- Select para testar a alteração
select * from produtos where categoria_id = 21;

START TRANSACTION;

UPDATE produtos SET preco = preco * 0.90 WHERE categoria_id = 21;
select * from produtos where categoria_id = 21;

ROLLBACK; -- Altera o valor do produto de forma temporária
-- Select para testar se o valor não foi alterado no BD
select * from produtos where categoria_id = 21;