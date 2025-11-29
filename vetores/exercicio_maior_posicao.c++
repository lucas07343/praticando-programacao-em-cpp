#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, indiceMaior;
    double maior;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    indiceMaior = 1;
    for (i = 0; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            indiceMaior = i + 1;
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "MAIOR VALOR = " << maior;
    cout << fixed << setprecision(0);
    cout << endl << "POSICAO DO MAIOR VALOR = " << indiceMaior;

    return 0;
}