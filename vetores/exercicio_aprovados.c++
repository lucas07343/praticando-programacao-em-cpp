#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, qteAprovados;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nomes[n];
    double notas1[n], notas2[n];

    for (i = 0; i < n; i++) {
        cout << endl << "Digite os dados do " << i+1 << "o aluno:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        
        do {
            cout << "Nota primeiro semestre: ";
            cin >> notas1[i];

            if (notas1[i] < 0 || notas1[i] > 10) {
                cout << "NOTA INVALIDA\nFavor digitar novamente:" << endl;
            }
        } while (notas1[i] < 0 || notas1[i] > 10);

        do {
            cout << "Nota segundo semestre: ";
            cin >> notas2[i];

            if (notas2[i] < 0 || notas2[i] > 10) {
                cout << "NOTA INVALIDA\nFavor digitar novamente:" << endl;
            }
        } while (notas2[i] < 0 || notas2[i] > 10);
    }

    qteAprovados = 0;
    for (i = 0; i < n; i++) {
        media = (notas1[i] + notas2[i]) / 2;

        if (media >= 6) {
            qteAprovados++;
        }
    }

    if (qteAprovados != 0) {
        cout << endl << "Alunos aprovados:" << endl;
        for (i = 0; i < n; i++) {
            media = (notas1[i] + notas2[i]) / 2;

            if (media >= 6) {
                cout << nomes[i] << endl;
            }
        }
    }
    else {
        cout << endl << "NINGUEM FOI APROVADO";
    }

    return 0;
}