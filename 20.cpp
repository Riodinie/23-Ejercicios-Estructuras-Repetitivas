/*20.	Elabore un programa que calcule el m�ximo com�n divisor de los dos n�meros*/
#include<iostream>
using namespace std ;
int main(){
 int a,b,r,mcd,mcm,aux;
 
 cout<<"Ingrese dos numeros para calcular el maximo comun divisor: "<<endl;
 cout<<""<<endl;
 do{
  cout<<"Ingrese primer numero :";
  cin>>a;
  cout<<"Ingrese segundo numero :";
  cin>>b;
 }while(a<0 && b<0);
 mcd=a;
 aux=b;
 do{
  r=mcd%aux;
  mcd=aux;
  aux=r;
 }while(r!=0);
 cout<<"\nEl maximo comum divisor es :"<<mcd<<endl;
 return 0;
}
