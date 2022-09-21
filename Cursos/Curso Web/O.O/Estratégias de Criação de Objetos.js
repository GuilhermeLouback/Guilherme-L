// Usando forma literal 

const obj1 ={

}

//Objeto em JS
console.log(typeof Object, typeof new Object)
const obj2 = new Object
console.log(obj2)

//funções construtoras
function produto (nome,preco,desconto) {
    this.nome = nome
    this.getPrecoComDEsconto = () => {
        return preco * (1 - desconto)
    }
}

const p1 = new produto('Caneta', 7.99, 0.15)
const p2 = new produto('Notebook', 2998.99, 0.25)

console.log(p1.getPrecoComDEsconto(), p2.getPrecoComDEsconto())

//função factory

function criarFuncionario(nome, salarioBase, faltas){
    return{
        nome,
        salarioBase,
        faltas,
        getSalario(){
            return(salarioBase/30)*(30-faltas)
        }
    }
}


const f1 = criarFuncionario('Joao', 7980, 4)
const f2 = criarFuncionario('Maria', 11400, 1)

console.log(f1.getSalario(), f2.getSalario())


//Object.creat

const filha  = Object.create(null)
filha.nome = "ana"
console.log(filha)
 
//Uma função famosa que retorna objeto 

const fromJSON = JSON.parse('{"info": "Sou um JSOM"}')
console.log(fromJSON.info)