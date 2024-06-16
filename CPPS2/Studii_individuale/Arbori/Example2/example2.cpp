#include <iostream>
using namespace std;

struct muchie
{
  int x, y;
  float cost;
};

muchie b[30], f;
int n, m, i, k, ct, l[30], j;

bool conex(int l[], int n)
{
  int root = l[1];
  for (int i = 2; i <= n; i++)
  {
    if (l[i] != root)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  cout << "Numarul de varfuri: ";
  cin >> n;
  cout << "Numarul de muchii: ";
  cin >> m;

  for (i = 1; i <= m; i++)
  {
    cout << "Muchia " << i << " (x, y) = ";
    cin >> b[i].x >> b[i].y;
    cout << "Costul muchiei = ";
    cin >> b[i].cost;
  }

  for (i = 1; i <= n; i++)
    l[i] = i;

  for (i = 1; i < m; i++)
    for (j = i + 1; j <= m; j++)
      if (b[i].cost > b[j].cost)
      {
        f = b[i];
        b[i] = b[j];
        b[j] = f;
      }

  k = 0;
  ct = 0;
  i = 1;

  cout << "Una din componentele conexe ale grafului:\n";
  while (k < n - 1)
  {
    if (l[b[i].x] != l[b[i].y])
    {
      k++;
      ct += b[i].cost;
      for (j = 1; j <= n; j++)
        if (l[j] == l[b[i].x])
          l[j] = l[b[i].y];
      cout << b[i].x << " " << b[i].y << " Cost: " << b[i].cost << endl;
    }
    i++;
  }

  if (conex(l, n))
  {
    cout << "Graful este conex.\n";
  }
  else
  {
    cout << "Graful NU este conex.\n";
  }

  return 0;
}
