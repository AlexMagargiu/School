#include <iostream>

using namespace std;

int n, x[20], p[20];

void afiseaza()
{
  for (int i = 0; i < n; i++)
  {
    cout << x[i] << " ";
  }
  cout << endl;
}

void backtracking(int k)
{
  for (int i = 0; i < n; i++)
  {
    if (!p[i])
    {
      x[k] = i;
      p[i] = 1;
      if (k < n)
      {
        backtracking(k + 1);
      }
      else
      {
        afiseaza();
      }
      p[i] = 0;
    }
  }
}

int main()
{
  cin >> n;
  backtracking(1);
  return 0;
}