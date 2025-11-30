#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, qteMulheres, qteHomens;
    double menorAltura, maiorAltura, mediaAlturasMulheres, somaAlturasMulheres;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    char generos[n];
    double alturas[n];

    for (i = 0; i < n; i++) {
        cout << endl << "Altura da " << i+1 << "a pessoa: ";
        cin >> alturas[i];
        do {
            cout << "Genero da " << i+1 << "a pessoa:(F/M) ";
            cin >> generos[i];
            generos[i] = toupper(generos[i]);

            if (generos[i] != 'F' && generos[i] != 'M') {
                cout << "GENERO INVALIDO\nFavor digitar novamente" << endl;
            }
        } while (generos[i] != 'F' && generos[i] != 'M');
    }

    menorAltura = alturas[0];
    maiorAltura = alturas[0];
    for (i = 0; i < n; i++) {
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
        else if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
    }

    somaAlturasMulheres = 0;
    qteMulheres = 0;
    for (i = 0; i < n; i++) {
        if (generos[i] == 'F') {
            somaAlturasMulheres += alturas[i];
            qteMulheres++;
        }
    }

    mediaAlturasMulheres = somaAlturasMulheres / qteMulheres;
    qteHomens = n - qteMulheres;

    cout << fixed << setprecision(2);
    cout << endl << "Menor altura = " << menorAltura << endl;
    cout << "Maior altura = " << maiorAltura << endl;
    cout << "Media das alturas das mulheres = " << mediaAlturasMulheres << endl;
    cout << fixed << setprecision(0);
    cout << "Numero de homens = " << qteHomens;

    return 0;
}