/*4.	Leer una serie de números hasta que el usuario ingrese el valor de -99 y escriba el número mayor y el número menor. */

#include <iostream>

using namespace std;

int main()
{
    int n, mayor = -9999999, menor = 99999999, x = -99, a = 0;;
    cout << "Nota: Si desea obtener el resultado, escriba (-99)." << endl;

    cout << "\nIngrese los números que desee para calcular el mayor y el menor entre estos: " << endl;
    cout << "" << endl;
    while (n != -99)
    {
        a++;
        cout << "N: ";
        cin >> n;

        if (mayor < n)
        {
            mayor = n;
        }

        if (menor > n)
        {
            menor = n;
        }
    }
    cout << " " << endl;
    cout << "El número mayor es:" << mayor << endl;
    cout << "El número menor es:" << menor << endl;
}
