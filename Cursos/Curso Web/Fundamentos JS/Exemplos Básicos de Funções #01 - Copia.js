//Função sem retorno

//Difererente de python que e "def" em js para declarar uma função usamos "Function"

function imprimirSoma(a,b) {
    console.log(a + b)
}

imprimirSoma(2,3)
imprimirSoma(2) // NaN pois falta uma variavel, há trataemnto 
imprimirSoma(2,3,5,6,8,7,9,10) // faz a soma normalmente e iqnora os outros numeros declarado 
imprimirSoma() // Retorna NaN


//função com retorno
function soma(a , b = 1){
    return a + b
}

console.log(soma(2,3))
console.log(soma(2))
console.log(soma()) //Retorna NaN