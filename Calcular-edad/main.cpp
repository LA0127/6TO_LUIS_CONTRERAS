#include <iostream>
using namespace std;
int main() {
  int edad,anioactual,mesactual,diactual,anionac, mesnac, dianac;
  cout<<"Ingresa el año actual\n";
  cin>>anioactual;
if(anioactual != 2022){
  cout<<"Este no es el año en el que estamos.\n";
}else{
  cout<<"\n";
  }
  cout<<"Ingresa el mes actual, (1,2,3,4,5...12)\n";
  cin>>mesactual;
  if(mesactual != 05){
  cout<<"Este no es el mes en el que estamos.\n";
}else{
  cout<<"\n";
    }
  cout<<"Ingresa el dia actual. \n";
cin>>diactual;
if(diactual != 23){
  cout<<"Este no es el dia en el que estamos.\n";
}else{
  cout<<"\n";
  }

cout<<"Ingresa el año que naciste\n";
  cin>>anionac;
  if(anionac<1950 && anionac>2022){
    cout<<"Introduce una año valido.";
  }else{
    cout<<"Ingresa el mes en que naciste \n";
  cin>>mesnac;
    if(mesnac<1&&mesnac>12){
      cout<<"Ingresa un mes existente.";
    }else{
      cout<<"Ingresa el dia que naciste \n";
  cin>>dianac;
      if(dianac<1 ||dianac>31){
        cout<<"Ingresa un dia valido";
      }
    }
    }
  edad=anioactual-anionac;
  cout<<"tu edad es: "<<edad;
      }