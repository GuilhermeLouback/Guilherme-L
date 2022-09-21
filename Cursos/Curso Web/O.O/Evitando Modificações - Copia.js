//object.preventExtensions - Não deixa adicionar novos atributos ao objeto
///não deixa adiconar novos atributos ao objeto

const produto = Object.preventExtensions({
    nome: 'Qualquer',preco: 1.99, tag: 'promoção'
})


console.log('Extensível: ', Object.isExtensible(produto)) //Testa se o objeto é extensível
produto.nome = 'Borracha'
produto.descricao = 'Borracha escolar branca'
delete produto.tag

console.log(produto)

//object.seal - Não deixa adicionar novos atributos ao objeto
//nao cosegue adicionar novos atributos ao objeto ou exlcuir atributos existentes
const pessoa = {nome: 'Juliana', idade: 35}
Object.seal(pessoa)
console.log('Selado: ', Object.isSealed(pessoa))

pessoa.sobrenome = 'Silva'
delete pessoa.nome
pessoa.idade = 29
console.log(pessoa)

//object.freeze = selado + valores constantes



