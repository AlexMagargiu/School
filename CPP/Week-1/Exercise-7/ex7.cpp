// Se citeste de la tastatura un numar intreg reprezentand un numar de secunde. Sa se scrie un program
// care transforma si afiseaza numarul in ore, minute, milisecunde si nanosecunde (va cautati formulele
// de transformare).

#include <iostream>
using namespace std;
int main()
{
  int s;
  double O, M;
  long Mil, Nano;
  cout << "Introduceti numarul de secunde: ";
  cin >> s;
  O = s / 3600;
  M = s / 60;
  Mil = s * 1000;
  Nano = Mil * 1000000;
  cout << "Numarul de ore: " << O << endl;
  cout << "Numarul de minute: " << M << endl;
  cout << "Numarul de milisecunde: " << Mil << endl;
  cout << "Numarul de nanosecunde: " << Nano << endl;
  return 0;
}