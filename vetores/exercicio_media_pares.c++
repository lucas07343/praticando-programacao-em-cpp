#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, somaPares, qtePares;
    double mediaPares;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    somaPares = 0;
    qtePares = 0;
    for (i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            somaPares += vet[i];
            qtePares++;
        }
    }

    if (qtePares != 0) {
        mediaPares = somaPares / qtePares;
        cout << fixed << setprecision(1);
        cout << endl << "MEDIA DOS PARES = " << mediaPares;
    }
    else {
        cout << endl << "NENHUM NUMERO PAR";
    }

    return 0;
}