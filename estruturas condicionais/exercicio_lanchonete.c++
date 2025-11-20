#include <bits/stdc++.h>

using namespace std;

int main()
{
    int codigo, quantidade;
    double valorFinal;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

    switch (codigo) {
        case 1 :
            valorFinal = quantidade * 5;
            break;

        case 2 :
            valorFinal = quantidade * 3.5;
            break;

        case 3 :
            valorFinal = quantidade * 4.8;
            break;

        case 4 :
            valorFinal = quantidade * 8.9;
            break;

        case 5 :
            valorFinal = quantidade * 7.32;
            break;
    }

    cout << fixed << setprecision(2);
    cout << endl << "Valor a pagar: R$ " << valorFinal;

    return 0;
}