/* Sa se verifice daca trei numere naturale a,b si c sunt pitagorice sau nu. Numim numere pitagorice, trei
numere care indeplinesc una din conditiile a*a=b*b+c*c, b*b=a*a+c*c, c*c=a*a+b*b. */

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Introduceti valori pentru a, b si c: " << endl;
  cin >> a >> b >> c;
  if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
  {
    cout << "a, b si c sunt numere pitagoraice";
  }
  else
  {
    cout << "a, b si c nu sunt numere pitagoraice";
  }
  return 0;
}