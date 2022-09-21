const obj = {a: 1, b: 2, c: 3, soma(){return a + b + c}};
console.log(JSON.stringify(obj)) //JSON é um formato de dados, padrão textual

//console.log(JSON.parse('{a: 1, "b": 2, "c": 3}')) 
console.log(JSON.parse('{"a": 1, "b": 2, "c": 3}')) //O nome do atributo deve ser string aspas duplas

