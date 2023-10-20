//Scrieti un program care afiseaza suma, media aritmetica, produsul, catul, restul si rezultatul
//impartirii a doua valori intregi introduse de la tastatura.

#include <iostream>
using namespace std;
int main(){
  int a,b,S,P,C,R;
  float M;
  cout<<"Introduceti prima valoare:";
  cin>>a;
  cout<<"Introduceti a doua valoare:";
  cin>>b;
  S=a+b;
  cout<<"Suma este:"<<S<<endl;
  M=float(a+b)/2;
  cout<<"Media este:"<<M<<endl;
  P=a*b;
  cout<<"Produsul este:"<<P<<endl;
  C=a/b;
  cout<<"Catul este:"<<C<<endl;
  R=a%b;
  cout<<"Restul este:"<<R<<endl;
  return 0;
}