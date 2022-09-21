/*Totamente manipulado pelo index! 
Não tem tamanho fixo ... */

const valores = [7.7, 8.9, 6.3, 9.2]
console.log(valores[0], valores[3]) // imprime os valores do array de acordo com os index 
console.log(valores[5]) // Não gera erro, porem nao exibe nada porque nao tem ess valor index declarado 

valores[4] = 10  // altrando valor do index 4
console.log(valores)


console.log(valores.length) // Mostra a quantidade de elementos dentro de uma array 

valores.push ({id: 3}, false, null, 'Teste') //Adicona valores a array 
console.log(valores)

console.log(valores.pop()) //Remove o ultimno elemento de uma array 
delete valores[0] // Deleta valores de acordo com o index 
console.log(valores)

console.log(typeof valores) // Em JS ele é do tipo objeto 