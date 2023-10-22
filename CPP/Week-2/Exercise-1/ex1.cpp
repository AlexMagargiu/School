// Se citesc trei numere naturale nenule. Sa se verifice daca ele coincid cu: 1, 2 si 3.
#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  cout << "Scrieti 3 numere naturale: ";
  cin >> x >> y >> z;
  if ((x == 1 || y == 1 || z == 1) && (x == 2 || y == 2 || z == 2) && (x == 3 || y == 3 || z == 3))
  {
    cout << "Numerele coincid cu 1, 2 si 3";
  }
  else
  {
    cout << "Numerele nu coincid cu 1, 2 si 3";
  }
  return 0;
}