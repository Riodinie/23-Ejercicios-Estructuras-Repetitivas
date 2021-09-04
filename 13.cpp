/*13.	Elabore un programa que lea cuatro cifras individuales y genere e imprime el numero entero que se forma con estas cuatro cifras. */

#include<iostream>

using namespace std;

int main(){
	
int num,i=0,n[i];

cout<<"Digite 4 cifras: \n"<<endl;
	
for(num=1;num<=4;num++){
 cout<<"#"<<num<<" Cifra: ";
 cin>>n[num];
}
 cout<<"\nNumero entero: "<<n[1]<<n[2]<<n[3]<<n[4];
}
