/* Se considera doi vectori x si y cu cate n elemente numre intregi fiecare. Sa se scrie un program C++
care sa calculeze urmatoarele valori :
a) e = (x1+y1) * (x2+y2) * … * (xn+yn)
b) e = x1y1 + x2y2 + … + xnyn */

#include <iostream>
using namespace std;
int main()
{
  int x[50], y[50], n, ea = 1, eb = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> x[i];
  }
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> y[i];
  }

  for (int i = 1; i <= n; i++)
  {
    ea *= (x[i] + y[i]);
  }

  for (int i = 1; i <= n; i++)
  {
    eb += x[i] * y[i];
  }

  cout << "(a) e = " << ea << endl;
  cout << "(b) e = " << eb << endl;
}