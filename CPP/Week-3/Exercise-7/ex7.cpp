/* 7. Să se citească un număr natural n. Să se scrie un algoritm care verifică dacă numărul dat este sau nu număr prim. Un număr n este prim dacă are ca divizori doar valorile 1 şi n. */

#include <iostream>
using namespace std;
int main()
{

  int n;
  bool prim = true;

  cout << "Introduceti valoarea pentru n=";
  cin >> n;
  if (n == 0 || n == 1)
  {
    prim = false;
  }
  for (int i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      prim = false;
    }
  }

  if (prim)
    cout << n << " este numar prim" << endl;
  else
    cout << n << " NU este numar prim" << endl;

  return 0;
}
