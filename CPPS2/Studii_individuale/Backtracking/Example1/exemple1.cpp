#include <iostream>
using namespace std;
void backtrack(int current, int n, bool *subset)
{
  if (current == n)
  {
    cout << "{ ";
    for (int i = 0; i < n; ++i)
    {
      if (subset[i])
      {
        cout << i + 1 << " ";
      }
    }
    cout << "}" << endl;
    return;
  }
  subset[current] = true;
  backtrack(current + 1, n, subset);
  subset[current] = false;
  backtrack(current + 1, n, subset);
}

int main()
{
  int n = 3;
  bool subset[5];

  backtrack(0, n, subset);

  return 0;
}
