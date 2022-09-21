// Em outras linguagens boolean retrata verdadeiro ou falso !

let isAtivo = false
console.log(isAtivo) // imprime Falso
isAtivo = true
console.log(isAtivo) //Imprime Verdadeiro 


isAtivo = 1
console.log(!!isAtivo) //"!!" Siquinuifica não não 
isAtivo = 1
console.log(!isAtivo) //"!" siquinifica não

console.log('Os verdadeiros...')// todos numeros inteiros com excessão do 0 sao verdadeiros 
console.log(!!3)
console.log(!!-1)
console.log(!!' ')
console.log(!![])
console.log(!!{})
console.log(!!Infinity)
console.log(!!(isAtivo =true))

console.log('Os Falsos...')
console.log(!!0)
console.log(!!'')
console.log(!!null)
console.log(!!NaN)
console.log(!!undefined)
console.log(!!(isAtivo = false))

console.log('Pra finalizar...')
console.log(!!('' || null || 0 || ' ')) //Apeas um deles e verdadeiro entao o resultado e verdadeiro 

let nome = '' 
console.log(nome || 'Desconhecido')