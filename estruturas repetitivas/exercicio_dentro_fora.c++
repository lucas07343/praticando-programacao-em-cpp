#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, dentro, fora;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    dentro = 0;
    fora = 0;
    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> x;

        if (x >= 10 && x <= 20) {
            dentro++;
        }
        else {
            fora++;
        }
    }

    cout << endl << dentro << " DENTRO";
    cout << endl << fora << " FORA";

    return 0;
}