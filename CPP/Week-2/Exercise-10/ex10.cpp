/* Sa se calculeze suma s = 1 – 2 + 3 – 4 + ...+ n, pentru un n dat de la tastatura. Nu se foloseste nici un
fel de instructiuni repetitive.
Exemplu: Pentru n=5, se obtine suma=-5
s=(1-2) + (3-4) + ... + ((2k-1) - 2k) = -k = -n/2, daca n=2k
s=(1-2) + (3-4) + ... + ((2k-1) – (2k)) + (2k+1) = -k + 2k+1= -n/2 + n, daca n=2k+1 */

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Introduceti valoarea pentru n: ";
  cin >> n;
  (n % 2 == 0) ? sum = -n / 2 : sum = -n / 2 + n;
  cout << "Suma este: " << sum;
  return 0;
}