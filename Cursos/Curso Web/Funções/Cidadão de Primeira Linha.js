// Função em JS é First-Class Object(Citizens)
//Higher-order function

//Criar de Forma Literal 
function fun1(){ }

//Armazenar em uma variavel 
const fun2 =  function(){ }

//Armezanar em um array
const array = [function(a,b){return a + b}, fun1, fun2]
console.log(array[0](2, 3))

//Armazenar atributos em objetos
const obj = {}
obj.falar = function(){return 'opa'}
console.log(obj.falar())

//passar função como parametro 
function run(fun){
    fun()
}

run(function(){console.log('Executando...')})

//Uma função pode retonar/conter uma outra função 
function soma(a, b){
    return function(c){
        console.log(a + b + c)
    }
}

soma(2, 3 )(4)