/* Să se calculeze valoarea minimă dintr-o matrice oarecare de elemente reale şi să se afişeze numărul
de apariţii a acestei valori în matrice. */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n, nrValMinima = 0;
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

  int valMinima = a[0][0];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (valMinima > a[i][j])
      {
        valMinima = a[i][j];
        nrValMinima = 1;
      }
      else if (valMinima == a[i][j])
      {
        nrValMinima++;
      }
    }
  }

  cout << "Valoarea minima din matrice: " << valMinima << endl;
  cout << "Nr de valori minime din matrice: " << nrValMinima << endl;

  return 0;
}