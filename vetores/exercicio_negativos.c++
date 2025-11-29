#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, qteNegativos;

    cout << "Quantos numeros voce vai digitar?(maximo 10) ";
    cin >> n;
    
    while (n > 10) {
        cout << "VALOR MAXIMO EXCEDIDO!\nfavor digitar novamente: ";
        cin >> n;
    }

    int vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    qteNegativos = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] < 0) {
            qteNegativos++;
        }
    }
    
    if (qteNegativos != 0) {
        cout << endl << "NUMEROS NEGATIVOS:" << endl;
        for (i = 0; i < n; i++) {
            if (vet[i] < 0) {
                cout << vet[i] << endl;
            }
        }
    }
    else {
        cout << endl << "NAO TEM NUMEROS NEGATIVOS!";
    }

    return 0;
}