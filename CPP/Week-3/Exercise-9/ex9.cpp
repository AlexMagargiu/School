/* 9. Se dă o urnă cu bile numerotate de la 1 la 50. Se fac extrageri din urnă atâta timp cât se extrag bile cu valoarea mai mică decât 30. Dupa fiecare extragere, bila este reintrodusă în urnă. Se cere:
a. să se calculeze suma valorilor tuturor bilelor extrase
b. să se numere câte bile de valoare pară au fost extrase */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
  int suma = 0;
  int bileExtrase = 0;
  int bilePare = 0;
  srand(time(NULL));

  while (true)
  {
    int valoareBila = rand() % 50 + 1;
    cout << "A fost extrasa bila cu valoarea: " << valoareBila << endl;
    suma += valoareBila;
    if (valoareBila < 30)
    {
      bileExtrase++;
      if (valoareBila % 2 == 0)
      {
        bilePare++;
      }
    }
    else
    {
      break;
    }
  }

  cout << "\nSuma valorilor tuturor bilelor extrase: " << suma << endl;
  cout << "Numarul total de bile extrase: " << bileExtrase << endl;
  cout << "Numarul de bile pare extrase: " << bilePare << endl;

  return 0;
}
