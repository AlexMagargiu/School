/* Să se afişeze suma elementelor de pe coloana k a unei matrici cu n linii şi m coloane, k<=m. */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n, k, sum = 0;
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

  cout << "Introduceti coloana pentru care doriti sa aflati suma: ";
  cin >> k;
  for (int i = 0; i < n; i++)
  {
    sum += a[i][k];
  }

  cout << "Suma de pe coloana " << k << " este: " << sum;
  return 0;
}