/* Se da un tablou unidimensional cu n (1<n<100) componente numere naturale. Sa se verifice daca
componentele sunt in ordine crescatoare de la stanga la dreapta. */

#include <iostream>
using namespace std;
int main()
{
  int a[100], n;
  bool crescator = true;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] > a[i + 1])
    {
      crescator = false;
    }
    else
    {
      crescator = true;
    }
  }
  if (crescator)
  {
    cout << "Vectorul este in ordine crescatoare";
  }
  else
  {
    cout << "Vectorul nu este in ordine crescatoare";
  }
  return 0;
}