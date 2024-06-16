// Scrieti un program care afiseaza suma, media aritmetica, produsul, catul, restul si rezultatul
// impartirii a doua valori intregi introduse de la tastatura.

// 4. Funcție cu parametri formali și cu valoare returnată
#include <iostream>
using namespace std;

int suma(int a, int b)
{
  return a + b;
}

float media(int a, int b)
{
  return float(a + b) / 2;
}

int produs(int a, int b)
{
  return a * b;
}

int catul(int a, int b)
{
  return b != 0 ? a / b : 0;
}

int restul(int a, int b)
{
  return b != 0 ? a % b : 0;
}

int main()
{
  int a, b;
  cout << "Funcție cu parametri formali și cu valoare returnată" << endl;
  cout << "Introduceti prima valoare: ";
  cin >> a;
  cout << "Introduceti a doua valoare: ";
  cin >> b;
  int S = suma(a, b);
  cout << "Suma este: " << S << endl;
  float M = media(a, b);
  cout << "Media este: " << M << endl;
  int P = produs(a, b);
  cout << "Produsul este: " << P << endl;
  if (b != 0)
  {
    int C = catul(a, b);
    int R = restul(a, b);
    cout << "Catul este: " << C << endl;
    cout << "Restul este: " << R << endl;
  }
  else
  {
    cout << "Impartirea la zero nu este permisa." << endl;
  }
  return 0;
}
