/*04) Crie uma função que irá receber dois valores, o dividendo e o divisor. A função deverá imprimir o resultado
e o resto da divisão destes dois valores.*/

function DivisaoCompleta(a, b){
    console.log(`O dividendo de ${a} / ${b} é ${a % b}`)

    if ( a / b == 1){
        console.log(`O numero ${a} é divisivel por ${b} `)
    }else{
        console.log(`O numero ${a} não e divisivel por ${b}`)
    }
}


DivisaoCompleta(2,2)
DivisaoCompleta(47,3)
