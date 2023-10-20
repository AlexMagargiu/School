//Fie x un numar citit de la tastatura care reprezinta temperatura atmosferica in grade Celsius. Sa se
//scrie un program care transforma temperatura introdusa in grade Farenheit stiind ca F=C*1,8+32.

#include <iostream>
using namespace std;
int main(){
  double x, F;
  cout<<"Introduceti temperatura in grade celsius: ";
  cin>>x;
  F=x*1.8+32;
  cout<<"Temperatura in grade fahrenheit este: "<<F;
  return 0;
}