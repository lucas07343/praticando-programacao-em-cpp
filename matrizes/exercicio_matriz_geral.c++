#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j, qtePositivos, indiceLinha, indiceColuna;
    double somaPositivos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for (i = 0; i < n; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    somaPositivos = 0;
    qtePositivos = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] > 0) {
                somaPositivos += mat[i][j];
                qtePositivos++;
            }
        }
    }

    cout << fixed << setprecision(1);

    if (qtePositivos != 0) {
        cout << endl << "SOMA DOS POSITIVOS: " << somaPositivos << endl;
    }
    else {
        cout << endl << "NAO TEM NUMEROS POSITIVOS" << endl;
    }

    cout << endl << "Escolha uma linha: ";
    cin >> indiceLinha;

    cout << endl << "LINHA ESCOLHIDA: ";
    for (j = 0; j < n; j++) {
        cout << mat[indiceLinha][j] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> indiceColuna;

    cout << endl << "COLUNA ESCOLHIDA: ";
    for (i = 0; i < n; i++) {
        cout << mat[i][indiceColuna] << " ";
    }

    cout << endl << endl << "DIAGONAL PRINCIPAL: ";
    for (i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    cout << endl << endl << "MATRIZ ALTERADA:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}