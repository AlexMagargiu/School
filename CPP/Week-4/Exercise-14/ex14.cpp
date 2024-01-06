/* Se considera un vector x cu n numere intregi. Sa se copieze intr-un alt vector y elementele pozitive
ale vectorului initial. */

#include <iostream>
using namespace std;
int main()
{
  int x[50], y[50], n, nrPozitive = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (x[i] >= 0)
    {
      y[nrPozitive] = x[i];
      nrPozitive++;
    }
  }
  cout << "Vector cu numere pozitive: { ";
  for (int i = 0; i < nrPozitive; i++)
  {
    cout << y[i];
    if (i < nrPozitive - 1)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;
}