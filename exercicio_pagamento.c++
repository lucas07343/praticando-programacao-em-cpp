#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome;
    double valor, pagamento;
    int horas;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valor;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valor * horas;

    cout << fixed << setprecision(2);
    cout << "\nO pagamento para Joao Silva deve ser " << pagamento;

    return 0;
}