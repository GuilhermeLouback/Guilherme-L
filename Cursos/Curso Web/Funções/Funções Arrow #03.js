let compararcomThis = function(param){
    console.log(this ===  param)
}

compararcomThis(global)

const obj = {}
compararcomThis = compararcomThis.bind(obj)
compararcomThis(global)
compararcomThis(obj)

let compararcomThisArrow = param => console.log(this === param)
compararcomThisArrow(global)
compararcomThisArrow(module.exports)

compararcomThisArrow = compararcomThisArrow.bind(obj)
compararcomThisArrow(obj)
compararcomThisArrow(module.exports)
