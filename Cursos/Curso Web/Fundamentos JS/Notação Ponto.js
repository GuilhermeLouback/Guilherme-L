console.log(Math.ceil(6.1))

const obj1 = {}
obj1.nome = 'bola'
//obj1['nome'] = 'Bola2'  Notação valida, sobrescreve o valor da notação acima 
console.log(obj1)

function obj(nome){
    this.nome = nome //    'this' deixa o atributo publico 
    this.exec = function(){
        console.log('Exec....')
    }
 }

const obj2 = new obj('Cadeira') //muda o atributo da função obj para o nome de obj2
const obj3 = new obj('Mesa')

console.log(obj2.nome)
console.log(obj3.nome)
obj3.exec()