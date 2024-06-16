/* Se citeste un tablou unidimensional cu n (1<n<100) componente numere naturale Se cere sa se
construiasca si sa se afiseze un nou vector cu componentele patrate perfecte ale vectorului initial. */

#include <iostream>
#include <cmath>
using namespace std;

// 3. Funcție cu parametri formali și fara valoare returnată
void calculeazaPatrate(double a[], double b[], int n)
{
  for (int i = 0; i < n; i++)
  {
    b[i] = pow(a[i], 2);
  }
}

int main()
{
  double a[100], b[100];
  int n;
  cout << "Funcție cu parametri formali și fara valoare returnată" << endl;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;

  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  calculeazaPatrate(a, b, n);

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

  return 0;
}
