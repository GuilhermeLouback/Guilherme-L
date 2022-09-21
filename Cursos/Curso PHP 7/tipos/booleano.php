<div class="titulo">Tipo Booleano</div>

<?php

echo TRUE;
echo "<br>";
echo FALSE;
echo "<br>";
echo "<br>".var_dump(TRUE);
echo "<br>".var_dump(FALSE);

echo "<br>" . var_dump('false');
echo "<br>" . is_bool(false);
echo "<br>" . is_bool("true");


//Regras de conversão 

echo "<p>Regras:</p>";
echo "<br>" . var_dump((bool) 0); // Apenas 0 é falso
echo "<br>" . var_dump((bool) 20);
echo "<br>" . var_dump((bool) -1);
echo "<br>" . var_dump((bool) 0.0);
echo "<br>" . var_dump((bool) 0.000001);
echo "<br>" . var_dump((bool) ""); //false
echo "<br>" . var_dump((bool) "0"); // false
echo "<br>" . var_dump((bool) " ");
echo "<br>" . var_dump((bool) "00");
echo "<br>" . var_dump((bool) "false");


echo "<br>" . var_dump((bool) !"false");
echo "<br>" . var_dump((bool) !!"false");