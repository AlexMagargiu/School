/* Fiind dat un tablou bidimensional cu n linii şi m coloane, afişaţi cea mai mare componentă şi
poziţiile pe care le ocupă. */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n, maxComp = 0, maxCompI = 0, maxCompJ = 0;
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
    for (int j = 0; j < m; j++)
    {
      if (maxComp < a[i][j])
      {
        maxComp = a[i][j];
        maxCompI = i;
        maxCompJ = j;
      }
    }
  }
  cout << "Cea mai mare componenta: " << maxComp << endl;
  cout << "Se afla la pozitia: a[" << maxCompI << "," << maxCompJ << "]" << endl;

  return 0;
}