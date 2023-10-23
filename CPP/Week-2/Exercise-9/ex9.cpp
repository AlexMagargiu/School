/* Sa se verifice daca un numar natural este sau nu cub perfect. Un numar este cub perfect daca partea
intreaga din radicalul sau de ordinul 3. Ridicat la puterea a treia este egal chiar cu numarul dat. Se cunoaste
relatia: radical de ordinul 3 din n = e la puterea ln(n)/3.
x = pow(n *1.0, 1.0/3). Daca (x*x*x == n) atunci n este cub perfect. */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  double x;
  cout << "Introduceti o valoare pentru n: " << endl;
  cin >> n;
  x = pow(n * 1.0, 1.0 / 3);
  if (x * x * x == n)
  {
    cout << n << " este cub perfect" << endl;
  }
  else
  {
    cout << n << " nu este cub perfect" << endl;
  }
  return 0;
}