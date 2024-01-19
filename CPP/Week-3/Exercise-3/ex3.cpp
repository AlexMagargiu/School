/* 3. Sa se scrie un program care sa determine toate numerele prietene mai mici decat un nr n citit de la tastatura. Spunem ca doua numere sunt prietene daca suma divizorilor proprii ai unuia este egala cu celalalt numar invers. Dati exemple de numere gasite. */

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Introduceti valoarea pentru n:";
  cin >> n;

  for (int i = 1; i < n; i++)
  {
    int sum1 = 0;
    for (int divizor = 1; divizor < i; divizor++)
    {
      if (i % divizor == 0)
      {
        sum1 += divizor;
      }
    }

    for (int j = i + 1; j < n; j++)
    {
      int sum2 = 0;
      for (int divizor = 1; divizor < j; divizor++)
      {
        if (j % divizor == 0)
        {
          sum2 += divizor;
        }
      }

      if (sum1 == j && sum2 == i)
      {
        cout << i << " și " << j << " sunt prietene." << endl;
      }
    }
  }

  return 0;
}