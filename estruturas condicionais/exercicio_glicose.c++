#include <bits/stdc++.h>

using namespace std;

int main()
{
    double glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if (glicose <= 100) {
        cout << endl << "Classificacao: normal";
    }
    else if (glicose <= 140) {
        cout << endl << "Classificacao: elevado";
    }
    else {
        cout << endl << "Classificacao: diabetes";
    }

    return 0;
}