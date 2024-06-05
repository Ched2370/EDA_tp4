#include <iostream>
#include <string>
#include <iomanip> // Para el formateo de salida
#include <conio.h>
using namespace std;

/*
Escriba las siguientes funciones:
A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población, 
recibe estos datos como parámetros y devuelve la tasa.
B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, 
recibe estos datos como parámetros y devuelve la tasa.
C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de 
mortalidad, utilice las funciones descriptas en A y B
D. Densidad Poblacional: habitantes por km 2
Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, 
y luego de la opción de calcular: Densidad poblacional, Tasa de natalidad, Tasa de 
Mortalidad y Evolución demográfica, mientras el usuario lo desee.
*/

double tasaNatalidad(int nacimientos, int poblacion) {
    return static_cast<double>(nacimientos) / poblacion * 100;
}

double tasaMortalidad(int fallecimientos, int poblacion) {
    return static_cast<double>(fallecimientos) / poblacion * 100;
}

bool poblacionEnCrecimiento(double tasaNatalidad, double tasaMortalidad) {
    return tasaNatalidad > tasaMortalidad;
}

double densidadPoblacional(int poblacion, double superficie) {
    return poblacion / superficie;
}

int main() {
    string nombrePais;
    int poblacion, nacimientos, fallecimientos;
    double superficie;

    char opcion;
    do {
        cout << "Ingrese el nombre del pais: "; getline(cin >> ws, nombrePais);
        cout << "Ingrese la poblacion del pais: "; cin >> poblacion;
        cout << "Ingrese la superficie del pais en km^2: "; cin >> superficie;
        cout << "Ingrese la cantidad de nacimientos: "; cin >> nacimientos;
        cout << "Ingrese la cantidad de fallecimientos: "; cin >> fallecimientos;
        cout << "\nSeleccione la opcion a calcular:" << endl;
        cout << "A. Densidad Poblacional" << endl;
        cout << "B. Tasa de Natalidad" << endl;
        cout << "C. Tasa de Mortalidad" << endl;
        cout << "D. Evolucion Demografica" << endl;
        cout << "E. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        switch (opcion) {
            case 'A':
            case 'a':
                cout << "La densidad poblacional de " << nombrePais << " es: " << fixed << setprecision(2) << densidadPoblacional(poblacion, superficie) << " habitantes por km^2" << endl;
                break;
            case 'B':
            case 'b':
                cout << "La tasa de natalidad de " << nombrePais << " es: " << fixed << setprecision(2) << tasaNatalidad(nacimientos, poblacion) << "%" << endl;
                break;
            case 'C':
            case 'c':
                cout << "La tasa de mortalidad de " << nombrePais << " es: " << fixed << setprecision(2) << tasaMortalidad(fallecimientos, poblacion) << "%" << endl;
                break;
            case 'D':
            case 'd':
                if (poblacionEnCrecimiento(tasaNatalidad(nacimientos, poblacion), tasaMortalidad(fallecimientos, poblacion))) {
                    cout << "La poblacion de " << nombrePais << " esta en crecimiento." << endl;
                } else {
                    cout << "La poblacion de " << nombrePais << " no esta en crecimiento." << endl;
                }
                break;
            case 'E':
            case 'e':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo." << endl;
        }

        cout << endl;
    } while (opcion != 'E' && opcion != 'e');

    getch();
    return 0;
}
