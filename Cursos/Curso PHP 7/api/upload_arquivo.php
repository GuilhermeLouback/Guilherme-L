<div class="titulo">Upload de Arquivos</div>


<?php
print_r($_FILES);

if ($_FILES && $_FILES['arquivo']){
    $pastaUpload = '/Users/Guilherme/Desktop/'; // pasta onde será salvo o arquivo
    $nomeArquivo = $_FILES['arquivo']['name']; // nome do arquivo
    $arquivo = $pastaUpload . $nomeArquivo; // caminho do arquivo
    $temp = $_FILES['arquivo']['tmp_name']; // nome temporário do arquivo
    
    if (move_uploaded_file($temp, $arquivo)){
        echo "<br>Arquivo enviado com sucesso!";
    } else {
        echo "<br>Erro ao enviar arquivo!";
    }
}
?>

<form action= "#" method = "post" enctype="multipart/form-data">
    <input type="file" name="arquivo">
    <button>Enviar</button>
</form>

<style>
    input,button{
        font-size: 1.2rem;
    }
</style>