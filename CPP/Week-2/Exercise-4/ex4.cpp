/* Dintr-o cutie cu trei numere se extrag două numere. Cunoscand suma celor două numere extrase, să
se afişeze numărul rămas in cutie. */

#include <iostream>
using namespace std;
int main()
{
  int num, a = 0, b = 0, c = 0, sumaDouaNumere = 0, sumaTuturolNumere = 0, numarRamas = 0;
  cout << "Introduceti un numar format din trei cifre: ";
  cin >> num;

  cout << "Introduceti suma a doua numerelor extrase: ";
  cin >> sumaDouaNumere;

  a = num / 100;
  b = (num / 10) % 10;
  c = num % 10;

  sumaTuturolNumere = a + b + c;
  numarRamas = sumaTuturolNumere - sumaDouaNumere;

  cout << "Numar ramas: ";
  cout << numarRamas;
}