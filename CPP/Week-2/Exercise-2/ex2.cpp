/* Se dau doua numere naturale a si b.
a) Sa se verifice daca a este divizibil cu b (daca restul impartirii lui a la b este
egal cu zero).
b) Sa se verifice daca sunt numere consecutive.
c) Sa se verifice daca a si b sunt pare sau impare (daca restul impartirii cu doi
este egal cu zero).*/

#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Introduceti valorile pentru a si b: ";
  cin >> a >> b;
  if (a % b == 0)
  {
    cout << "a este divizibil cu b" << endl;
  }
  else
  {
    cout << "a nu este divizibil cu b" << endl;
  }
  if (a == b + 1 || b == a + 1)
  {
    cout << "a si b sunt numere conseutive" << endl;
  }
  else
  {
    cout << "a si b nu sunt numere conseutive" << endl;
  }
  if (a % 2 == 0)
  {
    cout << "a este par" << endl;
  }
  else
  {
    cout << "a este impar" << endl;
  }
  if (b % 2 == 0)
  {
    cout << "b este par" << endl;
  }
  else
  {
    cout << "b este impar" << endl;
  }
  return 0;
}