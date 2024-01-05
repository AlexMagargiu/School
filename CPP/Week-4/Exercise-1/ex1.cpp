// Se considera un numar natural n. Se cere sa se formeze un vector cu cifrele numarului.
#include <iostream>
using namespace std;

int main()
{
  int n, cifra, v[50], i = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;

  while (n > 0)
  {
    cifra = n % 10;
    v[i++] = cifra;
    n = n / 10;
  }

  cout << "Cifrele vectorului sunt: " << endl;
  for (int j = i - 1; j >= 0; j--)
  {
    cout << v[j] << " ";
  }
  return 0;
}
