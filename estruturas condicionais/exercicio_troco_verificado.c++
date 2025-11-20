#include <bits/stdc++.h>

using namespace std;

int main()
{
    double preco, dinheiro, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    if (preco * quantidade < dinheiro) {
        troco = dinheiro - preco * quantidade;
        cout << fixed << setprecision(2);
        cout << endl << "TROCO = " << troco;
    }
    else {
        troco = preco * quantidade - dinheiro;
        cout << fixed << setprecision(2);
        cout << endl << "DINHEIRO INSUFICIENTE. FALTAM " << troco << " REAIS";
    }

    return 0;
}