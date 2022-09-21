//Exemplo 1

const notas = [6.7, 7.4, 9.8, 8.1, 7.7]

for( i in notas){
    console.log(i,notas[i])
}


//Exemplo 2

const pessoa = {
    nome:'ana',
    sobrenome: 'silva',
    idade:'29',
    peso: 64
}

for (let atributos in pessoa){
    console.log(`${atributos} = ${pessoa[atributos]}`)
}

//Colocar let dentro do escopo para a variavel criada no for nao se tornar global 