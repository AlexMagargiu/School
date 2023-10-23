/* Un punct in plan este dat prin coodonatele sale (x,y). Sa se scrie un pogram care determina daca
punctul este in origine, intr-un cadran (1,2,3 sau 4), sau pe una din semiaxe (Ox, Ox’, Oy, Oy’).
Exemplu: (1,1) – cadranul 1 ; (0,3) – axa Oy ; (-2,4)- cadranul 2 */

#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cout << "Introduceti coordonatele x si y pentru punct: " << endl;
  cin >> x >> y;
  if (x == 0 && y == 0)
  {
    cout << "Punctul se afla in origine" << endl;
  }
  else if (x == 0)
  {
    if (y > 0)
    {
      cout << "Punctul se afla pe axa Oy" << endl;
    }
    else
    {
      cout << "Punctul se afla pe axa Oy`" << endl;
    }
  }
  else if (y == 0)
  {
    if (x > 0)
    {
      cout << "Punctul se afla pe axa Ox" << endl;
    }
    else
    {
      cout << "Punctul se afla pe axa Ox`" << endl;
    }
  }
  else if (x > 0 && y > 0)
  {
    cout << "Punctul se afla in cadranul 1" << endl;
  }
  else if (x < 0 && y > 0)
  {
    cout << "Punctul se afla in cadranul 2" << endl;
  }
  else if (x < 0 && y < 0)
  {
    cout << "Punctul se afla in cadranul 3" << endl;
  }
  else if (x > 0 && y < 0)
  {
    cout << "Punctul se afla in cadranul 4" << endl;
  }
  return 0;
}