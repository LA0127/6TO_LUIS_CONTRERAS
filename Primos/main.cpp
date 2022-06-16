#include <iostream>
using namespace std;
bool numeroprimo(int a){
  bool b;
  if(a != 1 && a!=0){
    for(int i =2;i<=a;i++){
      if(a%i==0){
      if (a==i){
        b = true;
      }else{
        b=false;
        return b;
      }
    }
      }
  }else b= false;
return b;
}

  
int main() {
  int a;
  cout<<"Ingresa un numero limite: \n";
  cin>>a;
  for(int i = 1; i<=a;i++){
    if(numeroprimo(i)) cout<<"Numero primo: "<<i<<endl;
  }
  return 0;
}