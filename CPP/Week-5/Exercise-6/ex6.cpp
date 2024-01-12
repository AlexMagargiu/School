/* Se considera o matrice An*m (1<n,m<30) cu elemente numere reale. Sa se scrie un program C++ care
sa determine un vector care sa contina elementele maxime de pe fiecare linie a matricei, iar apoi sa
determine cea mai mica valoare din vectorul construit anterior. */

#include <iostream>
using namespace std;
int main()
{
  int a[30][30], m, n, v[50], maxLinie;
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
    maxLinie = a[i][0];
    for (int j = 1; j < m; j++)
    {
      if (a[i][j] > maxLinie)
        maxLinie = a[i][j];
    }
    v[i] = maxLinie;
  }

  cout << "Vectorul cu elementele maxime de pe fiecare linie: ";
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }

  int minVector = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] < minVector)
    {
      minVector = v[i];
    }
  }
  cout << endl;
  cout << "Cea mai mica valoare din vector: " << minVector;

  return 0;
}