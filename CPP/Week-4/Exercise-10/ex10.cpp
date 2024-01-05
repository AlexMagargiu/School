/* 10. Se considera un vector x = { x1, x2, x3, …, xn }. Sa se scrie un program C++ care sa modifice
vectorul astfel incat in final sa avem :
a) x = { x2, x3, …, xn, x1 }
b) x = { xn, x1, x2, x3, …, xn-1 }
c) x = { x2, x1, x4, x3,…, xn, xn-1 } */

#include <iostream>
using namespace std;
int main()
{
  int n, x[100];
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> x[i];
  }
  for (int i = 1; i <= n; i++)
  {
    int primulElem = x[1];
    int ultimulElem = x[sizeof(x[i]) - 1];
    cout << ultimulElem << primulElem;
  }

  return 0;
  // nu stiu asta
}