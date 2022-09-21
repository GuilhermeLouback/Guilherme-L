<div class="titulo">Data #01</div>

<?php 

    echo time().'<br>'; // marco zero 
    echo date('D, d \d\e M \d\e Y').'<br>'; // dia, dia de mes, mes, ano
    echo date('H:i:s').'<br>'; // hora:minuto:segundo
    echo date('d/m/Y H:i:s').'<br>'; // dia/mes/ano hora:minuto:segundo

    echo strftime('%A, %d de %B de %Y', time()).'<br>'; // dia da semana, dia de mes, mes, ano
    setlocale(LC_TIME, 'pt_BR', 'pt_BR.utf-8'); // configura o idioma do sistema para português do Brasil
    echo strftime('%A, %d de %B de %Y', time()).'<br>'; 



    $amanha = time() + (24 * 60 * 60); // soma 24 horas ao tempo atual
    echo strftime ('%A, %d de %B de %Y', $amanha).'<br>'; // dia da semana, dia de mes, mes, ano

    $proximaSemana = strtotime('+1 week'); // soma 1 semana ao tempo atual
    echo strftime ('%A, %d de %B de %Y', $proximaSemana).'<br>'; // dia da semana, dia de mes, mes, ano

    $dataFixa = mktime(15, 30, 50, 1, 25, 1975); // cria um timestamp com os dados informados
    echo strftime ('%A, %d de %B de %Y - %H:%M:%S', $dataFixa).'<br>'; // dia da semana, dia de mes, mes, ano