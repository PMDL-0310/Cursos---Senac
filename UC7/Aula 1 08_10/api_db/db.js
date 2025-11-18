const mysql = require('mysql2/promise');

const dbConfig = {
    host: 'localhost',      
    user: 'root',           
    password: 'senac',           
    database: 'api_usuarios', 
    port: 3307, 
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0 
};

const pool = mysql.createPool(dbConfig);

pool.getConnection()
    .then(connection => {
        console.log("Conexão com MySQL estabelecida com sucesso! ");
        connection.release(); 
    })
    .catch(e => {
        console.error("ERRO: Falha ao conectar ao MySQL. Verifique o XAMPP e as credenciais.");
        console.error(e.message);
    });

module.exports = pool;