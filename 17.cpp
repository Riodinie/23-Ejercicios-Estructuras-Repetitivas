/* 17.	Dos números son amigos si cada uno de ellos es igual a la suma de los divisores del otro. Ejemplo 224 y 284 ya que: 
284: 1 + 2 + 4 +17 + 142= 220
220: 1+2+4+5+10+11+20+22+44+55+110 = 284.
Elabore un programa que imprima todas las parejas de numeros menores o iguales que un numero ingresado. */

#include <iostream>
using namespace std;

int main(){
  long n1, n2, acum1, acum2, N, i;
  
  cout<<"--Numeros amigos--"<<endl;
  
  cout<<"\nIntroduce el maximo (Mayor a 200): ";
  cin>>N;
  cout<<"\nPor favor espere, el programa puede tardar con rangos muy altos."<<endl;
  cout<<"No cierre el programa hasta que apresca un mensaje."<<endl;
  cout<<"\n"<<endl;
    for (n1=2; n1<N; n1= n1+1)
    {  for (n2= n1+ 1; n2<= N; n2= n2+1)
       {  acum1= 0; acum2= 0;
          for (i= 1; i<=n1/2; i= i+1)
          {  if (n1%i== 0)
                acum1= acum1+i;
          }
          for (i= 1; i<=n2/2; i= i+1)
          {  if (n2%i== 0)
                acum2= acum2+i;
          }
          if (n1== acum2 && n2== acum1)
             cout<<n1<< " y " <<n2<<" son amigos."<<endl;
       }
    }

cout <<endl<< "No se encontaron mas amigos.";
    
return 0;
}
