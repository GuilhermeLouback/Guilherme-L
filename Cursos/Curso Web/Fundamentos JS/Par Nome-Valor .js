// par nome / valor 

const saudacao = 'Opa' // contexto lexico 1 - é o local no qual a sua variavel foi definida fisicamente no codigo 

function exec(){
    const saudacao = 'faaaala' // contexto lexico 2 - 
    return saudacao
}

//objetos sao grupos aninhados de pares nome/valor

const cliente = {
    nome : "pedro",
    idade : 32,
    peso : 90,
    endereco: {
        logradouro : 'Rua muito legal',
        numero: 123
    }
}

console.log(saudacao)
console.log(exec())
console.log(cliente)