/*15.	Elabora un programa que diga si un numero entero es primo o no.*/
#include<iostream>

using namespace std;

int main(){
 int a,i,cont=0;	
	
cout<<"Por favor ingrese un numero: "; cin>>a;
cout<<""<<endl;

for(i=1;i<=a;i++){
	
 if(a%i==0){
 	
 cont=cont+1;
 }
 
}

 if(cont==2){
 	
 cout<<a<<" es un numero primo."<<endl;
 }else{
 cout<<a<<" no es un numero primo"<<endl;
 }
}
