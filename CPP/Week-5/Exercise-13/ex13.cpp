/* Să se verifice care dintre liniile unei matrici oarecare de elemente întregi este simetrică (elementele
egal departate de capetele liniei sunt egale). */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n;
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

  for (int i = 0; i < n; i++)
  {
    bool esteSimetric = true;
    for (int j = 0; j < m / 2; j++)
    {
      if (a[i][j] != a[i][m - j - 1])
      {
        esteSimetric = false;
        break;
      }
    }

    if (esteSimetric)
    {
      cout << "Linia " << i + 1 << " este simetrica." << endl;
    }
    else
    {
      cout << "Linia " << i + 1 << " NU este simetrica." << endl;
    }
  }

  return 0;
}