#include <iostream>
using namespace std;

double gradMediu(int v[50], int n)
{
  int suma = 0;
  for (int i = 1; i <= n; i++)
  {
    suma += v[i];
  }
  return static_cast<double>(suma) / n;
}

int main()
{
  int n, a[50][50], i, j, grad_e[50], grad_i[50];
  cout << "Dati nr. de varfuri ale grafului orientat n = ";
  cin >> n;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
    {
      cout << "a[" << i << "][" << j << "]=";
      cin >> a[i][j];
    }
  cout << "\n graful citit are " << n << " noduri!";
  cout << "\n matricea sa de adiacenta este: \n";
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
      cout << " " << a[i][j];
    cout << "\n";
  }
  for (i = 1; i <= n; i++)
  {
    grad_e[i] = 0;
    grad_i[i] = 0;
  }
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      if (a[i][j] == 1)
        grad_e[i]++;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      if (a[j][i] == 1)
        grad_i[i]++;
  for (i = 1; i <= n; i++)
  {
    cout << "\n pentru varful : " << i;
    cout << "\n grad exterior = " << grad_e[i];
    cout << "\n grad interior = " << grad_i[i];
  }
  cout << "\n gradul mediu exterior este " << gradMediu(grad_e, n);
  cout << "\n gradul mediu interior este " << gradMediu(grad_i, n);
  return 0;
}
