/*14.	Elabore un programa que imprima las tablas de multiplicar de un numero determinado.*/

#include <iostream>

using namespace std;

int main()
{
  int mul, num, a = 1;
  cout << "Ingresa el número de la tabla: ";
  cin >> num;
  cout << "" << endl;
  cout << "La tabla del " << num << " es:\n"
       << endl;

  do
  {
    mul = num * a;

    cout << num << " x " << a << " = " << mul << endl;
    a++;

  } while (a <= 10);

  return 0;
}
