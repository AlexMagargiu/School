// Sa se scrie un program care sa calculeze reuniunea a doua multimi de cate n, respectiv m numere
// intregi memorate cu ajutorul vectorilor

#include <iostream>
using namespace std;
int main()
{
  int m, n, sum1 = 0, sum2 = 0, Total = 0, a[50], b[50];
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti o valoare pentru m: ";
  cin >> m;
  cout << "Introduceti " << n << " valori pentru primul sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    sum1 = sum1 + a[i];
  }
  cout << "Introduceti " << m << " valori pentru al doilea sir" << endl;
  for (int i = 1; i <= m; i++)
  {
    cin >> b[i];
  }
  for (int i = 1; i <= n; i++)
  {
    sum1 = sum1 + a[i];
  }
  for (int i = 1; i <= m; i++)
  {
    sum1 = sum1 + b[i];
  }
  Total = sum1 + sum2;
  cout << "Total = " << Total;
  return 0;
}