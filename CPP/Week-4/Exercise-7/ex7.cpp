/* Se introduc temperaturile măsurate in n zile. Să se scrie un program care să afişeze media
temperaturilor negative şi media celor pozitive. Date de intrare: n = 5 si temperaturile: 23 24 23 25
22 Date de iesire: 23.40. */

#include <iostream>
using namespace std;

int main()
{
  int n;
  float tempMedieNeg = 0, tempMediePos = 0, tempNeg = 0, tempPos = 0, nrZileNeg = 0, nrZilePos = 0, a[50];

  cout << "Introduceti o valoare pentru n: ";
  cin >> n;

  cout << "Introduceti " << n << " valori pentru sir" << endl;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++)
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
    tempMediePos = tempPos / nrZilePos;
    cout << "Media temperaturilor pozitive: " << tempMediePos << endl;
  }
  else
  {
    cout << "Nu au fost inregistrate temperaturi pozitive." << endl;
  }

  if (nrZileNeg > 0)
  {
    tempMedieNeg = tempNeg / nrZileNeg;
    cout << "Media temperaturilor negative: " << tempMedieNeg << endl;
  }
  else
  {
    cout << "Nu au fost inregistrate temperaturi negative." << endl;
  }

  return 0;
}
