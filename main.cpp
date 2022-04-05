#include <iostream>

using namespace std;

int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "              BANCO 24 HORAS                  " << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl << endl;

    int agencia, conta, operacao, valorsaque;

    cout << "Digite sua agencia: " << endl, cin >> agencia;
    cout << "Digite sua conta: " << endl, cin >> conta;

    if (agencia == 10 && conta == 20)
    {
            cout << "Cliente: Felipe Xavier" << endl << endl;
            cout << "Escolha o tipo de operacao: " << endl;
            cout << " [1] Para Saque" << endl;
            cout << " [2] Para Deposito" << endl;
            cin >> operacao;



    }
    else
    {
            cout << "Dados inexistentes";
    }

    switch(operacao)
    {
        case 1 : cout << "Digite o valor: "; break;
                 cin >> valorsaque;
    }

    return 0;
}
