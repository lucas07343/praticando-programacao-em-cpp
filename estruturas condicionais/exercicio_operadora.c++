#include <bits/stdc++.h>

using namespace std;

int main()
{
    int minutos;
    double pagamento;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos <= 100) {
        pagamento = 50;
    }
    else {
        pagamento = (minutos - 100) * 2 + 50;
    }

    cout << fixed << setprecision(2);
    cout << endl << "Valor a pagar: R$ " << pagamento;

    return 0;
}