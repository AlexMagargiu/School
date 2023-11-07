/* 8. Pentru n cunoscut, să se calculeze fn, termenul de rangul n din şirul lui Fibonacci,
ştiind că: f0 = 1; f1 = 1; fp = fp-1 + fp-2 pentru orice valoare p >= 2. */

#include <iostream>
using namespace std;
int main()
{
  int n, a = 0, b = 1, c;
  cout << "Introduceti valorea pentru n=";
  cin >> n;
  if (n == 0)
  {
    cout << "Introduceti un numar natural" << endl;
  }
  for (int p = 2; p <= n; p++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  cout << b;
  return 0;
  // Nu e gata
}