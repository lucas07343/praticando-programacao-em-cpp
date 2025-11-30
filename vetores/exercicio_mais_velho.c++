#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, maisVelha;
    string nomeMaisVelha;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nomes[n];
    int idades[n];

    for (i = 0; i < n; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    maisVelha = idades[0];
    nomeMaisVelha = nomes[0];
    for (i = 0; i < n; i++) {
        if (idades[i] > maisVelha) {
            maisVelha = idades[i];
            nomeMaisVelha = nomes[i];
        }
    }

    cout << endl << "PESSOA MAIS VELHA: " << nomeMaisVelha;

    return 0;
}