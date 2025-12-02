#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, lucroBaixo, lucroMedio, lucroCima;
    double valorTotalCompra, valorTotalVenda, lucroTotal;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nomes[n];
    double precoCompras[n], precoVendas[n], lucros[n];

    for (i = 0; i < n; i++) {
        cout << endl << "Produto " << i+1 << ":" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Preco de compra: ";
        cin >> precoCompras[i];
        cout << "Preco de venda: ";
        cin >> precoVendas[i];
    }

   for (i = 0; i < n; i++) {
        lucros[i] = (precoVendas[i] - precoCompras[i]) / precoCompras[i] * 100;
    }

    lucroBaixo = 0;
    lucroMedio = 0;
    lucroCima = 0;
    for (i = 0; i < n; i++) {
        if (lucros[i] < 10) {
            lucroBaixo++;
        }
        else if (lucros[i] < 20) {
            lucroMedio++;
        }
        else {
            lucroCima++;
        }
    }

    valorTotalCompra = 0;
    valorTotalVenda = 0;
    for (i = 0; i < n; i++) {
        valorTotalCompra += precoCompras[i];
        valorTotalVenda += precoVendas[i];
    }

    lucroTotal = valorTotalVenda - valorTotalCompra;

    cout << endl << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << lucroBaixo << endl;
    cout << "Lucro entre 10% e 20%: " << lucroMedio << endl;
    cout << "Lucro acima de 20%: " << lucroCima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << valorTotalCompra << endl;
    cout << "Valor total de venda: " << valorTotalVenda << endl;
    cout << "Lucro total: " << lucroTotal;

    return 0;
}