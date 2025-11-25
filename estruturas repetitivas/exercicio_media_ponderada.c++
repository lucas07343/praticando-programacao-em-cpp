#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    double x1, x2, x3, mediaPonderada;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Digite tres numeros:" << endl;
        cin >> x1 >> x2 >> x3;

        mediaPonderada = (x1 * 2 + x2 * 3 + x3 * 5) / 10;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << mediaPonderada << endl;
    }

    return 0;
}