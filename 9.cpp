/*9.	Calcule la división entera y el residuo utilizando únicamente operaciones de suma y resta.


 */


#include<iostream>

using namespace std;
int main(){
	
int cociente, dividendo, divisor, resto;

cout<<"Introduzca dividendo (entero):";
    cin>>dividendo;
    
cout<<"\nIntroduzca divisor (entero): ";
    cin>>divisor;
    
    if ( dividendo > 0 && divisor > 0 ) {
        cociente = 0;
        resto = dividendo;

        while ( resto >= divisor )
        {
            resto -= divisor;
            cociente++;
        }
        
    cout<<dividendo<<"/"<<divisor<<" = "<<cociente<<endl;
	cout<<"Residuo = "<<resto;
    
    }else{
    	
     cout<<"\nERROR: Ambos numeros deben ser mayores que cero.";	
    	
    }
        
 
   
}
