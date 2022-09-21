// JSON não e a mesma coisa que arquivos JS

const prod1 = {}
/* chaves é a forma literal de criar um objeto
Um objeto e um grupo de chaves e valores */ 

prod1.nome = "celualr ultra mega"
prod1.preco = 4998.90
prod1['Desconto legal '] = 0.40 // Evitar atributos com espaço

console.log(prod1)

const prod2 = {
    nome: 'Camisa ', 
    preco: 79.90, 
    objeto1:{
        exemplo1: 1,
        objeto2: {
            exemplo2:2
        }
    }
}

'{"nome": "Camisa Polo", "preco": 79.90}' // Exemplo de JSON


console.log(prod2)
