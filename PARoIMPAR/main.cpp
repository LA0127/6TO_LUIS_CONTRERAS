#include <iostream>

using namespace std;
int main() {
  int a,b,c;
  cout << "Ingresa un numero: \n";
  cin>>a;
  if(a % 2 == 0){
    cout<<"El numero es par!"<<endl;
  }else{
    cout<<"El numero es impar!"<<endl;
  }
  cout<<"Adios :)";
}