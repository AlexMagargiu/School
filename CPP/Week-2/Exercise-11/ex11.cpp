/* Se dau trei numere nenule a,b si k. Sa se verifice daca fractia a/b se simplifica prin k. In caz afirmativ
se va afisa si fractia simplificata. */

#include <iostream>
using namespace std;
int main()
{
  int a, b, k;
  cout << "Introduceti valori pentu a, b si k: " << endl;
  cin >> a >> b >> k;
  if (a % k == 0 && b % k == 0)
  {
    cout << "Fractia dintre a si b este simplificata prin k" << endl;
    cout << "Fractia devine " << a / k << " / " << b / k << endl;
  }
  else
  {
    cout << "Fractia dintre a si b nu poate fi simplificata prin k";
  }
  return 0;
}