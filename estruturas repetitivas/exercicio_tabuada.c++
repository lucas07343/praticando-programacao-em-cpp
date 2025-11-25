#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, resultado;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> N;

    for (i = 1; i <= 10; i++) {
        resultado = N * i;
        cout << N << " X " << i << " = " << resultado << endl;
    }

    return 0;
}