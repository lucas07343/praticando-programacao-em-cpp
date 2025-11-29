#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    double mediaAlturas, somaAlturas, porcentagemMenores, qteMenores;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for (i = 0; i < n; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    somaAlturas = 0;
    for (i = 0; i < n; i++) {
        somaAlturas += alturas[i];
    }

    mediaAlturas = somaAlturas / n;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << mediaAlturas << endl;

    qteMenores = 0;
    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            qteMenores++;
        }
    }

    if (qteMenores != 0) {
        porcentagemMenores = (double)100 / n * qteMenores;
        cout << fixed << setprecision(1);
        cout << "Pessoas com menos de 16 anos: " << porcentagemMenores << "%" << endl;

        for (i = 0; i < n; i++) {
            if (idades[i] < 16) {
                cout << nomes[i] << endl;
            }
        }
    }
    else {
        cout << endl << "NAO TEM PESSOAS MENORES DE 16 ANOS";
    }

    return 0;
}