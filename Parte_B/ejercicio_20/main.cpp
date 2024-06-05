#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

/*
En un club donde se practica combate, se carga el peso de los boxeadores. El club tiene una 
capacidad máxima de 80 deportistas. Llamar/invocar a todas las funciones/procedimientos. 
Usar al menos 1 arreglo. Debe haber con una función o procedimiento, según sea más 
conveniente que:

a) Permita ingresar Deportista (string/char * nombre, y float peso). Validar el peso entre 
40 y hasta 120.

b) Calcule cuántas/os boxeadores son de las siguientes categorías:
    A- Mosca (hasta 52kg)
    B- Ligero (entre 52 y 63kg)
    C- Wélter (entre 63 y 69kg)
    D- Pesado más de 69 kg
c) Una función o procedimiento, para mostrar todos los pesos cargados en el club

d) También se debe encontrar el peso máximo de cada categoría cargada

e) Calcule y muestre la cantidad de deportista por cada categoría (mosca, ligero, wélter, 
pesado)

f) Encuentre el peso máximo cargado de todos los boxeadores, y lo devuelva al main
*/

const int MAX_DEPORTISTAS = 80;

struct Deportista {
    string nombre;
    float peso;
};

void ingresarDeportista(Deportista deportistas[], int& cantidad) {
    if (cantidad < MAX_DEPORTISTAS) {
        cout << "Ingrese el nombre del deportista: "; cin >> deportistas[cantidad].nombre;

        do {
            cout << "Ingrese el peso del deportista: "; cin >> deportistas[cantidad].peso;
            if (deportistas[cantidad].peso < 40 || deportistas[cantidad].peso > 120) {
                cout << "Error: El peso debe estar entre 40 y 120 kg." << endl;
            }
        } while (deportistas[cantidad].peso < 40 || deportistas[cantidad].peso > 120);

        cantidad++;
    } else {
        cout << "El club ha alcanzado su capacidad maxima de deportistas." << endl;
    }
}

void categorizarDeportistas(const Deportista deportistas[], int cantidad) {
    int mosca = 0, ligero = 0, welter = 0, pesado = 0;
    float pesoMaxMosca = 0, pesoMaxLigero = 0, pesoMaxWelter = 0, pesoMaxPesado = 0;

    for (int i = 0; i < cantidad; ++i) {
        if (deportistas[i].peso <= 52) {
            mosca++;
            if (deportistas[i].peso > pesoMaxMosca) {
                pesoMaxMosca = deportistas[i].peso;
            }
        } else if (deportistas[i].peso > 52 && deportistas[i].peso <= 63) {
            ligero++;
            if (deportistas[i].peso > pesoMaxLigero) {
                pesoMaxLigero = deportistas[i].peso;
            }
        } else if (deportistas[i].peso > 63 && deportistas[i].peso <= 69) {
            welter++;
            if (deportistas[i].peso > pesoMaxWelter) {
                pesoMaxWelter = deportistas[i].peso;
            }
        } else {
            pesado++;
            if (deportistas[i].peso > pesoMaxPesado) {
                pesoMaxPesado = deportistas[i].peso;
            }
        }
    }

    cout << "Cantidad de deportistas en cada categoria:" << endl;
    cout << "Mosca: " << mosca << endl;
    cout << "Ligero: " << ligero << endl;
    cout << "Welter: " << welter << endl;
    cout << "Pesado: " << pesado << endl;

    cout << "Peso maximo en cada categoria:" << endl;
    cout << "Mosca: " << pesoMaxMosca << " kg" << endl;
    cout << "Ligero: " << pesoMaxLigero << " kg" << endl;
    cout << "Welter: " << pesoMaxWelter << " kg" << endl;
    cout << "Pesado: " << pesoMaxPesado << " kg" << endl;
}

void mostrarPesos(const Deportista deportistas[], int cantidad) {
    cout << "Pesos de todos los deportistas en el club:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << deportistas[i].peso << " ";
    }
    cout << endl;
}

float pesoMaximo(const Deportista deportistas[], int cantidad) {
    float pesoMax = deportistas[0].peso;
    for (int i = 1; i < cantidad; ++i) {
        if (deportistas[i].peso > pesoMax) {
            pesoMax = deportistas[i].peso;
        }
    }
    return pesoMax;
}

int main() {
    Deportista deportistas[MAX_DEPORTISTAS];
    int cantidadDeportistas = 0;

    char opcion;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Ingresar deportista" << endl;
        cout << "2. Categorizar deportistas" << endl;
        cout << "3. Mostrar todos los pesos" << endl;
        cout << "4. Peso maximo cargado" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: "; cin >> opcion;

        switch (opcion) {
            case '1':
                ingresarDeportista(deportistas, cantidadDeportistas); break;
            case '2':
                categorizarDeportistas(deportistas, cantidadDeportistas); break;
            case '3':
                mostrarPesos(deportistas, cantidadDeportistas); break;
            case '4':
                cout << "El peso maximo cargado es: " << pesoMaximo(deportistas, cantidadDeportistas) << " kg" << endl; break;
            case '5':
                cout << "Saliendo del programa..." << endl; break;
            default:
                cout << "Opcion no valida. Intentelo de nuevo." << endl;
        }
    } while (opcion != '5');


    getch();
    return 0;
}

