/* Se considera o matrice An*m (1<n,m<30) avand componente numere intregi. Sa se determine maximul
fiecarei coloane si minimul fiecarei linii. */

#include <iostream>
using namespace std;
int main()
{
  int m, n, a[30][30], maxColoana = 0, minLinie = 0;
  cout << "Introduceti nr de linii: ";
  cin >> n;
  cout << "Introduceti nr de coloane: ";
  cin >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "a[" << i << "," << j << "]=";
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] < a[i + 1][j])
      {
        minLinie = a[i][j];
      }
      if (a[i][j] > a[i][j + 1])
      {
        maxColoana = a[i][j];
      }
    }
  }
  cout << "Minimum liniei este: " << minLinie;
  cout << "Maximum coloanei este: " << maxColoana;
  return 0;
}