/*3. Calcular independientemente el promedio de los números pares e impares desde el 1 a 200.*/

#include<iostream>

using namespace std;

int main(){
	
int i,s=0,s2=0,c=0,c2=0;
 
 for(i=1;i<=200;i=i+2){
 	s=i+s;
 	c++;
 	
 }	
cout<<"El promedio de todos los numeros impares de el 1 a 200 es: " <<s/c<<endl;

cout<<" "<<endl;

 for(i=2;i<=200;i=i+2){
 	s2=i+s2;
 	c2++;
 }	
 cout<<"El promedio de todos los numeros pares de el 1 a 200 es: "<<s2/c2<<endl;
	
}
