#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, qtePares;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    qtePares = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            qtePares++;
        }
    }

    if (qtePares != 0) {
        cout << endl << "NUMEROS PARES:" << endl;

        for (i = 0; i < n; i++) {
            if (vet[i] % 2 == 0) {
                cout << vet[i] << " ";
            }
        }

        cout << endl << endl << "QUANTIDADE DE PARES = " << qtePares;
    }
    else {
        cout << endl << "NAO TEM NUMEROS PARES!";
    }

    return 0;
}