#include <iostream>
using namespace std;
int main() {
  int numero[5]={200,150,-50,300,100};//array 5 numeros
int suma = 0;
  //inicializanos los valores del arreglo
 /* numero[0] = 200;
  numero[1] = 200;
  numero[2] = 200;
  numero[3] = 200;
  numero[4] = 200;
*/
  /*//hallar la suma de los elementos del arreglo

  suma = numero[0] = 200 + numero[1] + numero[2] + numero[3] + numero[4];*/
  //ineficiente
  
  
//iterador o ciclo
  int i;
  for(i=0;i<=4; i++){
    suma += numero[i];//suma el valor de suma mas l iterador
    cout<<"\nDato \n\n"<<suma<<"\n";
  }
  cout<<"\nLa suma es: "<<suma;
  return 0;
  }