function tratarErroELancar(erro) {
    //throw new Error('...')
    //throw 10
    //throw true 
    //throw 'MSG'
    throw {
        nome: erro.name,
        msg: erro.mensage,
        date: new date
    }
}

function ImprimirNome(obj){
    try{
    console;log(obj.name.toUpperCase() + '!!!')
}catch(e){
    tratarErroELancar(e)
    } finally{
        console.log('Final')
    }
}

const obj = {nome: 'Roberto'}
ImprimirNome(obj)