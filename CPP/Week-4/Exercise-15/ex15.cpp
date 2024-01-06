/* Se citeste un tablou unidimensional cu n (1<n<100) componente numere naturale Se cere sa se
construiasca si sa se afiseze un nou vector cu componentele patrate perfecte ale vectorului initial. */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double a[100], b[100], n;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    b[i] = pow(a[i], 2);
  }
  cout << "Vector cu patrate perfecte: { ";
  for (int i = 0; i < n; i++)
  {
    cout << b[i];
    if (i < n - 1)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;
}