/* Se da un tablou unidimensional cu n (1<n<100) componente numere naturale. Sa se calculeze suma
componentelor divizibile cu a, pentru un numar a citit de la tastatura. */

#include <iostream>
using namespace std;
int main()
{
  int n, v[100], a;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }
  cout << "Introduceti o valoare pentru a: ";
  cin >> a;
  for (int i = 1; i <= n; i++)
  {
    if (v[i] % a == 0)
    {
      cout << v[i] << " ";
    }
  }
  return 0;
}