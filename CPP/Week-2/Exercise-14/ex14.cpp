/* Sa se calculeze si sa se afiseze valoarea functiei matematice f(x), pentru o valoare a lui x introdusa de
la tastatura:
                  x*x+1, pentru x <=-3
f:R->R, f(x) =    x – 2, pentru -3<x<3
                  x*x - 4*x + 5, pentru x>=3 */

#include <iostream>
using namespace std;
int main()
{
  float x, calc = 0;
  cout << "Introduceti o valoare pentru x: " << endl;
  cin >> x;
  if (x <= -3)
  {
    calc = x * x + 1;
    cout << "f(x) = " << calc << endl;
  }
  else if (x > -3 && x < 3)
  {
    calc = x - 2;
    cout << "f(x) = " << calc << endl;
  }
  else if (x >= 3)
  {
    calc = x * x - 4 * x + 5;
    cout << "f(x) = " << calc << endl;
  }
  return 0;
}