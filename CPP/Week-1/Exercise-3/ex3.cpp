//Scrieti un program care afiseaza valorile interschimbate a doua numere intregi citite de la tastatura
//(utilizand variabila auxiliara, fara a utiliza o variabila auxiliara).

//1.Utilizand variabila auxiliara
#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Introduceti prima valoare:";
  cin>>a;
  cout<<"Introduceti a doua valoare:";
  cin>>b;
  c=a;
  a=b;
  b=c;
  cout<<"Valorile interschimbate sunt: "<<"a= "<<a<<" "<<"b= "<<b;
  return 0;
}


//2.Fara a utiliza o variabila auxiliara
#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Introduceti prima valoare:";
  cin>>a;
  cout<<"Introduceti a doua valoare:";
  cin>>b;
  swap(a, b);
  cout<<"Valorile interschimbate sunt: "<<"a= "<<a<<" "<<"b= "<<b;
  return 0;
}