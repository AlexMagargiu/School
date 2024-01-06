/* Se considera un tablou unidimensional x cu n numere intregi. Se cere sa se calculeze cle mai mare
divizor comun al lor. */

#include <iostream>
using namespace std;
int main()
{
  int a[100], n;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int divComun = a[0], divComunTemp = 1;
  for (int i = 1; i < n; i++)
  {
    while (a[i] != 0)
    {
      divComunTemp = a[i];
      a[i] = divComun % a[i];
      divComun = divComunTemp;
    }
  }

  cout << "Cel mai mare divizor comun al numerelor este: " << divComun << endl;

  return 0;
}
