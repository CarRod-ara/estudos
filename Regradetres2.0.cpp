#include <iostream>

using namespace std;

int main() {
  // Definindo variáveis com nomes descritivos
  float valorProdutoPrimario, valorProduto;
  double porcentagemProdutoPrimario, porcentagemProduto; 
  char opcao, opcaoRepetir;
  
  // Loop para realizar cálculos enquanto o usuário desejar
  do {
    // Exibindo menu de opções
    cout << "Regra de três:" << endl;
    cout << "Digite a opção desejada:" << endl;
    cout << "1. Calcular valor do produto" << endl;
    cout << "2. Calcular porcentagem do produto" << endl;
    cin >> opcao;

    // Lendo dados de acordo com a opção escolhida
    switch (opcao) {
      case '1':
        cout << "Digite a porcentagem do produto primário: ";
        cin >> porcentagemProdutoPrimario;
        cout << "Digite o valor do produto primário: ";
        cin >> valorProdutoPrimario;
        cout << "Digite a porcentagem do produto: ";
        cin >> porcentagemProduto;

        // Calculando o valor do produto
        valorProduto = (valorProdutoPrimario * porcentagemProduto) / porcentagemProdutoPrimario;

        // Exibindo o resultado
        cout << "O valor do produto seria: R$" << valorProduto << endl;
        break;

      case '2':
        cout << "Digite o valor do produto primário: ";
        cin >> valorProdutoPrimario;
        cout << "Digite o valor do produto: ";
        cin >> valorProduto;

        // Calculando a porcentagem do produto
        porcentagemProduto = (valorProduto * 100) / valorProdutoPrimario;

        // Exibindo o resultado
        cout << "A porcentagem do produto seria: " << porcentagemProduto << "%" << endl;
        break;

      default:
        cout << "Opção inválida!" << endl;
    }

    // Perguntando se o usuário deseja realizar outro cálculo
    cout << "Deseja realizar outro cálculo? (S/N)" << endl;
    cin >> opcaoRepetir;
  } while (opcaoRepetir == 's' || opcaoRepetir == 'S');

  // Mensagem de despedida
  cout << "Obrigado por usar a calculadora de regra de três!" << endl;

  return 0;
}


