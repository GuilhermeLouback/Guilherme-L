const nome = 'Rebeca'

const concatenacao = 'Olá' + nome + '!'

const template =`  
    olá
    ${nome}!` // Abre e fehc com acentos craze

console.log(concatenacao , template)

//expressoes...
console.log(`1+1 = ${1+1}`) // imprime 1+1 = 2

const up = texto =>  texto.toUpperCase() //Deixar a /string abaixo "Cuidado" como maiuscula
console.log(`Ei...${up('cuidado')} !`)

