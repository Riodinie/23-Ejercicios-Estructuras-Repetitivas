/*21.	Elabore un programa que calcule el mínimo común múltiplo de cuatro números.*/      

#include<stdio.h>
#include<iostream>

using namespace std ;

int main(){

  int mayor = 0, casilla = 0, numerador = 0, contador = 0;
  int interruptor = 0, multiplicador = 0, multiplo = 0;
  int i, j;
  int num[4];

  cout<<"Ingresa 4 numeros para calcular el minimo comun multiplo: \n";
  cout<<""<<endl;
  for (i = 0; i < 4; i++){
    numerador++;
    cout<<numerador<<": ";
    cin>>num[i];
    
    if (num[i] > mayor){
      mayor = num[i];
    }
  }

  while (interruptor == 0){
  	
    contador = 0;
    multiplicador++;
    multiplo = mayor * multiplicador;
    
    for (j = 0; j < 3; j++){
      if (multiplo % num[j] == 0){
        contador++;
      }
      
    }
    if (contador == 3){
      interruptor = 1;
    }
  }

  cout<<"\nEl el minimo comun multiplo es: "<<multiplo;

return 0;
}
