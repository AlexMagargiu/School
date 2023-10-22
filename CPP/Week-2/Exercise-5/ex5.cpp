/* Se introduc două numere. Dacă al doilea număr este diferit de 0, să se afişeze rezultatul impartirii dintre
primul şi al doilea, iar dacă este nul, să se afişeze mesajul “Impărţire imposibilă”. */

#include <iostream>
using namespace std;
int main()
{
  double x, y;
  cout << "Introduceti valorile pentru x si y: ";
  cin >> x >> y;
  if (x != 0)
  {
    cout << "Rezultatul impartiri dintre x si y este:" << x / y << endl;
  }
  else
  {
    cout << "Impartire imposibila.";
  }
  return 0;
}