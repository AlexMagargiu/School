/* Se da un tablou unidimensional X cu n numere reale si se cere sa se modifice astfel incat sa se
intercaleze intre oricare doua elemente consecutive, media lor aritmetica. */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x[50], n, mediaAritmetica = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> x[i];
  }
  cout << "Vectorul cu media aritmetica intercalat intre elemente: { ";
  for (int i = 1; i <= n; i++)
  {
    cout << x[i] << ", ";
    mediaAritmetica = (x[i] * x[i + 1]) / 2;
    cout << mediaAritmetica;
    if (i < n)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;

  return 0;
}