#include <bits/stdc++.h>

using namespace std;

int main()
{
    int horaInicial, horaFinal, duracao;

    cout << "Hora inicial: ";
    cin >> horaInicial;
    cout << "Hora final: ";
    cin >> horaFinal;

    if (horaFinal > horaInicial) {
        duracao = horaFinal - horaInicial;
    }
    else {
        duracao = 24 - horaInicial + horaFinal;
    }

    cout << endl << "O JOGO DUROU " << duracao << " HORA(S)";

    return 0;
}