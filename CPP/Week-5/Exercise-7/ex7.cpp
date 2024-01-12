/* Se considera o matrice An*m (1<n,m<30) cu elemente numere reale. Sa se scrie un program C++ care
sa determine un vector care sa contina elementele minime de pe fiecare coloana a matricei, iar apoi sa
determine cea mai mare valoare din vectorul construit anterior. */

#include <iostream>
using namespace std;
int main()
{
  int a[30][30], m, n, v[50], minLinie;
  cout << "Introduceti nr de linii:";
  cin >> n;
  cout << "Intoduceti nr de coloane:";
  cin >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "a[" << i << "," << j << "]=";
      cin >> a[i][j];
    }
  }

  cout << "Matrice initiala" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    minLinie = a[i][0];
    for (int j = 1; j < m; j++)
    {
      if (a[i][j] < minLinie)
        minLinie = a[i][j];
    }
    v[i] = minLinie;
  }

  cout << "Vectorul cu elementele minime de pe fiecare linie: ";
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }

  int maxVector = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] > maxVector)
    {
      maxVector = v[i];
    }
  }
  cout << endl;
  cout << "Cea mai mare valoare din vector: " << maxVector;

  return 0;
}