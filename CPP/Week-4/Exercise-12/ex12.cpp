/* Se considera un vector x care are elemente numere reale. Sa se scrie un program C++ care sa
introduca media geometrica intre oricare doua elmente vecine din vector. Vectorul se va afisa inainte si
dupa modificare. */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x[50], n, mediaGeometrica = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> x[i];
  }
  cout << "Vectorul introdus arata: { ";
  for (int i = 1; i <= n; i++)
  {
    cout << x[i];
    if (i < n)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;
  cout << "Vectorul cu media geometrica intre elementele vecine arata: { ";
  for (int i = 1; i <= n; i++)
  {
    cout << x[i] << ", ";
    mediaGeometrica = sqrt(x[i] * x[i + 1]);
    cout << mediaGeometrica;
    if (i < n)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;

  return 0;
}
