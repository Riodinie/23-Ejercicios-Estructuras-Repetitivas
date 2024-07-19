/*1. Elabore un programa que lea un numero y calcule la suma desee 1 hasta el numero leido.*/
#include <iostream>

using namespace std;

int main()
{

   int n, x, s;
   cout << "¡Hola!" << endl;
   cout << "Ingrese hasta qué número desea sumar: ";
   cin >> n;
   x = 1;
   s = 0;
   do
   {
      s = x + s;
      cout << x << endl;
      x++;
   } while (x <= n);
   cout << "El resultado de la suma es: " << s;
}
