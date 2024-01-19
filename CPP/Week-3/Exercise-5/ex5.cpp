/* 5. Sa se scrie un program care sa determine toate numerele prime palindrom dintr-un interval [a, b] dat, cu a si b valori naturale. Un numar este palindrom daca citit de la stânga la dreapta sau de la dreapta la stânga rămâne neschimbat. Dati exemple de numere gasite. */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int a, b;
  cout << "Introduceti valoare minima pentru intervalul de numere: ";
  cin >> a;
  cout << "Introduceti valoarea maxima pentru intervalul de numere: ";
  cin >> b;
  cout << "Numere prime palindrom din intervalul [" << a << ", " << b << "]: ";
  for (int num = a; num <= b; num++)
  {
    bool estePrim = true;
    if (num < 2)
    {
      estePrim = false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
      if (num % i == 0)
      {
        estePrim = false;
        break;
      }
    }
    int numarOriginal = num;
    int numarInversat = 0;
    int temp = num;
    while (temp > 0)
    {
      int cifra = temp % 10;
      numarInversat = numarInversat * 10 + cifra;
      temp /= 10;
    }
    bool estePalindrom = (numarOriginal == numarInversat);

    if (estePrim && estePalindrom)
    {
      cout << num << " ";
    }
  }
  return 0;
}