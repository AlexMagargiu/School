/* Se considera o matrice An*m (1<n,m<30) cu elemente numere reale. Sa se scrie un program C++ care
sa determine un vector care sa contina elementele maxime de pe fiecare linie a matricei, iar apoi sa
determine cea mai mica valoare din vectorul construit anterior. */

// 4. Funcție cu parametri formali și cu valoare returnată
#include <iostream>
using namespace std;
void calculeazaMaximeLinii(int a[30][30], int n, int m, int v[])
{
  for (int i = 0; i < n; i++)
  {
    int maxLinie = a[i][0];
    for (int j = 1; j < m; j++)
    {
      if (a[i][j] > maxLinie)
        maxLinie = a[i][j];
    }
    v[i] = maxLinie;
  }
}

int calculeazaMinimVector(int v[], int n)
{
  int minVector = v[0];
  for (int i = 1; i < n; i++)
  {
    if (v[i] < minVector)
    {
      minVector = v[i];
    }
  }
  return minVector;
}

int main()
{
  int a[30][30], m, n, v[30];
  cout << "Funcție cu parametri formali și cu valoare returnată" << endl;
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

  cout << "Matrice initiala" << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  calculeazaMaximeLinii(a, n, m, v);

  cout << "Vectorul cu elementele maxime de pe fiecare linie: ";
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }

  int minVector = calculeazaMinimVector(v, n);
  cout << endl;
  cout << "Cea mai mica valoare din vector: " << minVector << endl;

  return 0;
}
