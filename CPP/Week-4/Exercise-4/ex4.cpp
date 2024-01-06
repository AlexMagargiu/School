/* Sa se scrie un program care sa calculeze diferenta a doua multimi de cate n, respectiv m numere
intregi memorate cu ajutorul vectorilor. Date de intrare: n = 5 a = {1, 2, 5, 7, 12} si m = 4 b = {2, 4,
8, 12} Date de iesire: se obtine: k = 3 e = {1, 5, 7} */

#include <iostream>
using namespace std;

int main()
{
  int m, n, a[50], b[50], k = 0, d[50];

  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti o valoare pentru m: ";
  cin >> m;

  cout << "Introduceti " << n << " valori pentru primul sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  cout << "Introduceti " << m << " valori pentru al doilea sir" << endl;
  for (int i = 1; i <= m; i++)
  {
    cin >> b[i];
  }

  for (int i = 1; i <= n; i++)
  {
    bool nrComun = false;
    for (int j = 1; j <= m; j++)
    {
      if (a[i] == b[j])
      {
        nrComun = true;
        break;
      }
    }
    if (!nrComun)
    {
      k++;
      d[k] = a[i];
    }
  }

  cout << "k = " << k << endl;
  cout << "Elementele diferite sunt: ";
  for (int i = 1; i <= k; i++)
  {
    cout << d[i] << " ";
  }

  return 0;
}
