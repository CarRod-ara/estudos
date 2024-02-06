function ajustarTabela() {
    // Seleciona a tabela pelo ID
    var tabela = document.getElementById("minhaTabela");
    // Seleciona as linhas da tabela
    var linhas = tabela.rows;
    // Cria um array vazio para armazenar os valores da coluna
    var arr = new Array();
    // Loop através das linhas da tabela (começando da segunda linha)
    for (var i = 1; i < linhas.length; i++) {
      // Seleciona a célula da primeira coluna
      var celula = linhas[i].cells[0];
      // Obtém o valor da célula
      var valor = celula.innerText;
      // Adiciona o valor ao array
      arr.push(valor);
    }
    // Ordena o array em ordem crescente
    arr.sort();
    // Inverte a ordem do array para ordem decrescente
    arr.reverse();
    // Loop através do array ordenado
    for (var i = 0; i < arr.length; i++) {
      // Loop através das linhas da tabela
      for (var j = 1; j < linhas.length; j++) {
        // Seleciona a célula da primeira coluna
        var celula = linhas[j].cells[0];
        // Verifica se o valor da célula é igual ao valor atual do array
        if (celula.innerText == arr[i]) {
          // Move a linha para o final da tabela
          tabela.appendChild(linhas[j]);
        }
      }
    }
  }

  
/*
  let vodka = [1,5,9,3,7,6];
  function ajustarTabela(vodka);
  console.log(vodka);
  */

  //me dê um desconto faz alguns anos que não pratico 
  //retornar aqui para ajustar e conferir meus erros kk