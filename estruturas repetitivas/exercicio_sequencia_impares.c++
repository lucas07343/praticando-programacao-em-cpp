#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, i;

    cout << "Digite o valor de X: ";
    cin >> X;

    for (i = 1; i <= X; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}