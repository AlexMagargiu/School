//Fie r un numar real citit de la tastatura care reprezinta lungimea razei unui cerc. Sa se scrie un
//program care calculeaza si afiseaza aria si perimetrul discului de raza r.

#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double r,P,A;
  cout<<"Introduceti raza cercului";
  cin>>r;
  P=2*M_PI*r;
  cout<<"Perimetrul este:"<<P;
  A=M_PI*pow(r,2);
  cout<<"Aria este:"<<A;
  return 0;
}