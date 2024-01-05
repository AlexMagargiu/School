/* Se da un tablou unidimensional cu n componente numere intregi si un numar intreg A. Sa se numere
cate elemente sunt mai mari decat A si sa se construiasca un vector cu aceste elemente. */

#include <iostream>
using namespace std;
int main()
{
  int n, vectorOriginal[50], A, vectorNou[50], nrMaiMare = 0;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> vectorOriginal[i];
  }
  cout << "Introduceti o valoare pentru A: ";
  cin >> A;
  for (int i = 1; i <= n; i++)
  {
    if (vectorOriginal[i] > A)
    {
      nrMaiMare++;
    }
  }
  if (nrMaiMare > 0)
  {
    int pozitieVectorNou = 0;
    for (int i = 0; i <= n; i++)
    {
      if (vectorOriginal[i] > 0)
      {
        vectorNou[pozitieVectorNou++] = vectorOriginal[i];
      }
    }

    cout << "Nr mai mari decat A: " << nrMaiMare << endl;
    cout << "Vector nou: ";
    for (int i = 0; i < nrMaiMare; i++)
    {
      cout << vectorNou[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "No elements are larger than " << A << endl;
  }
  return 0;
}