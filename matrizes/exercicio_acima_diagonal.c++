#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, cont, somaAcimaDiagonal;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for (i = 0; i < n; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    somaAcimaDiagonal = 0;
    cont = 0;
    for (i = 0; i < n; i++) {
        cont++;
        for (j = cont; j < n; j++) {
            somaAcimaDiagonal += mat[i][j];
        }
    }

    cout << endl << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << somaAcimaDiagonal << endl;

    return 0;
}