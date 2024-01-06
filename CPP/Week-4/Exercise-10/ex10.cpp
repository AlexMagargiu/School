/* Se considera un vector x = { x1, x2, x3, …, xn }. Sa se scrie un program C++ care sa modifice
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
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  cout << "a) x = { ";
  for (int i = 1; i < n; i++)
  {
    cout << x[i] << ", ";
  }
  cout << x[0] << " }" << endl;

  cout << "b) x = { " << x[n - 1] << ", ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << x[i] << ", ";
  }
  cout << " }" << endl;

  cout << "c) x = { " << x[1] << ", " << x[0] << ", ";
  for (int i = 3; i < n; i += 2)
  {
    cout << x[i] << ", " << x[i - 1] << ", ";
  }
  cout << " }" << endl;

  return 0;
}
