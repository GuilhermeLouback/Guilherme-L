

// Atribuição por valor e atribuição por referencia


let valor // não inicializada
console.log(valor) // retorna undefined

valor = null // siquinifica ausencia de valor, nao aponta pra nenhum local de memoria
console.log(valor)
//console.log(valor.toString()) /// Erro não le o programa 

const produto = {}
console.log(produto.preco) // ao executar o preco nao esta definido, retorna undefined
console.log(produto)

produto.preco = 3.50
console.log(produto)

produto.preco = undefined // Evite atribuir undefined
console.log(!!produto.preco)
// delete produto.preco  Forma correta de retirar um atributo de uma variavel
console.log(produto)

produto.preco = null // sem preco
console.log(!!produto.preco)
console.log(produto)
