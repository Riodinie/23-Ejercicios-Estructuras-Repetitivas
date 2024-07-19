/*8.	Se quiere obtener la estadística de los pesos de los alumnos del curso de acuerdo con la siguiente tabla.
a)	Numero de alumnos con peso menor que 40kg.
b)	Numero de alumnos con peso entre 40kg y 50kg.
c)	Numero se alumnos con peso entre 50kg y 60kg.
d)	Numero de alumnos con peso mayor a 60kg. */

#include <iostream>

using namespace std;
int main()
{

  int alum, i, a = 0, b = 0, c = 0, d = 0, peso;

  cout << "Bienvenid@!\n"
       << endl;
  cout << "Ingrese el número de alumnos del curso: ";
  cin >> alum;
  cout << "" << endl;
  for (i = 1; i <= alum; i++)
  {

    cout << "Alumno#" << i << ": ";
    cin >> peso;

    if (peso < 40)
    {
      a++;
    }

    if (peso >= 40 && peso <= 50)
    {
      b++;
    }

    if (peso >= 50 && peso <= 60)
    {
      c++;
    }

    if (peso > 60)
    {
      d++;
    }
  }
  cout << "___________________________________________________________" << endl;
  cout << "La catidad de alumnos con peso menor que 40kg es: " << a << endl;
  cout << "\nLa cantidad de alumnos con peso entre 40kg y 50kg es: " << b << endl;
  cout << "\nLa cantidad de alumnos con peso entre 50kg y 60kg es: " << c << endl;
  cout << "\nLa cantidad dealumnos con peso mayor a 60kg es: " << d << endl;
}
