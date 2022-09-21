function carro (velMAX = 200, delta = 5){
    //Atribut privado
    let velocidadeAtual = 0

    //metodo publico
    this.acelerar = function(){
        if(velocidadeAtual + delta <= velMAX){
            velocidadeAtual += delta
        }else{
            velocidadeAtual = velMAX
        }
    }
    //meotodo publico
    this.getvelocidadeAtual = function(){
        return velocidadeAtual
    }
}

const uno =  new carro
uno.acelerar()
console.log(uno.getvelocidadeAtual())

const ferrari = new carro (350, 20)
ferrari.acelerar()
console.log(ferrari.getvelocidadeAtual())

console.log(typeof carro )
console.log(typeof ferrari)