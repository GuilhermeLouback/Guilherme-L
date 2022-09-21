<div class="titulo">Leitura de Arquivos </div>


<?php

    $arquivo = fopen ('teste.txt', 'r');
    echo fread($arquivo, 10); // lê 10 bytes do arquivo
    echo '<br>';
    echo fread($arquivo, 10); // lê 10 bytes do arquivo
    fclose($arquivo);

    echo '<hr>';

    $arquivo = fopen ('teste.txt', 'r');
    $tamanho = filesize('teste.txt'); // retorna o tamanho do arquivo
    echo fread($arquivo, $tamanho); // lê todo o arquivo
    fclose($arquivo);

    echo '<hr>';

    $arquivo = fopen ('teste.txt', 'r');
    echo fgets($arquivo), '<br>'; // lê a primeira linha do arquivo
    echo fgets($arquivo), '<br>';
    var_dump(fgets($arquivo));
    fclose($arquivo);

    echo '<hr>';


    $arquivo = fopen ('teste.txt', 'r'); //le todo o arquivo
    while(!feof($arquivo)){
        echo fgets($arquivo), '<br>';
    }
    fclose($arquivo);
    
    echo '<hr>';
    
    $arquivo = fopen ('teste.txt', 'r'); 
    while(!feof($arquivo)){
        echo fgetc($arquivo), '<br>'; // lê um caracter do arquivo
    }
    echo '<br>';
    fclose($arquivo);

    echo '<hr>';

    $arquivo = fopen ('teste.txt', 'r+'); // abre o arquivo para leitura e escrita
    echo fgets($arquivo), '<br>'; 
    echo fgets($arquivo), '<br>'; 
    fwrite($arquivo, 'Teste de escrita 3 '); // escreve no arquivo
    fclose($arquivo);

    echo 'Fim';