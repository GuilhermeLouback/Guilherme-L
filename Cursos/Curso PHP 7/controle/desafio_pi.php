<div class="titulo">Desafio PI</div>


<?php
echo pi();
$pi = 3.14;
echo "<br>";


var_dump(pi());
echo "<br>";
var_dump($pi);
echo "<br>";

if($pi === pi()){
    echo "<p>Igual</p>";
}else{
    echo "<p>Diferente!!!</p>";
}