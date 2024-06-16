/* Se introduc temperaturile măsurate in n zile. Să se scrie un program care să afişeze media
temperaturilor negative şi media celor pozitive. Date de intrare: n = 5 si temperaturile: 23 24 23 25
22 Date de iesire: 23.40. */

// 4. Funcție cu parametri formali și cu valoare returnată
#include <iostream>
using namespace std;

void calculeazaMedii(int n, float a[], float &tempMediePos, float &tempMedieNeg)
{
  float tempPos = 0, tempNeg = 0;
  int nrZilePos = 0, nrZileNeg = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      tempPos += a[i];
      nrZilePos++;
    }
    else if (a[i] < 0)
    {
      tempNeg += a[i];
      nrZileNeg++;
    }
  }

  if (nrZilePos > 0)
  {
    tempMediePos = tempPos / float(nrZilePos);
  }
  else
  {
    tempMediePos = 0;
  }

  if (nrZileNeg > 0)
  {
    tempMedieNeg = tempNeg / float(nrZileNeg);
  }
  else
  {
    tempMedieNeg = 0;
  }
}

int main()
{
  cout << "Funcție cu parametri formali și cu valoare returnată" << endl;
  int n;
  float tempMedieNeg = 0, tempMediePos = 0, a[50];

  cout << "Introduceti o valoare pentru n: ";
  cin >> n;

  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  calculeazaMedii(n, a, tempMediePos, tempMedieNeg);

  if (tempMediePos != 0)
  {
    cout << "Media temperaturilor pozitive: " << tempMediePos << endl;
  }
  else
  {
    cout << "Nu au fost inregistrate temperaturi pozitive." << endl;
  }

  if (tempMedieNeg != 0)
  {
    cout << "Media temperaturilor negative: " << tempMedieNeg << endl;
  }
  else
  {
    cout << "Nu au fost inregistrate temperaturi negative." << endl;
  }

  return 0;
}
