/*5. Leer una serie de números y decir cuántos son positivos y cuantos son negativos.*/

#include<iostream>

using namespace std;

int main(){

int i,x,n,positivo=0, negativo=0;

cout<<"Ingrese cantidad de numeros a evaluar: ";
cin>>n;	
cout<<""<<endl;
for(i=1;i<=n;i++){
 cout<<"N"<<i<<": ";
 cin>>x;
 if(x>0){
 	positivo++;
 }else{
  negativo++;
 }

}

cout<<"La cantidad de positivos es de: "<<positivo<<endl;
cout<<"La cantidad de negativos es de: "<<negativo<<endl;
	
}
