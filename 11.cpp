/*11.	Elabore un programa que dado un numero entero y la imprima invertida.*/

#include<iostream>

using namespace std;
int main(){

int num;
cout<<"Ingrese el numero que desea invertir: "; 
cin>>num;
cout<<""<<endl;

 while(num>=10){
  cout<<num%10;
  num/=10;
 } 
 cout<<num;
 
 return 0;
}
