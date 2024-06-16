/* 6. Să se citească un număr natural n. Să se scrie un algoritm care afişează toţi divizorii numărului dat. Exemplu: Pentru n = 12, mulţimea divizorilor este formatădin valorile 1, 2, 3, 4, 6, 12. */

// 2. Funcție fără parametri formali și cu valoare returnată
#include <iostream>
using namespace std;

int getInput()
{
    int n;
    cout << "Introduceti valorea pentru n=";
    cin >> n;
    return n;
}

int main()
{
    cout << "Funcție fără parametri formali și cu valoare returnată" << endl;
    int n = getInput();
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
