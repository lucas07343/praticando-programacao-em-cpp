#include <bits/stdc++.h>

using namespace std;

int main()
{
    int distancia;
    double combustivel, consumo;

    cout << "Distancia percorrida: ";
    cin >> distancia;
    cout << "Combustível gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "\nConsumo medio = " << consumo;

    return 0;
}