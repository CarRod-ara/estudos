#include <iostream>
using namespace std;
float x, y, p, r, v;
char z, k;
int main()
{
    for (int i = 0; i < 1; i)
    {
        cout << "Regra de tres:" << endl;
        cout << "Entre com a porcentagem do produto primario: ";
        cin >> x;
        cout << endl
             << "Entre com o valor do produto primario: ";
        cin >> y;
        cout << endl
             << "Voce deseja saber o valor ou porcentagem do produto? (V/P)" << endl;
        cin >> z;
        if (z == 'v' || z == 'V')
        {
            cout << "Digite a porcentagem do produto: ";
            cin >> p;
            r = y * p;
            r = r / x;
            cout << "o valor do produto seria: R$" << r << endl;
        }
        else
        {
            cout << "Digite o valor do produto: ";
            cin >> v;
            r = x * v;
            r = r / y;
            cout << "A porcentagem do produto seria: " << r << "%" << endl;
        }
        cout << "refazer teste? (S/N)" << endl;
        cin >> k << endl;
        if (k == 's' or k == 'S')
        {
            i = 0;
        }
        else if (k == 'n' or k == 'N')
        {
            i = 1;
            cout << "Obrigado pela preferencia ^^" << endl;
            system("pause");
        }
        else
        {
            i = 1;
            cout << "si fuder, digita sa porra direito" << endl;
            system("pause");
        }
    }
}
