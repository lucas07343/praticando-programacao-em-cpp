#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, qteNegativos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (i = 0; i < n; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << endl << "Elemento [" << i << "," << j << "]:";
            cin >> mat[i][j];
        }
    }

    qteNegativos = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                qteNegativos++;
            }
        }
    }

    cout << endl << "DIAGONAL PRINCIPAL:" << endl;
    for (i = 0; i < n; i++) {
        cout << mat[i][i] << " ";
    }

    if (qteNegativos != 0) {
        cout << "QUANTIDADE DE NEGATIVOS = " << qteNegativos;
    }
    else {
        cout << "A MATRIZ NAO TEM NUMEROS NEGATIVOS";
    }

    return 0;
}