#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, lucroBaixo, lucroMedio, lucroCima;
    double valorTotalCompra, valorTotalVenda, lucroTotal;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nomes[n];
    double precoCompra[n], precoVenda[n];

    for (i = 0; i < n; i++) {
        cout << endl << "Produto " << i+1 << ":" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];
    }

    for (i = 0; i < n; i++) {
    }

    return 0;
}