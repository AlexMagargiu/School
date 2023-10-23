// Se dau cinci numere. Să se afişeze acele numere care se impart exact la 7.

#include <iostream>
using namespace std;
int main()
{
  int nr[5];
  cout << "Introduceti 5 valori: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> nr[i];
  }
  cout << "Numerele divizibile cu 7 sunt: " << endl;
  for (int i = 0; i < 5; i++)
  {
    if (nr[i] % 7 == 0)
    {
      cout << nr[i] << endl;
    }
  }
  return 0;
}