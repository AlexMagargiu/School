//Scrieti un program care calculeaza valoarea expresiei: (2ab-c*c)/0.25.

#include <iostream>
using namespace std;
int main(){
  double a,b,c,E;
  cout<<"Introduceti prima valoare:";
  cin>>a;
  cout<<"Introduceti a doua valoare:";
  cin>>b;
  cout<<"Introduceti a treia valoare:";
  cin>>c;
  E=(2*a*b-c*c)/0.25;
  cout<<"Valoarea expresiei (2ab-c*c)/0.25 este:"<<E;
  return 0;
}