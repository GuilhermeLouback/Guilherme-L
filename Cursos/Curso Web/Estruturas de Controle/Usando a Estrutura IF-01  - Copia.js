function soBoasNoticias (nota){
    if (nota >= 7 ){
        console.log('Aprovado com ' + nota)
    }
}

soBoasNoticias(8.1)
soBoasNoticias(6.1)

function seForVerdadeEuFalo(valor){
    if(valor){
        console.log('é verdade..' + valor)
    }
}

seForVerdadeEuFalo()
seForVerdadeEuFalo(null)
seForVerdadeEuFalo(undefined)
seForVerdadeEuFalo(NaN)
seForVerdadeEuFalo('')
seForVerdadeEuFalo(0)
seForVerdadeEuFalo(-1)
seForVerdadeEuFalo(' ')
seForVerdadeEuFalo('?')
seForVerdadeEuFalo([])
seForVerdadeEuFalo([1, 2])
seForVerdadeEuFalo({})