#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salario, salarioNovo, aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if (salario <= 1000) {
        porcentagem = 20;
        aumento = salario / 100 * 20;
        salarioNovo = salario + aumento;
    }
    else if (salario <= 3000) {
        porcentagem = 15;
        aumento = salario / 100 * 15;
        salarioNovo = salario + aumento;
    }
    else if (salario <= 8000) {
        porcentagem = 10;
        aumento = salario / 100 * 10;
        salarioNovo = salario + aumento;
    }
    else {
        porcentagem = 5;
        aumento = salario / 100 * 5;
        salarioNovo = salario + aumento;
    }

    cout << fixed << setprecision(2);
    cout << endl << "Novo salario = " << salarioNovo << endl;
    cout << "Aumento = " << aumento << endl;
    cout << "Porcentagem = " << porcentagem << endl;

    return 0;
}