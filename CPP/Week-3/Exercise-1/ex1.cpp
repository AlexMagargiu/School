/* 1. Sa se scrie un program care sa determine cifra de control a unui numar natural n dat.Cifra de control a unui numar se obtine prin insumarea succesiva a cifrelor sale, pana cand se obtine o singura cifra. */

#include <iostream>
using namespace std;
int main()
{
  int n, sum = 0;
  cout << "Introduceti numarul n=";
  cin >> n;
  while (n != 0)
  {
    sum += n % 10;
    n = n / 10;
  }
  cout << "Cifra de control este: " << sum << endl;
  return 0;
}