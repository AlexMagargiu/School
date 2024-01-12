/* Se dă un tablou bidimensional cu n linii şi m coloane, 1 <= n,m <= 50, cu componente întregi şi un
număr întreg k. Se cere să se afişeze tabloul cu componentele mărite cu k. */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n, k;
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

  cout << "Cu cat vreti sa mariti matricea? ";
  cin >> k;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      a[i][j] += k;
    }
  }

  cout << "Matricea marita: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  return 0;
}