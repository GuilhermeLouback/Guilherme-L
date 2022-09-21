<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
<div class="titulo">Formulários</div>



<h2>Cadastro</h2>

<?php
$erros=[];

if (count($_POST)> 0){  //validar se ususario digitou algo no formulário
    if(!filter_input(INPUT_POST,"nome")){
        $erros ['nome'] = "Nome não informado";
    }

    if (!filter_input(INPUT_POST,"nascimeto")){ //validar compo com data de nascimento
        $data = DateTime :: createFromFormat('d/m/Y',$_POST ['nascimento']);
        if(!$data){
            $erros ['nascimento'] = 'Nascimento não informado';
        }   
    }

    if(!filter_var($_POST['email'],FILTER_VALIDATE_EMAIL)){ //validar email
        $erros ['email'] = 'Email não informado';
    }

    if(!filter_var($_POST['site'],FILTER_VALIDATE_URL)){ //validar site
        $erros['site'] = 'Site não informado';
    }

    $filhosConfig= [ // configuração para filhos maximo e minimo
        "options"=>[
            "min_range"=>0,
            "max_range"=>20
        ]
    ];

    if(!filter_var($_POST['filhos'],FILTER_VALIDATE_INT,$filhosConfig) && $_POST['filhos']!= 0) { //validar quantidade de filhos
        $erros ['filhos'] =  'Quantidade de filhos não informado';
    }


    $salarioConfig = [ //configuração para salario
        "options"=>[
            "decimal"=>",", //separador decimal
 
        ]
    ];
    
    if(!filter_var($_POST['salario'],FILTER_VALIDATE_FLOAT)){ //validar filhos
        $erros ['salario'] =  'Salario não informado';
    }


}

?>

<?php foreach($erros as $erro) :?>
    <!--<div class="alert alert-danger" role="alert">
        <?= ""//$erro ?>
    </div>-->
<?php endforeach?>


<form action="#" method="post">
    <div class = "form-row">
        <div class="form-group col-md-9">
            <label for="nome">Nome</label>
            <input type = "text" class = "form-control <?= $erros['nome'] ? 'is-invalid' : '' ?>"
            id= "nome" name = "nome" placeholder = "Nome"
            value = "<?= $_POST['nome']?>">
            <div class = "invalid-feedback">
                <?= $erros['nome']?>
            </div>
        </div>
        <div class="form-group col-md-3">
            <label for="nascimento">Data de Nascimento</label>
            <input type = "text" class = "form-control <?= $erros['nascimento'] ? 'is-invalid' : '' ?>"
            id= "nascimento" name = "Nascimento" placeholder = "Nome"
            value = "<?= $_POST['nascimento']?>">
            <div class = "invalid-feedback">
                <?= $erros['nascimento']?>
            </div>
        </div>
    </div>
    <div class = "form-row">
        <div class="form-group col-md-6">
            <label for="email">E-mail</label>
            <input type = "text" class = "form-control <?= $erros['email'] ? 'is-invalid' : '' ?>"
            id= "email" name = "email" placeholder = "E-mail"
            value = "<?= $_POST['email']?>">
            <div class = "invalid-feedback">
                <?= $erros['email']?>
            </div>
        </div>
        <div class="form-group col-md-6">
            <label for="site">Site</label>
            <input type = "text" class = "form-control <?= $erros['site'] ? 'is-invalid' : '' ?>"
            id= "site" name = "site" placeholder = "Site"
            value = "<?= $_POST['site']?>">
            <div class = "invalid-feedback">
                <?= $erros['site']?>
            </div>
        </div>
    </div>
    <div class = "form-row">
        <div class="form-group col-md-6">
            <label for="filhos">Quantidade de Filhos</label>
            <input type = "number" class = "form-control <?= $erros['filhos'] ? 'is-invalid' : '' ?>"
            id= "filhos" name = "filhos" placeholder = "Qtd de Filhos"
            value = "<?= $_POST['filhos']?>">
            <div class = "invalid-feedback">
                <?= $erros['filhos']?>
            </div>
        </div>
        <div class="form-group col-md-6">
            <label for="salario">Salário</label>
            <input type = "text" class = "form-control <?= $erros['salario'] ? 'is-invalid' : '' ?>"
            id= "salario" name = "salario" placeholder = "Salário"
            value = "<?= $_POST['salario']?>">
            <div class = "invalid-feedback">
                <?= $erros['salario']?>
            </div>
        </div>
    </div>
    <button class = "btn btn-primary btn-lg">Enviar</button>
</form>