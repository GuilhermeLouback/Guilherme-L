<div class="titulo">Variáveis Variáveis</div>

<?php

$a = 'ValorA';
$$a = "valorAA";


echo "$a  {$$a}  ${$a}  $ValorA";


echo '<br>';
$epa = "opa";
$opa = "vish";
$vish = "eita";
echo "$epa {$$epa} {$$$epa}";