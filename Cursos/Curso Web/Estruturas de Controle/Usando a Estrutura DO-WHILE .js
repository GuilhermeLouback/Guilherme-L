function getInteiroAleatorioEntre(min,max) {
    const valor = Math.random() * (max-min) + min
    return Math.floor(valor)
}

let opcao = 0

//Diferente da estrutura While, o Do/While não é necessário atribuir um valor inicial para a variável opcao




do {
    opcao =getInteiroAleatorioEntre(-1,10)
    console.log(`Opção escolhida foi ${opcao}.`)

}while (opcao != -1)

console.log('Até a proxima')

