/*23.	Elabore un programa que lea un numero N e imprima el menor numero que lo divide exactamente sin dejar
residuo (El numero 1 no se debe considerar y el número no puede primo)*/

#include <iostream>
using namespace std;

int main()
{
	int numero, i, resto, a = 1, men;

	cout << "Digite un número (que no sea primo): ";
	cin >> numero;
	cout << "\nSus divisores son: ";
	for (i = 2; i <= numero; i = i + 1)
	{

		resto = numero % i;
		if (resto == 0)
		{
			a++;
			cout << i << " ";
			if (a == 2)
			{
				men = i;
			}
		}
	}
	cout << "\n"
		 << endl;
	cout << "El menor divisor de " << numero << " es: " << men;
	return 0;
}
