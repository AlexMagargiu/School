/* Se dau trei numere. Să se afişeze aceste numere unul sub altul, afişand in dreptul fiecăruia unul dintre
cuvintele PAR sau IMPAR separate prin caracterul „|”. */

// 3. Funcție cu parametri formali și fără valoare returnată
#include <iostream>
using namespace std;

void checkParity(int x, int y, int z)
{
  string r1 = (x % 2 == 0) ? "PAR" : "IMPAR";
  string r2 = (y % 2 == 0) ? "PAR" : "IMPAR";
  string r3 = (z % 2 == 0) ? "PAR" : "IMPAR";

  cout << x << " | " << r1 << endl;
  cout << y << " | " << r2 << endl;
  cout << z << " | " << r3 << endl;
}

int main()
{
  cout << "Funcție cu parametri formali și fara valoare returnată" << endl;
  int x, y, z;
  cout << "Introduceti valorile pentru x, y si z" << endl;
  cin >> x >> y >> z;
  checkParity(x, y, z);
  return 0;
}
