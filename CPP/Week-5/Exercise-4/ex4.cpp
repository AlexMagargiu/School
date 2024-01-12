/* Se considera o matrice An*m (1<n,m<30) cu elemente numere reale. Sa se scrie un program C++ care
sa schimbe, in aceasta matrice, prima linie cu ultima linie. Se va afisa apoi matricea modificata. */

#include <iostream>
using namespace std;
int main()
{
  int a[30][30], m, n, nrTemp = 0;
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
    nrTemp = a[i][0];
    a[i][0] = a[i][m - 1];
    a[i][m - 1] = nrTemp;
  }

  cout << "Matricea dupa modificarea primei linii cu ultima linie" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  return 0;
}