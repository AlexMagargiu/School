/* Se dau trei numere. Să se afişeze aceste numere unul sub altul, afişand in dreptul fiecăruia unul dintre
cuvintele PAR sau IMPAR separate prin caracterul „|”. */

#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  cout << "Introduceti valorile pentru x, y si z" << endl;
  cin >> x >> y >> z;
  string r1, r2, r3;
  r1 = (x % 2 == 0) ? "PAR" : "IMPAR";
  r2 = (y % 2 == 0) ? "PAR" : "IMPAR";
  r3 = (z % 2 == 0) ? "PAR" : "IMPAR";
  cout << x << " | " << r1 << endl;
  cout << y << " | " << r2 << endl;
  cout << z << " | " << r3 << endl;
  return 0;
}