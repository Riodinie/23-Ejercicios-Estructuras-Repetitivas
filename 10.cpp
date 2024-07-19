/*10.	Elabora un programa que escribe la serie de Fibonacci.
0,1,1,2,2,3,5,8,13,...(n-1) + (n-2)*/


#include<iostream>

using namespace std;
int main(){

int _numero, a, b, tmp;
	
  cout<<"Serie de Fibonacci"<<endl;
  
  cout<<"Por favor, ingrese la cantidad de números de la serie que se imprimirán: ";
   cin>>_numero;
  cout<<""<<endl;
   b = 1;
	
    for(int i=1;i<=_numero;i++){
    	
    cout<<a<<endl;
    
        tmp = a + b;
        a = b;
        b = tmp;
    	
    } 
        
	return 0;
}

