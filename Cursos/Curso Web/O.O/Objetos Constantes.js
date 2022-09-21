//pessoa => memoria 123
const pessoa = {
    nome: "joao"
}
pessoa.nome = "pedro"
console.log(pessoa)

//pessoa => 456 => {...}
//pessoa = {nome:"ana"}

Object.freeze(pessoa) // congela a atribuição  de um objeto, torna o objeto constante

pessoa.nome = "maria"
pessoa.end = 'Rua ABC'
delete pessoa.nome

console.log(pessoa.nome)
console.log(pessoa)

//criando um objeto que nao pode ser mudado

const CriandoPessoa = Object.freeze({nome: "joao"})
console.log(CriandoPessoa.nome)