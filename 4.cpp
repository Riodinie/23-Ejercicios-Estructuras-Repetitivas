/*4.	Leer una serie de n�meros hasta que el usuario ingrese el valor de -99 y escriba el n�mero mayor y el n�mero menor. */

#include<iostream>

using namespace std;

int main(){
int n, mayor = -9999999,menor = 99999999, x = -99,a;
 cout<<"Nota: Si desea obtener el resultado escriba (-99)."<<endl;
 
 cout<<"\nIngrese los numero que desee para calcular el mayor y el menor entres estos :"<<endl;
 cout<<""<<endl;
 while(n!=-99){
 a++;
 cout<<"N: ";	
 cin>>n;
 
 	
 if(mayor<n){	
 mayor = n;
 }	
 
 if(menor>n){	
 menor = n;
 }	
	
 	
 }
 cout<<" "<<endl;
 cout<<"El numero mayor es:"<<mayor<<endl;
 cout<<"El numero menor es:"<<menor<<endl;
}
