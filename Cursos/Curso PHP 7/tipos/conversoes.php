<div class="titulo">Conversões</div>

<?php

echo is_int(PHP_INT_MAX);

//int para float

echo "<p>INT para Float</p>"."<br>";
var_dump(PHP_INT_MAX + 1);
echo "<br>";
var_dump(1 + 1.0);
echo "<br>";
var_dump((float) 3);  //conversão explicita


//float para int 
echo "<p>FLOAT para INT</p>";
var_dump((int) 2.8);
echo "<br>";
var_dump(intval(2.8)); //pega apenas parte inteira
echo "<br>";
var_dump((int) round(2.8));

//operações com string 
echo "<p>String</p>";
var_dump(3 + "2");
echo "<br>";
var_dump("3" + 2);
echo "<br>";
var_dump("3" . 2);
echo "<br>" . is_string("3" . 2);
var_dump(1 + "cinco");
echo "<br>";
var_dump(1 + "5 cinco");
