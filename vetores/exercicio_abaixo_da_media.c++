#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    double media, soma;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    soma = 0;
    for (i = 0; i < n; i++) {
        soma += vet[i];
    }

    media = soma / n;
    cout << fixed << setprecision(3);
    cout << endl << "MEDIA DO VETOR = " << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    cout << fixed << setprecision(1);
    for (i = 0; i < n; i++) {
        if (vet[i] < media) {
            cout << vet[i] << endl;
        }
    }

    return 0;
}