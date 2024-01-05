/* Se dă un şir de n numere naturale. Să se afişeze pe două randuri, pe primul rand cele pare şi pe al
doilea cele impare. Date de intrare: Pentru n = 10 si elementele 4 3 2 5 6 8 9 0 1 5
Date de iesire:
4 2 6 8 0
3 5 9 1 5 */

#include <iostream>
using namespace std;
int main()
{
  int n, a[50];
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru primul sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    if (a[i] % 2 == 0)
    {
      cout << a[i] << " ";
    }
  }
  cout << endl;

  for (int i = 1; i <= n; i++)
  {
    if (a[i] % 2 != 0)
    {
      cout << a[i] << " ";
    }
  }
  cout << endl;

  return 0;
}