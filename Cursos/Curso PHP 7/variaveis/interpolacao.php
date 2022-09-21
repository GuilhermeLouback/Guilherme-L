<div class="titulo">Interpolação</div>

<?php
 $numero  = 10;
 echo $numero;
 echo '<br> $numero';
 echo "<br> $numero"; // Aspas duplas le o valor da variavel


 $texto = "A sua nota é: $numero";
 echo "<br> $numero";


 $objeto = "caneta";
 echo "<br>Eu tenho 5 $objetos"; // não lê o "S" 
 echo "<br>Eu tenho 5 {$objeto}s"; //lê o "S" 
 echo "<br>Eu tinha 5 { $objeto}s mas perdi 3 {$objeto }s "; 
 echo "<br>";
 echo "$numero "; 


 


