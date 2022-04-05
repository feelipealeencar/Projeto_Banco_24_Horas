#include <iostream>

using namespace std;

int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "              BANCO 24 HORAS                  " << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl << endl;

    int agencia, conta;

    cout << "Digite sua agencia: " << endl, cin >> agencia;
    cout << "Digite sua conta: " << endl, cin >> conta;

    if (agencia == 10 && conta == 20)
    {
            cout << "Cliente: Felipe Xavier";

    }
    else
    {
            cout << "Dados inexistentes";
    }


    return 0;
}
