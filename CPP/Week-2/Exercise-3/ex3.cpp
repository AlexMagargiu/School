// Sa se scrie un algoritm pentru a rezolva in multimea numerelor reale a sistemului de ecuatii:

#include <iostream>
using namespace std;
int main()
{
  double a, b, c, x, y;
  cout << "Introduceti valoriile pentru a, b si c: ";
  cin >> a >> b >> c;
  y = a / (b - a * c);
  x = 1 - c * y;
  cout << "x= " << x << endl;
  cout << "y= " << y << endl;
  return 0;
}