<div class="titulo">Escrevendo Arquivos</div>

<?php

$arquivo = fopen('teste.txt', 'w');
fwrite($arquivo, "Teste de escrita\n");
$str = "Segunda linha de teste\n";
fwrite($arquivo, $str);
fclose($arquivo);

$arquivo = fopen('teste.txt', 'w'); // abre o arquivo para escrita
fwrite($arquivo, "Novo Teste de escrita\n");
fclose($arquivo);

$arquivo = fopen('teste.txt', 'a'); // abre o arquivo para adicionar mais informações
fwrite($arquivo, "Adicionando valores ao arquivo teste\n");
fwrite($arquivo, "Adicionando 2 valores ao arquivo teste\n");
fclose($arquivo);


ini_set('display_errors', 1);
$arquivo = fopen('teste.txt', 'x');
