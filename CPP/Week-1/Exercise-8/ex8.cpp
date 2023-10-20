/* Se citeste de la tastatura un numar natural format din 5 cifre (x4, x3, x2, x1, x0). Sa se afiseze un
triunghi format din cifrele numarului astfel: in varful triunghiului se va afla cifra din mijloc (x2); pe
linia a doua se vor afla cifrelr x3x2x1; pe a treia linie se vor afla toate cifrele numarului. Din numarul
citit trebuiesc extrase fiecare cifra in parte. */

#include <iostream>
using namespace std;
int main()
{
  int n, x0, x1, x2, x3, x4;
  cout << "Introduceti un numar format din 5 cifre: ";
  cin >> n;
  x0 = n % 10;
  n = n / 10;
  x1 = n % 10;
  n = n / 10;
  x2 = n % 10;
  n = n / 10;
  x3 = n % 10;
  n = n / 10;
  x4 = n;
  cout << " "
       << " " << x2 << endl;
  cout << " " << x3 << x2 << x1 << endl;
  cout << x4 << x3 << x2 << x1 << x0 << endl;
  return 0;
}