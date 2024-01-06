/* Sa se scrie un program C++ care sa realizeze inversarea unui vector :
a) in acelasi vector si fara a utiliza un vector suplimentar
b) intr-un alt vector. */

#include <iostream>
using namespace std;

int main()
{
  int a[50], n;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n / 2; i++)
  {
    int temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
  }

  cout << "Vector inversat in acelasi vector: { ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i];
    if (i < n - 1)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main()
{
  int a[50], b[50], n;
  cout << "Introduceti o valoare pentru n: ";
  cin >> n;
  cout << "Introduceti " << n << " valori pentru sir" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    b[i] = a[n - i - 1];
  }

  cout << "Vector inversat in alt vector: { ";
  for (int i = 0; i < n; i++)
  {
    cout << b[i];
    if (i < n - 1)
    {
      cout << ", ";
    }
  }
  cout << " }" << endl;

  return 0;
}
