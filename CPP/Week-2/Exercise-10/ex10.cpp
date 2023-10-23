/* Sa se calculeze suma s = 1 – 2 + 3 – 4 + ...+ n, pentru un n dat de la tastatura. Nu se foloseste nici un
fel de instructiuni repetitive.
Exemplu: Pentru n=5, se obtine suma=-5
s=(1-2) + (3-4) + ... + ((2k-1) - 2k) = -k = -n/2, daca n=2k
s=(1-2) + (3-4) + ... + ((2k-1) – (2k)) + (2k+1) = -k + 2k+1= -n/2 + n, daca n=2k+1 */

#include <iostream>
using namespace std;
int main()
{
  int n, s = 0;
  cout << "Introduceti o valoare pentru n: " << endl;
  cin >> n;
  if (n % 2 == 0)
  {
    s = -n / 2;
  }
  else
  {
    s = -n / 2 + 1;
  }
  cout << "Suma pentru n= " << n << " este " << s << endl;
  return 0;
  // Nu e corect
}