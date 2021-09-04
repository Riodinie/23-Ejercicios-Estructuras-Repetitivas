/*22.	Elabore un programa que calcule el máximo común divisor de cuatro números.*/

#include<iostream>

using namespace std ;

int main(){
	
 int n,i,num,mcd,r;
 cout<<"Ingrese dos numeros para calcular el maximo comun divisor: "<<endl;
 cout<<""<<endl;
 for(int i=0;i<4;i++){
  do{
   cout<<"Ingrese numero #"<<i+1<<" : ";
   cin>>num;
  }while(num<0);
  
  if(i==0){
   mcd=num;
  }
  
  do{
   r=mcd%num;
   mcd=num;
   num=r;
  }while(r!=0);
 }
 cout<<"\nEl maximo comum divisor es :"<<mcd;
 return 0;
}
