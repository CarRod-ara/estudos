#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR");
    int opção, RepetirOperação;
    double PrimeiroNumero, SegundoNumero, Resultado;

    cout << "Bem vindo ao meu exercício de calculadora" << endl;
    cout << "Hoje começaremos pelo básico" << endl;
    cout << "Qual seria sua operação de preferência hoje:" << endl;
    cout << "'1'.(SOMA) '2'.(SUBTRAÇÃO) '3'. (MULTIPLICAÇÃO) '4'.(DIVISÃO)" << endl;
    cin >> opção;
    int i = 1;
    do
    {
        if (opção == 1)
        {

            do
            {
                cout << "Escolha o primeiro número que desejaria somar: " << endl;
                cin >> PrimeiroNumero;
                cout << endl;
                cout << "Escolha o segundo número que desejaria somar: " << endl;
                cin >> SegundoNumero;
                cout << endl;
                Resultado = PrimeiroNumero + SegundoNumero;
                cout << "O Resultado da soma dá: " << Resultado << endl;
                cout << "Desejaria repetir a soma? '1'.(sim) ou '2'.(não)" << endl;
                cin >> RepetirOperação;
            } while (RepetirOperação <= 1);
        }
        else if (opção == 2)
        {

            do
            {
                cout << "Escolha o primeiro número que desejaria subtrair: " << endl;
                cin >> PrimeiroNumero;
                cout << endl;
                cout << "Escolha o segundo número que desejaria subtrair: " << endl;
                cin >> SegundoNumero;
                cout << endl;
                Resultado = PrimeiroNumero - SegundoNumero;
                cout << "O Resultado da subtração dá: " << Resultado << endl;
                cout << "Desejaria repetir a subtração? '1'.(sim) ou '2'.(não)" << endl;
                cin >> RepetirOperação;
            } while (RepetirOperação <= 1);
        }
        else if (opção == 3)
        {

            do
            {
                cout << "Escolha o primeiro número que desejaria multiplica: " << endl;
                cin >> PrimeiroNumero;
                cout << endl;
                cout << "Escolha o segundo número que desejaria multiplica: " << endl;
                cin >> SegundoNumero;
                cout << endl;
                Resultado = PrimeiroNumero * SegundoNumero;
                cout << "O Resultado da multiplicação dá: " << Resultado << endl;
                cout << "Desejaria repetir a multiplicação? '1'.(sim) ou '2'.(não)" << endl;
                cin >> RepetirOperação;
            } while (RepetirOperação <= 1);
        }
        else if (opção == 4)
        {

            do
            {
                cout << "Escolha o primeiro número que desejaria dividir: " << endl;
                cin >> PrimeiroNumero;
                cout << endl;
                cout << "Escolha o segundo número que desejaria dividir: " << endl;
                cin >> SegundoNumero;
                cout << endl;
                Resultado = PrimeiroNumero / SegundoNumero;
                cout << "O Resultado da divizão dá: " << Resultado << endl;
                cout << "Desejaria repetir a divisão? '1'.(sim) ou '2'.(não)" << endl;
                cin >> RepetirOperação;
            } while (RepetirOperação <= 1);
        }
        else
        {
            cout << "Lamento essa opção não é póssivel, por favor escolha um dos números ou infelizmente o programa irá desligar" << endl;
            cin >> opção;
            return i++;
        }
    }while (i <= 2);
}
