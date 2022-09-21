// Closures é o escopo criado quando uma função e declarada
//Esse escopo permite acessar e manipular variaveis externas a função

//contexto lexico em ação

const x = "Global"

function fora(){
    const x = "local"
    function dentro(){
    return x
    }

    return dentro
}

const minhaFuncao = fora()
console.log(minhaFuncao())
