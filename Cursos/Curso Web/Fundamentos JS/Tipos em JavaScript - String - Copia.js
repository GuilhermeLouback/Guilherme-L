const escola = "cod3r"

console. log(escola.charAt(4)) // mostra e localiza o elemento de indice 4 = R
console.log(escola.charAt(5))// nao encontra erro, mas tambem nao reconhece nada pois nao ha index para elemento na quinta posição 
console.log(escola.charCodeAt(3)) // retorna o codigo html = 051 codigo relacionado a tabela unicode 
console.log(escola.indexOf (3)) // saber qual indice esá dentro da frase  retorna 3 de acordo com index

console.log(escola.substring(1)) // comeca a contar a string a partir do index 1
console.log(escola.substring(0 , 3)) // vai do index 0 ate o 3 sem incluir o indice 3

console.log("Escola ".concat(escola).concat("!")) // um literal, ouu seja, sem aramzenar na variavel para formular a frase
console.log(escola.replace(3 , "e")) //Troca ao valor 3 pela letra E
console.log(escola.replace(/\d/ , 'e')) // Substitui todos os numeros do texto pela letra E
console.log(escola.replace(/\w/g , 'e')) // substitui todos os componentes pela letra E

console.log("ana, Maria, Cod3r , 5".split(','))//Separa a string em sistema de array(lista)
console.log("ana, Maria, Cod3r , 5".split(','))

