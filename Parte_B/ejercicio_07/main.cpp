#include <iostream>
#include <string>
#include <conio.h>
#include <locale.h>
using namespace std;

/*
En la función main, llamar a otra función Friends que reciba un arreglo de estructuras y 
registre datos de 6 amigo/as con: nombre, sexo, si es soltero, y su Instagram. Luego un 
procedimiento muestra los datos de los soltera/os. Y una función medioPomelo, que carga el 
amigoElegido=“ ” (paso por referencia) el primer soltero menor a 30 años; debe además, 
retornar su Instagram.
*/

struct Amigo {
    string nombre;
    char sexo;
    bool esSoltero;
    string instagram;
    int edad;
};

void registrarAmigos(Amigo amigos[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Introduce los datos del amigo/a " << i + 1 << ":" << endl;
        cout << "Nombre: "; cin >> amigos[i].nombre;
        cout << "Sexo (M/F): "; cin >> amigos[i].sexo;
        cout << "Edad: "; cin >> amigos[i].edad;
        char soltero;
        cout << "¿Es soltero/a? (S/N): "; cin >> soltero;

        amigos[i].esSoltero = (soltero == 'S' || soltero == 's');
        cout << "Instagram: "; cin >> amigos[i].instagram;
        cout << endl;
    }
}

void mostrarSolteros(const Amigo amigos[], int size) {
    cout << "Amigos solteros:" << endl;
    for (int i = 0; i < size; ++i) {
        if (amigos[i].esSoltero) {
            cout << "Nombre: " << amigos[i].nombre << ", Sexo: " << amigos[i].sexo << ", Edad: " << amigos[i].edad << ", Instagram: " << amigos[i].instagram << endl;
        }
    }
}

string medioPomelo(const Amigo amigos[], int size, string &amigoElegido) {
    for (int i = 0; i < size; ++i) {
        if (amigos[i].esSoltero && amigos[i].edad < 30) {
            amigoElegido = amigos[i].nombre;
            return amigos[i].instagram;
        }
    }
    amigoElegido = "";
    return "";
}

int main() {
    setlocale(LC_ALL, "spanish");

    const int NUM_AMIGOS = 3;
    Amigo amigos[NUM_AMIGOS];

    registrarAmigos(amigos, NUM_AMIGOS);

    mostrarSolteros(amigos, NUM_AMIGOS);

    string amigoElegido;
    string instagramAmigoElegido = medioPomelo(amigos, NUM_AMIGOS, amigoElegido);

    cout << endl;
    if (!amigoElegido.empty()) {
        cout << "El primer amigo soltero menor de 30 años es: " << amigoElegido << " con Instagram: " << instagramAmigoElegido << endl;
    } else {
        cout << "No hay amigos solteros menores de 30 años." << endl;
    }

    getch();
    return 0;
}
