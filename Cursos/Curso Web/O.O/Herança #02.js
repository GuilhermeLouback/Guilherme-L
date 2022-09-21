//Cadeia de prototipos (prototype chain)
Object.prototype.attr0 = '0'  //nao recomendado
const avo = {attr1: 'A'}
const pai = {__proto__:avo, attr2: 'B'}
const filho = {__proto__:pai, attr3: 'C'}
console.log(filho.attr0, filho.attr1, filho.attr2, filho.attr3)


const carro = {
    VelAtual:0,
    VelMAX: 200,
    acelerarMais(delta) {
        if(this.VelAtual + delta <= this.VelMAX){
            this.VelAtual += delta
        }else{
            this.VelAtual = this.VelMAX
        }
    },
    status(){
        return `${this.VelAtual}KM/h de ${this.VelMAX}KM/h`
    }
}

const ferrari = {
    modelo : 'F40',
    VelMAX: 324,//sombreamento
}


const volvo = {
    modelo: 'V40',
    status(){
        return `${this.modelo}: ${super.status()}`
    }
}

Object.setPrototypeOf(ferrari,carro)
Object.setPrototypeOf(volvo,carro)

console.log(ferrari)
console.log(volvo)

volvo.acelerarMais(100)
console.log(volvo.status())

ferrari.acelerarMais(300)
console.log(ferrari.status())