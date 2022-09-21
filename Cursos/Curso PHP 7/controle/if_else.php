<div class="titulo">IF / ELSE</div>

<?php

if(true){
    echo "serei impresso<br>";  
    echo "serei impresso novamente<br>";
}


if(true) {
    echo "verdadeiro A<br>";
    echo "verdadeiro B<br>";
} else {
    echo "falso A<br>";
    echo "falso B<br>";
}

if(false){
    echo "Passo A<br>";
} else if(false){
    echo "Passo B<br>";
} else if(false){
    echo "Passo C<br>";
} else {
    echo "Ultimo passo<br>";
}