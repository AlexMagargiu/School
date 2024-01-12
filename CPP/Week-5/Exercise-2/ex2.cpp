/* Se considera o matrice An*m (1<n,m<30) avand componente numere intregi. Sa se determine maximul
fiecarei coloane si minimul fiecarei linii. */

#include <iostream>
using namespace std;

int main()
{
  int m, n, a[30][30], maxColoana, minLinie;
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

  minLinie = maxColoana = a[0][0];

  for (int i = 0; i < n; i++)
  {
    minLinie = a[i][0];
    for (int j = 1; j < m; j++)
    {
      if (a[i][j] < minLinie)
        minLinie = a[i][j];
    }
    cout << "Minimum liniei " << i << " este: " << minLinie << endl;
  }

  for (int j = 0; j < m; j++)
  {
    maxColoana = a[0][j];
    for (int i = 1; i < n; i++)
    {
      if (a[i][j] > maxColoana)
        maxColoana = a[i][j];
    }
    cout << "Maximum coloanei " << j << " este: " << maxColoana << endl;
  }

  return 0;
}
