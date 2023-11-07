/* 2. Sa se scrie un program care sa construiasca un numar m din cifrele pare ale unui numar natural n, dar luate in ordine inversa. Ex n=2354 m=42 */

#include <iostream>
using namespace std;
int main()
{
  int m = 0, n, cifra;
  cout << "Introduceti numarul natural n=";
  cin >> n;
  while (n > 0)
  {
    cifra = n % 10;
    if (cifra % 2 == 0)
    {
      m = m * 10 + cifra;
    }
    n = n / 10;
  }
  if (m == 0)
  {
    cout << "Numarul n nu a avut nici o cifra para!" << endl;
  }
  else
  {
    cout << "Numarul inversat este m=" << m << endl;
  }
  return 0;
}