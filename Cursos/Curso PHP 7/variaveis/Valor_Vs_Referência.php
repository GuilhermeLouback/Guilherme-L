<div class="titulo">Valor VS Referência</div>


<?php

$variavel = 'valor inicial';
echo $variavel;


//Atribuição por valor 
$variavelValor = $variavel; // utiliza dois espaços de memoria
echo "<br> $variavelValor";
$variavelValor = 'novo valor';
echo "<br> $variavel";
echo "<br> $variavelValor";

//Atribuição por referencia 
$variavelReferencia = &$variavel;
$variavelReferencia = 'mesma referencia';
echo "<br> $variavel";
echo "<br> $variavelReferencia";





