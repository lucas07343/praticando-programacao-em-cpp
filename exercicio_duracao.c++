#include <bits/stdc++.h>

using namespace std;

int main()
{
    int segundos, minutos, horas;

    cout << "Digite a duracao em segundos: ";
    cin >> segundos;

    minutos = segundos / 60;
    segundos = segundos % 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    cout << endl << horas << ":" << minutos << ":" << segundos;

    return 0;
}