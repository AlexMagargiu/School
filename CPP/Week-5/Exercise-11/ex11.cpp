/* Să se calculeze valoarea maximă dintr-o matrice oarecare de elemente reale şi să se afişeze toate
poziţiile din matrice unde se găseste aceasta. */

#include <iostream>
using namespace std;
int main()
{
  int a[50][50], m, n, valMaxima = 0;
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
      if (valMaxima < a[i][j])
      {
        valMaxima = a[i][j];
      }
    }
  }

  cout << "Valoarea maxima din matrice: " << valMaxima << endl;
  cout << "Pozițiile unde se găsește aceasta:" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == valMaxima)
      {
        cout << "a[" << i << "," << j << "]" << endl;
      }
    }
  }

  return 0;
}