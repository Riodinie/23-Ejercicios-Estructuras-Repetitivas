/*16.	Calcule la suma de los n primeros números impares.*/

#include<iostream>

using namespace std;

int main(){
 int i,s=0,s2=0,n;
 
 cout<<"Escriba el rango de numeros impares que desea sumar (1 hasta n): ";
 cin>>n;
 
 for(i=1;i<=n;i=i+2){
 	s=i+s;
 }	
cout<<"\nLa suma de todos los numeros impares es de: "<<s<<endl;

return  0;

}
