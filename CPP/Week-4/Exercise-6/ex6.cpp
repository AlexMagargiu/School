/* Sa se scrie un program care sa introducă n numere intr-un vector şi să citeasccă un număr d. Să se
afişeze acele numere din şirul dat care sunt divizibile cu d. Date de intrare: n=5 si valorile: 5 7 10
23 15, d=5 Date de iesire: 5 10 15 */

#include <iostream>
using namespace std;
int main()
{
  int n, a[50], d = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru primul sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  cout << "Introduceti o valore pentru d: ";
  cin >> d;
  for (int i = 1; i <= n; i++)
  {
    if (a[i] % d == 0)
    {
      cout << a[i] << " ";
    }
  }
  return 0;
}