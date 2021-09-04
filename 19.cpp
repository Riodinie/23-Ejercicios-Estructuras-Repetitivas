/*19.	Elabore un programa que escriba todos los números de tres dígitos que sean iguales a la suma de los cubos de sus dígitos 
los números pedidos deben estar en el rango .*/

#include<iostream>

using namespace std;

int main(){
 int x=1,y=0,z=-1,num3;
 cout<<"Numeros de tres digitos que sean iguales a la suma de los cubos de sus digitos (100 a 1000): "<<endl;
 cout<<""<<endl; 
 for(num3=100;num3<=999;num3++){
 	
 	
 	 z++;
 	if(z==10){
 	 z=0;
 	 y++;
 	}
 	
 	if(y==10){
 	 y=0;
 	 x++;
 	}
 	
 	if(x*x*x + y*y*y+ z*z*z == num3){
      cout<<x<<"^3 +"<<y<<"^3 +"<<z<<"^3 = "<<num3<<endl;
    } 
 	
 	
 	
 }		
	
}
