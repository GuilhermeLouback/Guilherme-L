<div class="titulo">Olá PHP</div>

<h2> Exemplo A</h2>
<?php 
    echo 'olá '; //Imprime no HTML, toda sentença PHP termina com ';'
    echo 'Mundo <br>'; //Quebra de linha em PHP seraia a TAG <BR> igual HTML
?>


<h2>Exemplo B</h2>

<?= "outra forma de expressar <br>" ?>
<?=  9 * 3 ?>

<h2>Informações sobre versão PHP</h2>

<?php

phpinfo();