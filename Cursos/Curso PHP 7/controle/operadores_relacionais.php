<div class="titulo">Operadores Relacionais</div>


<?php
echo "<p class='divisao'>V ou F/Else</p><hr>";
var_dump(1 == 1);   // true
echo "<br>";
var_dump(1 > 1);    // false
echo "<br>";
var_dump(1 >= 1);   // true
echo "<br>";
var_dump(1 <> 1);   // false
echo "<br>";
var_dump(1 != 1);   // false

echo "<p class='divisao'>Relacionais no IF/Else</p><hr>";

$idade = 20;
if($idade < 18){
    echo "Sua idade = $idade , Menor de idade";
}else{
    echo "Sua idade = $idade , Maior de idade";
}

echo "<p class='divisao'>SpaceShip</p><hr>";
var_dump(5 <=> 3); // 1
var_dump(50 <=> 50); // 0
var_dump(50 <=> 500); // -1

