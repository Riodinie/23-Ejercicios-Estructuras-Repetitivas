/*7. Calcular el precio de un tiquete de ida y regreso en autobús, conociendo la distancia a recorrer y sabiendo que, 
si el número de días de estadía es superior a 7 y la distancia a 8800km, se obtiene un descuento del 30% el precio por kilometro es de 1234 pesos. 
*/

#include<iostream>

using namespace std;

int main(){
	
int distancia, descuento, valor_pasaje, pago,valor_kilometro=1234,dias_estancia;

 cout<<"\nIngrese la distancia (en kilometros) :"; cin>>distancia;
 cout<<"\nIngrese numero de dias de estancia:"; cin>>dias_estancia;
                        
 valor_pasaje = valor_kilometro*distancia;
 
  if(distancia>=8800 && dias_estancia>7){
 	
  descuento=distancia*valor_kilometro*0.3;
  pago=valor_pasaje-descuento;
 
 }else{
  pago=valor_pasaje;
  descuento=0;
	
  }
  cout<<"_______________________________"<<endl;
  cout<<"\nEl pago a realizar es de: $"<<pago<<endl;
  cout<<"\nEl descuento fue de: $ "<<descuento<<endl;                  


}
