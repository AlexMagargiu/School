/* Sa se calculeze si sa se afiseze valoarea functiei matematice f(x), pentru o valoare a lui x introdusa de
la tastatura:
                  x*x+1, pentru x <=-3
f:R->R, f(x) =    x – 2, pentru -3<x<3
                  x*x - 4*x + 5, pentru x>=3 */

// 1. Funcție fără parametri formali și fără valoare returnată
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void calculateFunction1()
{
  float x, calc = 0;
  cout << "Introduceti o valoare pentru x: ";
  cin >> x;

  if (x <= -3)
  {
    calc = x * x + 1;
  }
  else if (x > -3 && x < 3)
  {
    calc = x - 2;
  }
  else if (x >= 3)
  {
    calc = x * x - 4 * x + 5;
  }

  cout << "f(x) = " << calc << endl;
}

int main()
{
  cout << "Funcție fără parametri formali și fără valoare returnată" << endl;
  calculateFunction1();
  return 0;
}