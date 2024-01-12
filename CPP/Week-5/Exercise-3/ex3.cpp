/* Sa se construiasca o matrice patratica (n=m) de dimensiune n2 (1<n,m<30) cu primele numere pare
incepand cu 2. */

#include <iostream>
using namespace std;
int main()
{
  int a[30][30], m, n, nrPar = 2;
  cout << "Introduceti nr de linii: ";
  cin >> n;
  m = n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      a[i][j] = nrPar;
      nrPar += 2;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}