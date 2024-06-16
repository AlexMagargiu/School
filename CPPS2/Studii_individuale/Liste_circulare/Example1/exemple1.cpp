#include <iostream>
using namespace std;

struct stiva
{
  int info;
  stiva *leg;
};

stiva *p, *varf, *baza;
int n;

void creare(stiva *&varf, stiva *&baza)
{
  int i, inf;
  cout << "Introduceti numarul de elemente al listei n= ";
  cin >> n;
  cout << "Introduceti prima informatie ";
  cin >> inf;
  varf = new stiva;
  varf->info = inf;
  varf->leg = NULL;
  baza = varf;
  for (i = 2; i <= n; i++)
  {
    cout << "Introduceti informatia " << i << " = ";
    cin >> inf;
    p = new stiva;
    p->info = inf;
    p->leg = varf;
    varf = p;
  }
}

void afisare(stiva *varf)
{
  p = varf;
  while (p != NULL)
  {
    cout << p->info << " ";
    p = p->leg;
  }
}

int produs(stiva *varf)
{
  int produs = 1;
  p = varf;
  while (p != NULL)
  {
    produs = produs * p->info;
    p = p->leg;
  }
  return produs;
}

int main()
{
  creare(varf, baza);
  afisare(varf);
  cout << endl
       << "Produsul elementelor = " << produs(varf) << endl;
  return 0;
}
