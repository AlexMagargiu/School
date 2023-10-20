/* Fie A (xa, ya) si B(xb,yb) doua puncte in plan, specificate prin coordonatele lor carteziene.Sa se
scrie un program care sa calculeze si sa afiseze lungimea segmentului AB. */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  double xa, ya, xb, yb, AB;
  cout << "Introduceti coordonatele pct. A (xa, ya):";
  cin >> xa >> ya;
  cout << "Introduceti coordonatele pct. B (xb, yb):";
  cin >> xb >> yb;
  AB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
  cout << "Lungimea segmentului AB este: " << AB;
  return 0;
}