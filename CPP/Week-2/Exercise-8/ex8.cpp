/* La un concurs se dau ca premii primilor 100 de concurenţi, tricouri de culoare albă, roşie, albastră şi
neagră, in această secvenţă (primii 25 albe, urmatorii 25 rosii,...). Ionel este pe locul x. Ce culoare va avea
tricoul pe care-l va primi? */

#include <iostream>
using namespace std;
int main()
{
  int x;
  string culoare;
  cout << "Introduceti pe ce loc a terminat Ionel: ";
  cin >> x;
  if (x >= 1 && x <= 25)
  {
    culoare = "alb";
  }
  else if (x >= 26 && x <= 50)
  {
    culoare = "rosu";
  }
  else if (x >= 51 && x <= 75)
  {
    culoare = "albastru";
  }
  else if (x >= 76 && x <= 100)
  {
    culoare = "negru";
  }
  else
  {
    culoare = "Nicio culoare";
  }
  cout << "Ionel a primit un tricou " << culoare << endl;
  return 0;
}