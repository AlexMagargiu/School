/* 8. Pentru n cunoscut, să se calculeze fn, termenul de rangul n din şirul lui Fibonacci,
ştiind că: f0 = 1; f1 = 1; fp = fp-1 + fp-2 pentru orice valoare p >= 2.
Exemplu: n=8 se afiseaza 21 (1,1,2,3,5,8,13,21)*/

// 1. Funcție fără parametri formali și fără valoare returnată
#include <iostream>
using namespace std;

void calculateFibonacci()
{
  int n, a = 1, b = 1, c = 0;
  cout << "Introduceți valoarea pentru n: ";
  cin >> n;

  if (n <= 0)
  {
    cout << "Introduceti un numar mai mare de 0" << endl;
  }
  else
  {
    cout << "Secventa Fibonacci: ";
    if (n >= 1)
      cout << a << " ";
    if (n >= 2)
      cout << b << " ";

    for (int i = 3; i <= n; i++)
    {
      c = a + b;
      a = b;
      b = c;
      cout << b << " ";
    }

    cout << endl;
    cout << "Al " << n << "-lea numar Fibonacci este: " << b << endl;
  }
}

int main()
{
  cout << "Funcție fără parametri formali și fără valoare returnată" << endl;
  calculateFibonacci();
  return 0;
}
