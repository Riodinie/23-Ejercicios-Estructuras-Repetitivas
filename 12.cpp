/*12.	Escribir un programa que imprima la secuencia de todas las combinaciones de hora y minutos de un día con 1:00 AM y terminando con 
12:50 Pm en intervalos de 10 minutos. */

#include<iostream>

using namespace std;

int main(){
	
 int a=0,i=1;
 string t = " A.M";
 cout<<"Secuencia de todas las combinaciones de hora y minutos de un dia desde 1:00 AM hasta 12:50 PM en intervalos de 10 minutos: \n"<<endl; 
 while(i!=13){
  if(a==6){
  	i++;
  	a=0;
  	cout<<""<<endl;
  	
  }
  if(i==12){
  	t =" P.M";
  }
  if(i!=13){
  cout<<i<<":"<<a<<"0"<<t<<"  ";
  a++;
  
  }
  
 }

}
