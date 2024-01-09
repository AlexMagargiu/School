/* Se considera o matrice An*m (1<n,m<30) avand componente numere intregi. Se cere sa se calculeze
suma componentelor de pe marginea (rama) matricei. Pt.
    1 2 3 4
A=  10 11 12 5 se va afisa suma 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 47
    9 8 7 6 */

#include <iostream>
using namespace std;

int main()
{
  int a[50][50], n, m, sumMargine = 0;
  cout << "Dati dimensiunile matricei A " << endl;
  cout << "Dati nr de linii n= ";
  cin >> n;
  cout << "Dati nr de coloane m= ";
  cin >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << "a[" << i << "," << j << "]=";
      cin >> a[i][j];
    }
  }

  cout << "Suma ";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
      {
        sumMargine += a[i][j];
        cout << a[i][j];
        if (i != n - 1 || j != m - 1)
          cout << " + ";
      }
    }
  }

  cout << " = " << sumMargine << endl;
  return 0;
}
