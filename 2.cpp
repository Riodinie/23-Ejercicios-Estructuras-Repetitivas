/*2. Calcular independientemente la suma de los n�meros pares e impares desde el 1 al 200.*/

#include<iostream>

using namespace std;

int main(){
 int i,s=0,s2=0;
 
 for(i=1;i<=200;i=i+2){
 	s=i+s;
 }	
cout<<"La suma de todos los numeros impares de el 1 a 200 es: " <<s<<endl;
cout<<" "<<endl;

 for(i=2;i<=200;i=i+2){
 	s2=i+s2;
 }	
 cout<<"La suma de todos los numeros pares de el 1 a 200 es: "<<s2<<endl;	
}
