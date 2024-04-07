<?php

    // podemos definir o nome de uma variável a partir do valor de outra.

    $original = "nome";

    $$original = "valor final";    // o mesmo que $nome = "valor final";

    echo $nome;
    echo '<br>';
    echo $original;

    // IMPORTANTE: Iremos usar muitas variáveis ao longo do curso.
    // Não te preocupes com o que não percebeste até agora.