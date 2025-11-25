#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i, troca, somaImpares;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    somaImpares = 0;
    for (i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            somaImpares = somaImpares + i;
        }
    }

    cout << endl << "SOMA DOS IMPARES = " << somaImpares;

    return 0;
}