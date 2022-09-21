<div class="titulo">Operadores Lógicos</div>


<?php
echo "<p class='divisao'><strong>Negação Lógica</strong></p><hr>";
var_dump(true);
echo "<br>";
var_dump(!true); // !true = false
echo "<br>";

echo "<p class='divisao'><strong>Tabela Verdade 'AND' (E)</strong></p><hr>";
var_dump(true && true); // true
var_dump(true && false); // false
var_dump(false && true); // true
var_dump(false && false); // false
var_dump(true && 3 > 2 && 7<= 7  ); // true

var_dump(true and true); // true
var_dump(true and false); // false
var_dump(false and  true); // true
var_dump(false and  false); // false
var_dump(true and 3 > 2 && 7<= 7  ); // true



echo "<p class='divisao'><strong>Tabela Verdade 'OR' (OU)</strong></p><hr>";
var_dump(true || true); // true
var_dump(true || false); // true
var_dump(false || true); // true
var_dump(false || false); // false
var_dump(true || 3 > 2 && 7 <= 7  ); // true

var_dump(true OR true); // true
var_dump(true OR false); // true
var_dump(false OR true); // true
var_dump(false OR false); // false
var_dump(true OR 3 > 2 && 7 <= 7  ); // true



echo "<p class='divisao'><strong>Tabela Verdade 'XOR' (OU Exclusivo)</strong></p><hr>";
var_dump(true XOR true); // false
var_dump(true XOR false); // true
var_dump(false XOR true); // true
var_dump(false XOR false); // false
var_dump(true XOR 3 > 2 && 7 <= 7  ); // true

var_dump(true != true); // false
var_dump(true != false); // true
var_dump(false != true); // true
var_dump(false != false); // false
var_dump(true != 3 > 2 && 7 <= 7  ); // true


echo "<p class='divisao'><strong>Exemplo</strong></p><hr>";
$idade = 65;
$sexo = 'M';

$pagouProvidencia = True;
$criterioHomen = ($idade >= 65 && $sexo == 'M');
$criterioMulher = ($idade >= 60 && $sexo == 'F');
$atingiuCriterio = $criterioHomen || $criterioMulher;
$podeAposentar = $pagouProvidencia && $atingiuCriterio;
echo "Pode aposentar: $podeAposentar.<br>";


if($idade >= 60 && $sexo === 'F'){
    echo "Pode aposentar: idade = $idade, sexo = $sexo";
}else if($idade >= 65 && $sexo === 'M'){
    echo "Pode aposentar, com idade = $idade, e sexo = $sexo";
}else{
    echo "Vai ter que trabalhar mais um pouco";
}


