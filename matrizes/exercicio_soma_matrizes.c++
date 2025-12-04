#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int matA[m][n], matB[m][n], matC[m][n];

    cout << endl << "Digite os valores da matriz A:" << endl;
    for (i = 0; i < m; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matA[i][j];
        }
    }

    cout << endl << "Digite os valores da matriz B:" << endl;
    for (i = 0; i < m; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matB[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    cout << endl << "MATRIZ SOMA:" << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << matC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}