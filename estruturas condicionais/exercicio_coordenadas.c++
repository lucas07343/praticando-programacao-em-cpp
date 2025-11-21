#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y;

    cout << "Valor de X: ";
    cin >> x;
    cout << "Valor de Y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << endl << "Q1";
    }
    else if (x < 0 && y > 0) {
        cout << endl << "Q2";
    }
    else if (x < 0 && y < 0) {
        cout << endl << "Q3";
    }
    else if (x > 0 && y < 0) {
        cout << endl << "Q4";
    }
    else if (x != 0 && y == 0) {
        cout << endl << "Eixo X";
    }
    else if (x == 0 && y != 0) {
        cout << endl << "Eixo Y";
    }
    else {
        cout << endl << "Origem";
    }

    return 0;
}