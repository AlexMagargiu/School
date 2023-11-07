/* 5. Sa se scrie un program care sa determine toate numerele prime palindrom dintr-un interval [a, b] dat, cu a si b valori naturale. Un numar este palindrom daca citit de la stânga la dreapta sau de la dreapta la stânga rămâne neschimbat. Dati exemple de numere gasite. */

#include <iostream>
using namespace std;
bool Palindrom(long int num)
{
  long int numarOriginal = num;
  long int numarInversat = 0;

  while (num > 0)
  {
    int cifra = num % 10;
    numarInversat = numarInversat * 10 + cifra;
    num /= 10;
  }
  return numarOriginal == numarInversat;
}

int main()
{
  long int a, b;
  cout << "Introduceti valoare minima pentru intervalul de numere: ";
  cin >> a;
  cout << "Introduceti valoarea maxima pentru intervalul de numere: ";
  cin >> b;
  for (long int num = a; num <= b; num++)
  {
    if (Palindrom(num))
    {
      cout << num << " ";
    }
  }
  return 0;
}