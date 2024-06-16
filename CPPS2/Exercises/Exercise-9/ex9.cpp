/* Se considera o matrice An*m (1<n,m<30) avand componente numere intregi. Sa se determine maximul
fiecarei coloane si minimul fiecarei linii. */

// 3. Funcție cu parametri formali și fara valoare returnată
#include <iostream>
using namespace std;
void calculeazaMinimPeLinii(int a[30][30], int n, int m)
{
  int minLinie;
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
}

void calculeazaMaximPeColoane(int a[30][30], int n, int m)
{
  int maxColoana;
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
}

int main()
{
  int m, n, a[30][30];
  cout << "Funcție cu parametri formali și fara valoare returnată" << endl;
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

  calculeazaMinimPeLinii(a, n, m);
  calculeazaMaximPeColoane(a, n, m);
  return 0;
}
