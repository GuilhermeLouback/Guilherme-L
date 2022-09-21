/*class pessoa{
    constructor(nome){
        this.nome = nome
    }
    falar(){
        console.log(`Meu nome é ${this.nome}`)
    }
}

const p1 = new pessoa("joão")
p1.falar()*/




function pessoa(nome){
    
    this.nome = nome,
    
    this.falar = function(){
        console.log(`Meu nome é ${this.nome}`)
    }
}

const p1 = new pessoa("joão")
p1.falar()