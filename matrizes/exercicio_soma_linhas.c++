#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n];
    double vet[m];

    for (i = 0; i < m; i++) {
        cout << endl << "Digite os elementos da " << i+1 << "a. linha:" << endl;
        for (j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        vet[i] = 0;
        for (j = 0; j < n; j++) {
            vet[i] += mat[i][j];
        }
    }

    cout << endl << "VETOR GERADO:" << endl;
    for (i = 0; i < m; i++) {
        cout << fixed << setprecision(1);
        cout << vet[i] << endl;
    }

    return 0;
}