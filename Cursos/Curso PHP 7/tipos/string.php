<div class="titulo">Tipo String</div>

<?php

echo 'Eu sou uma String';
echo"<br>";
var_dump ("Eu também"); //Nesse caso o caractere com acento conta 
echo"<br>";


//concatenação = é utilizado "."

echo "Nós tambem"." somos";
echo "<br>", "Tambem aceito", " Virgulas";  //"," não e utilizada para concatenação
echo "<br>";

echo "'teste'" . '" teste"' . 'Teste'. "Teste";

//podemos usar print

print("<br> Tambem podemos usar a função print");

//Algumas funções 

echo "<br>" .strtoupper("Maiusculo");
echo "<br>" .strtolower("Minusculo");
echo "<br>" .ucfirst("somente a primeira letra");
echo "<br>" .strlen("Quantas letras???");
echo "<br>" .mb_strlen("Eu também","utf-8");
echo "<br>" .substr("So uma parte mesmo", 7 ,6 ); //começa do indice 7 e conta mais 6 indices


echo "<br>" .str_replace("isso", "aquilo", "Troca isso por isso ");








