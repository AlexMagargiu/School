/* 9. Se dă o urnă cu bile numerotate de la 1 la 50. Se fac extrageri din urnă atâta timp cât se extrag bile cu valoarea mai mică decât 30. Dupa fiecare extragere, bila este reintrodusă în urnă. Se cere:
a. să se calculeze suma valorilor tuturor bilelor extrase
b. să se numere câte bile de valoare pară au fost extrase */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));
  int suma = 0, par = 0;
  int bilaExtrasa = 1;
  while (true)
  {
    bilaExtrasa = rand() % 50 + 1;
    cout << "Bila extrasa a avut numarul " << bilaExtrasa << endl;
    suma += bilaExtrasa;
    if (bilaExtrasa % 2 == 0)
    {
      par++;
    }
    if (bilaExtrasa >= 30)
    {
      break;
    }
  }
  cout << "Suma bilelor extrase este: " << suma << endl;
  cout << "Numarul de bile extrase cu un numar par este: " << par << endl;
  return 0;
  // Nu merge
}