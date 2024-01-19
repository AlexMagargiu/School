/* 4. Sa se scrie un program care sa determine toate numerele naturale mai mici decat un numar natural n dat, cu proprietatea ca suma cuburilor cifrelor este egala cu numarul insusi. Dati exemple de numere gasite. */

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Introduceti valoarea pentru n:";
  cin >> n;

  for (int i = 1; i < n; i++)
  {
    int sum = 0;
    int temp = i;

    while (temp > 0)
    {
      int cifra = temp % 10;
      sum += cifra * cifra * cifra;
      temp /= 10;
    }

    if (sum == i)
    {
      cout << "Numere gasite: " << i << " " << endl;
    }
  }
  return 0;
}