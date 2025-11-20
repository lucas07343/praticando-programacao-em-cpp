#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c, f;
    char escala;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    switch (escala) {
        case 'f' :
            cout << endl << "Digite a temperatura em Fahrenheit: ";
            cin >> f;

            c = 5.0 / 9.0 * (f - 32);
            cout << fixed << setprecision(2);
            cout << "Temperatura equivalente em Celsius: " << c;
            break;

        case 'c' :
            cout << endl << "Digite a temperatura em Celsius: ";
            cin >> c;

            f = 9.0 / 5.0 * c + 32;
            cout << fixed << setprecision(2);
            cout << "Temperatura equivalente em Fahrenheit: " << f; 
            break;
    }

    return 0;
}