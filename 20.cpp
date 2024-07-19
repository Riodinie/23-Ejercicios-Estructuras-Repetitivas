/*20.	Elabore un programa que calcule el máximo común divisor de los dos números*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, r, mcd, mcm, aux;

    cout << "Ingrese dos números para calcular el máximo comun divisor: " << endl;
    cout << "" << endl;
    do
    {
        cout << "Ingrese primer número: ";
        cin >> a;
        cout << "Ingrese segundo número: ";
        cin >> b;
    } while (a < 0 && b < 0);
    mcd = a;
    aux = b;
    do
    {
        r = mcd % aux;
        mcd = aux;
        aux = r;
    } while (r != 0);
    cout << "\nEl máximo comúm divisor es: " << mcd << endl;
    return 0;
}
