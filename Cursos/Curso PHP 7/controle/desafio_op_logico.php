<div class="titulo">Desafio Operadores Lógicos</div>


<form action="#" method="post">
    <div>
        <label for="t1">Trabalho 1 (Terça): </label>
        <select name="t1" id="t1">
            <option value="1">Executado</option>
            <option value="0">Não Executado</option>
        </select>
    </div>
    <div>
        <label for="t2">Trabalho 2 (Quinta): </label>
        <select name="t2" id="t2">
            <option value="1">Executado</option>
            <option value="0">Não Executado</option>
        </select>
    </div>
    <button>Executar</button>
</form>


<style>
    button,
    select {
        font-size: 1.8rem;

    }
</style>


<?php

if (isset($_POST['t1']) && isset($_POST['t2'])) {

    if ($_POST['t1'] == 1 && $_POST['t2'] == 1) {
        echo "Comprará TV de 50`` e tomara sorvete!";
    } elseif ($_POST['t1'] != $_POST['t2']) {
        echo "Comprará TV de 30`` e tomara sorvete!";
    } elseif ($_POST['t1'] == 0 && $_POST['t2'] == 0) {
        echo ("Ficará em casa!");
    }
}
