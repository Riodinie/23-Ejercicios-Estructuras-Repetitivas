/*2. Calcular independientemente la suma de los números pares e impares desde el 1 al 200.*/

#include <iostream>

using namespace std;

int main()
{
	int i, s = 0, s2 = 0;

	for (i = 1; i <= 200; i = i + 2)
	{
		s = i + s;
	}
	cout << "La suma de todos los números impares del 1 al 200 es: " << s << endl;
	cout << " " << endl;

	for (i = 2; i <= 200; i = i + 2)
	{
		s2 = i + s2;
	}
	cout << "La suma de todos los números pares del 1 al 200 es: " << s2 << endl;
}
