/*18.	Elabore un programa que lea números enteros mientas sean diferentes de 9999 el programa debe escribir
a)	La sumatoria de los números leídos.
b)	El producto.
c)	La cantidad de números leídos,
d)	El mayor número leído
e) El menor numero leido
f)	El número más cercano a 1000
*/

#include <iostream>

using namespace std;

int main()
{

    int n = 0, mayor = -99999999999, menor = 9999999999, a, b = 0, c = 1;
    cout << "Nota: Si desea obtener el resultado escriba (-99)." << endl;

    cout << "\nIngrese los numero que desee para calcular el mayor y el menor entres estos :" << endl;
    cout << "" << endl;
    while (n != 9999)
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

        b = n + b;
        c = n * c;
    }
    cout << "" << endl;
    cout << "Sumatoria de los numeros leidos es: " << b << endl;
    cout << "El producto de los numeros leidos es: " << c << endl;
    cout << "Cantidad de numeros leidos: " << a << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El numero mas cercano a 1000: " << mayor;
}
