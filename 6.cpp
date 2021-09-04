/*6.	Escriba un programa que calcule el IVA de un producto. Teniendo en cuenta que si cuesta mas de 50.000 se obtiene un descuento antes 
del Iva del 5% y si la cuenta cuesta mas de 100.00 se obtiene un descuento del 10%. */

#include<iostream>

using namespace std;

int main(){
	
	int prod, prom,a,b;
	cout<<"Bienvenid@!\n"<<endl;
	cout<<"Ingrese el precio del producto: "; 
	cin>>prod;
	prom = prod;
	
	if(prod<50000){
	 a = (prod*0.19)+(prod);
	 cout<<"Iva del producto: "<<(prod*0.19);
	 cout<<"\nEl precio del producto + el iva es de: "<<a<<endl;	
	}
	if(prod>=50000 && prod<100000){
		prod = ((prod/100)*5);
		a = (prom-prod);
		cout<<"\nEl producto con el descuento tendria el valor de: "<<a<<endl;
		b=(a*0.19)+(a);
		cout<<"Iva del producto: "<<(a*0.19);
		cout<<"\nEl precio del producto + el iva es de: "<<b<<endl;
	}
	if(prod>=100000){
		prod = ((prod/100)*10);
		a=(prom-prod);
		cout<<"\nEl producto con el descuento tendria el valor de: "<<a<<endl;
		b=(a*0.19)+(a);
		cout<<"Iva del producto: "<<(a*0.19);
		cout<<"\nEl precio del producto + el iva es de: "<<b<<endl;
	}
	
	return 0;
}
