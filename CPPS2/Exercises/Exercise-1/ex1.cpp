// Se citeste de la tastatura un numar intreg reprezentand un numar de secunde. Sa se scrie un program
// care transforma si afiseaza numarul in ore, minute, milisecunde si nanosecunde (va cautati formulele
// de transformare).

// 2. Funcție fără parametri formali și cu valoare returnată
#include <iostream>
using namespace std;

int introducetiSecunde()
{
  int s;
  cout << "Introduceti numarul de secunde: ";
  cin >> s;
  return s;
}

int main()
{
  int s = introducetiSecunde();
  double O = s / 3600.0;
  double M = s / 60.0;
  long Mil = s * 1000;
  long Nano = Mil * 1000000;
  cout << "Funcție fără parametri formali și cu valoare returnată" << endl;
  cout << "Numarul de ore: " << O << endl;
  cout << "Numarul de minute: " << M << endl;
  cout << "Numarul de milisecunde: " << Mil << endl;
  cout << "Numarul de nanosecunde: " << Nano << endl;
  return 0;
}