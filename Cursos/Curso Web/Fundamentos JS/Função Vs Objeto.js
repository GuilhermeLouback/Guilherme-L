console.log(typeof Object) //retorna função
console.log(typeof new Object) // retorna objeto 


const cliente  =  function(){}

console.log(typeof cliente) //Função
console.log(typeof new cliente) // Objeto

class produto{} //ES2015 (ES6)
console.log(typeof produto)  //função
console.log(typeof new produto) // objeto

//A forma de criar um objeto em JS, é atravez de função

//Observe que todos objetos são antecedidos por NEW